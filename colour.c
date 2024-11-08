#include <stdio.h>

int main() {
    for (int i = 0; i < 256; i++) {
        //printf("\033[00;%2dm%2d\033[00;00m\n", i, i);
        printf("\033[48;5;%dm%3d   \033[00;00m\n", i, i);
    }
    int array[100] = {2, 10, 22, 28, 29, 34, 35, 40, 41, 42, 46, 47, 48, 49, 82, 83, };
}
//00: default, 30: black, 31: red, 32: green, 33: yellow, 34: purple, 35: pink, 36: cyan, 37: grey,