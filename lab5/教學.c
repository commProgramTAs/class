#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <graphics.h>

int x = 0, y = 0;

int main(){
    // �ͦ��e��
    initwindow(800, 600);

    char input = �V�k;
    int array[60][80] = {}; // �G���}�C�A�]�� winBGIm �e�������Opixel�A�ڳW���@��}�C�� 10 pixel * 10 pixel ���j�p�C�o�����i�H�̷ӧA��l�ƥX�Ӫ��e���j�p�h���վ�

    // �H���ͦ�����

    for (;;) { // �̥~�����L�a�j��A���{�����_��s�e��
        cleardevice();  // �M�ŵe��

        if (kbhit())    // �ˬd�ϥΪ̿�J
            input = getch();

        if (input == �V�k) {  // �ϥΪ̿�J�V�k
            if (x >= 80) { // �p�G�U�@�B�W�X�d��
                //...
            }
            // �p��p���F���U�@�B��m
            // �M��b�}�C���ХܥX��
        }
        else if (input == �V��) {
            // ...
        }
        else if (input == �V�W) {
            // ...
        }
        else if (input == �V�U) {
            // ...
        }

        int i, j;
        for (i = 0; i < 80; i++) { // �s����ӤG���}�C
            for (j = 0; j < 60; j++) {
                // ��G��array�����e�������h�e�X����
                // ��G��array�����e���p���F�h�e�X�p���F
                //...
                if (array[j][i] == �V�k) {
                    // �e�X�V�k���p���F�A�`�N winBGIm ���y�г��q�q���O pixel
                    array[j][i] = 0; // �O�o�}�C�n�k 0�A�n���M�|�X�{�ݼv
                }
                else if (array[j][i] == �V��) {
                    // ...
                }
                else if (array[j][i] == �V�W) {
                    // ...
                }
                else if (array[j][i] == �V�U) {
                    // ...
                }
                else if (array[j][i] == ����) {
                    // �e�X����
                }
            }
        }
        if () { // �p�G���������F
            // ���s�H���ͦ�����
        }
        swapbuffers();  // �e���ᴺ����
        delay(70);  // ���� 70 �@��
    }
    //�����e��

    return 0;
}
