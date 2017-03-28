#include <stdio.h>
#include <stdlib.h>

char* add(char*, char*);     // 計算加法
char* sub(char*, char*);     // 計算減法
char* mul(char*, char*);     // 計算乘法
char* divi(char*, char*);    // 計算除法
//utils....
char* resv(char*);          // 將陣列反轉
int ctoi(char);             // 將 char 轉成 int
char itoc(int);             // 將 int 轉成 char
size_t len(const char*);    // 計算陣列的內容長度


int main() {
    while (1) {
        char n1[100] = {}, n2[100] = {}, output[100000] = {};
        char input[200] = {};
        int i, tmp = 0;     // tmp 用來判斷是否是第二個運算元
        char operator;
        scanf("%s", &input);
        if (input == "exit") break;
        /*
        倒序填入數字
        不一定要倒序填入陣列，不過填入陣列的順序跟處理計算的順序一定是相反
        */
        for (i = len(input) - 1; i >= 0; i--) {
            // 如果是數字
            if (ctoi(input[i]) != -1) {
                switch (tmp) {
                case 0:
                    n2[len(n2)] = input[i];
                    break;
                case 1:
                    n1[len(n1)] = input[i];
                    break;
                }
            // 如果是符號
            } else {
                operator = input[i];
                tmp++;
            }
        }
        switch (operator) {
        case '+':
            printf("= %s\n",add(n1,n2));
            break;
        case '-':
            printf("= %s\n",sub(n1,n2));
            break;
        case '*':
            printf("= %s\n",mul(n1,n2));
            break;
        case '/':
            printf("= %s\n",divi(n1,n2));
            break;
        }
        printf("----------------------\n");
    }


    return 0;
}

// 加法
char* add(char* n1, char* n2) {
    int i = 0, carry = 0, max;
    char out[100000] = {};
    max = len(n1) >= len(n2) ? len(n1) : len(n2);
    while (i < max) {
        int a = i >= len(n1) ? 0 : ctoi(n1[i]);
        int b = i >= len(n2) ? 0 : ctoi(n2[i]);
        int sum = a + b + carry;

        out[i] = itoc(sum % 10); // (char)(sum % 10)，將相加過的結果存到另一個陣列
        carry = sum < 10 ? 0 : (sum - (sum % 10)) / 10;
        i++;
    }
    // 檢查數列最後有沒有進位，有的話下一位等於進位數
    if (carry > 0) out[i] = itoc(carry);

    return resv(out);
}

// 減法
char* sub(char* n1, char* n2) {
    int i = 0, j, k, max;
    char out[100000] = {};
    max = len(n1) >= len(n2) ? len(n1) : len(n2);

    // 判斷這個計算會不會產生負號
    int flag = 0;
    if (len(n1) < len(n2)) {    // 第二個運算元的位數比第一個運算元長，結果肯定為負
        flag = 1;
    }
    else if (len(n1) == len(n2)) {      // 若兩個運算元的位數相等
        int j;
        for (j = max - 1; j >= 0; j--){     // 比對兩者看誰大
            if (ctoi(n1[j]) > ctoi(n2[j])) {
                break;
            }
            else if (ctoi(n1[j]) < ctoi(n2[j])) {
                flag = 1;
                break;
            }
        }
    }
    else {
        flag = 0;
    }

    // 開始做減法處理
    while (i < max) {
        int a = i>= len(n1) ? 0 : ctoi(n1[i]);
        int b = i>= len(n2) ? 0 : ctoi(n2[i]);
        int sum;

        if (flag) {          // 小 - 大
            a = i >= len(n2) ? 0 : ctoi(n2[i]);
            b = i >= len(n1) ? 0 : ctoi(n1[i]);

            if (a >= b) {    // 夠減
                sum = a - b;
            }
            else {           // 不夠減則借位
                sum = (a + 10) - b;
                n2[i + 1] = itoc(ctoi(n2[i + 1]) - 1);
            }
        }
        else {              // 正常大 - 小
            if (a >= b) {
                sum = a - b;
            }
            else {
                sum = (a + 10) - b;
                n1[i + 1] = itoc(ctoi(n1[i + 1]) - 1);
            }
        }
        out[i] = itoc(sum); // (char)(sum % 10)，將相減過的結果存到另一個陣列
        i++;
    }

    // 刪減多餘的0
    for (j = len(out) - 1; j > 0; j--) {
        if (ctoi(out[j]) == 0) {
            out[j] = NULL;
        }else{
            break;
        }
    }

    if (flag) out[len(out)] = '-';
    //printf("%s\n",resv(out));
    return resv(out);
}

// 乘法
/*
example:
        9 9 => a
    x   9 8 => b
    --------
      7 9 2
    8 7 1
    --------
   8 14 10 2   => tmp
   9  5  0 2   => out
*/
char* mul(char* n1, char* n2) {
    int i, j;
    int flag = 0;
    int max, min;
    int tmp[100000] = {};
    char out[100000] = {};

    if (len(n1) >= len(n2)) {
        max = len(n1);
        min = len(n2);
        flag = 1;
    }
    else {
        max = len(n2);
        min = len(n1);
        flag = 0;
    }

    for (i = 0; i < min; i++) {
        for (j = 0; j < max; j++) {
            int m1, m2;
            if (flag) {
                m1 = ctoi(n1[j]);
                m2 = ctoi(n2[i]);
            }
            else {
                m1 = ctoi(n1[i]);
                m2 = ctoi(n2[j]);
            }
            tmp[i + j] += m1 * m2;
        }
    }

    size_t xx;
    for (xx = sizeof(tmp) / sizeof(int) - 1; xx > 0; xx--) {
        if (tmp[xx] == 0) {
            tmp[xx] = -1;
        }
        else {
            break;
        }
    }
    for (xx = 0; tmp[xx] != -1; xx++);
    int carry = 0;

    for (i = 0; i < xx; i++) {
        int sum = tmp[i] + carry;
        out[i] = itoc(sum % 10);
        carry = sum < 10 ? 0 : (sum - (sum % 10)) / 10;
    }
    if (carry > 0) out[i] = itoc(carry);
    return resv(out);
}

// 除法
char* divi(char* n1,char* n2){

    int flag = 0 , i, max;
    char* out = "0";
    char* addone = "1";
    char* tmp;
    max = len(n1);
    while (flag == 0) {
        out = resv(add(out,addone));
        tmp = resv(mul(n2,out));

        if(len(tmp)>len(n1)){
            flag = 1;break;
        }else if(len(tmp)==len(n1)){
            int j ;
            for(j=max-1; j>=0; j--){
                if(ctoi(tmp[j])==ctoi(n1[j])){}
                else if(ctoi(tmp[j])<ctoi(n1[j])){
                    flag = 0;break;
                }else if(ctoi(tmp[j])>ctoi(n1[j])){
                    flag = 1;break;
                }
            }
        }
        if(flag) break;
    }
    return sub(out,addone);
}

// 陣列反轉
char* resv(char* chararr){
    int l = len(chararr);
    int i;
    char* re = (char*)malloc((l + 1) * sizeof(char));
    re[l] = '\0';
    for(i = 0; i < l; i++) {
        re[i] = chararr[l - 1 - i];
    }
    return re;
}

// Get char array length
size_t len(const char *str)
{
  size_t i;
  for (i = 0; str[i]; i++);
  return i;
}

// Char to Int
int ctoi(char c){
    int ascii = (int)c;
    if(ascii>=48 && ascii<=57){
        return ascii-48;
    }else{
        return -1;
    }
}

// Int to Char
char itoc(int i){
    return (char)(i+48);
}
