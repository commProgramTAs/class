#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <graphics.h>

int x = 0, y = 0;

int main(){
    // 生成畫布
    initwindow(800, 600);

    char input = 向右;
    int array[60][80] = {}; // 二維陣列，因為 winBGIm 畫布的單位是pixel，我規劃一格陣列為 10 pixel * 10 pixel 的大小。這部分可以依照你初始化出來的畫布大小去做調整

    // 隨機生成食物

    for (;;) { // 最外面的無窮迴圈，讓程式不斷刷新畫面
        cleardevice();  // 清空畫面

        if (kbhit())    // 檢查使用者輸入
            input = getch();

        if (input == 向右) {  // 使用者輸入向右
            if (x >= 80) { // 如果下一步超出範圍
                //...
            }
            // 計算小精靈的下一步位置
            // 然後在陣列中標示出來
        }
        else if (input == 向左) {
            // ...
        }
        else if (input == 向上) {
            // ...
        }
        else if (input == 向下) {
            // ...
        }

        int i, j;
        for (i = 0; i < 80; i++) { // 瀏覽整個二維陣列
            for (j = 0; j < 60; j++) {
                // 當二維array的內容為食物則畫出食物
                // 當二維array的內容為小精靈則畫出小精靈
                //...
                if (array[j][i] == 向右) {
                    // 畫出向右的小精靈，注意 winBGIm 的座標單位通通都是 pixel
                    array[j][i] = 0; // 記得陣列要歸 0，要不然會出現殘影
                }
                else if (array[j][i] == 向左) {
                    // ...
                }
                else if (array[j][i] == 向上) {
                    // ...
                }
                else if (array[j][i] == 向下) {
                    // ...
                }
                else if (array[j][i] == 食物) {
                    // 畫出食物
                }
            }
        }
        if () { // 如果食物不見了
            // 重新隨機生成食物
        }
        swapbuffers();  // 前景後景互換
        delay(70);  // 延遲 70 毫秒
    }
    //關閉畫面

    return 0;
}
