#include <winbgim.h>

int main(){
    initwindow(300, 300);
    setbkcolor(1);
    cleardevice();
    setcolor(14);
    outtextxy(50, 100, "Graphics in CodeBlocks");
    while (!kbhit()) delay(1);
    getmouseclick(WM_MOUSEMOVE, );

    return 0;
}
