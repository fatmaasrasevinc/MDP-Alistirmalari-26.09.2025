#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

char harf;
char bosluk = 32; // ascii tablo karþýlýðýný kullandým
int i;
int a;
int kay = 10;

int main() {
    printf("Bir harf giriniz: ");
    scanf(" %c", &harf);

while (1) {

    for (i = 0; i <= kay; i++) {
        for (a = 0; a < i; a++) {
            printf("%c", bosluk);
        }
        printf("%c\n", harf);
        Sleep(100);
    }


    for (i = kay; i >= 0; i--) {
        for (a = 0; a < i; a++) {
            printf("%c", bosluk);
        }
        printf("%c\n", harf);
        Sleep(100);
    }
    }

return 0;
}
