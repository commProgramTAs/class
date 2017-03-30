#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <graphics.h>

#define max_x 800
#define max_y 600
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77
#define SPACE 32
#define ESC 27

const char* pac_man_right = "pac_man_right.bmp";
const char* pac_man_left = "pac_man_left.bmp";
const char* pac_man_top = "pac_man_top.bmp";
const char* pac_man_down = "pac_man_down.bmp";

int i = 0, j = 0, seta = 0, dir = 1;
int arr[max_y / 10][max_x / 10], x, y, food_x, food_y;
int score = -1, input = 77;
void control(char);

int main(){
    initwindow(max_x, max_y);
    //initgraph(&gdriver, &gmode, "");      // 初始化視窗
    srand(time(NULL));
    food_x = (rand() % 80);    // 亂數決定食物位址
    food_y = (rand() % 60);
    char input = RIGHT;

    memset(arr, 0, sizeof(int) * 4800);

    for (;;) {
        cleardevice();
        control(input);
        char score_tip[9] = "score: ";
        score_tip[7] = '0' + score;
        score_tip[8] = '\0';
        if(score == 9){
            strcpy(score_tip, "finish!!\0");
            outtextxy(360, 300, score_tip);
            swapbuffers();
            break;
            //getch();
        }
        outtextxy(360, 300, score_tip);
        swapbuffers();
        delay(70);
        if (kbhit())
            input = getch();
    }

    /*clean up */
    getch();
    closegraph();
    return 0;
}

void control(char input) {

    if (input == RIGHT) {
        dir = 1;
        if (i < 80) {
            i++;
        }
        else {
            i = 0;
        }
    }
    else if (input == LEFT) {
        dir = 2;
        if(i > 0){
            i--;
        }
        else {
            i = 79;
        }
    }
    else if (input == UP) {
        dir = 3;
        if (j > 0) {
            j--;
        }
        else {
            j = 59;
        }
    }
    else if (input == DOWN) {
        dir = 4;
        if(j < 60){
            j++;
        }
        else {
            j = 0;
        }
    }
    else if (input == ESC) {

    }
    arr[j][i] = dir;


    for (x = 0; x < max_x; x += 10) {
        for (y = 0; y < max_y; y += 10){
                switch (arr[y / 10][x / 10]) {
                case 1:
                    readimagefile(pac_man_right, x - 16, y - 16, x + 16, y + 16);
                    arr[y / 10][x / 10] = 0;
                    break;//印出→向
                case 2:
                    readimagefile(pac_man_left, x - 16, y - 16, x + 16, y + 16);
                    arr[y / 10][x / 10] = 0;
                    break;//印出←向
                case 3:
                    readimagefile(pac_man_top, x - 16, y - 16, x + 16, y + 16);
                    arr[y / 10][x / 10] = 0;
                    break;//印出↑向
                case 4:
                    readimagefile(pac_man_down, x - 16, y - 16, x + 16, y + 16);
                    arr[y / 10][x / 10] = 0;
                    break;//印出↓向
                case 5:
                    circle(x, y, 5);
                    break;
            }
        }
    }

    if (arr[food_y][food_x] != 5) {
        food_x = (rand() % 80);    // 亂數決定食物位址
        food_y = (rand() % 60);
        score++;
        arr[food_y][food_x] = 5;    // 決定食物位址
    }

}
