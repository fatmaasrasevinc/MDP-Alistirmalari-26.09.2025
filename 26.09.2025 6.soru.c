#include <stdio.h>
#include <stdlib.h>


int ilk_sayi;
int ikinci_sayi;
int ucuncu_sayi;

int main() {
printf("Sayilari giriniz: ");
scanf("%d %d %d", &ilk_sayi, &ikinci_sayi, &ucuncu_sayi);

if (ilk_sayi <= ikinci_sayi && ilk_sayi <= ucuncu_sayi) {
    if (ikinci_sayi <= ucuncu_sayi)
        printf("%d,%d,%d\n", ilk_sayi, ikinci_sayi, ucuncu_sayi);
    else
        printf("%d,%d,%d\n", ilk_sayi, ucuncu_sayi, ikinci_sayi);
}
else if (ikinci_sayi <= ilk_sayi && ikinci_sayi <= ucuncu_sayi) {
    if (ilk_sayi <= ucuncu_sayi)
        printf("%d,%d,%d\n", ikinci_sayi, ilk_sayi, ucuncu_sayi);
    else
        printf("%d,%d,%d\n", ikinci_sayi, ucuncu_sayi, ilk_sayi);
}
else {
    if (ilk_sayi <= ikinci_sayi)
        printf("%d,%d,%d\n", ucuncu_sayi, ilk_sayi, ikinci_sayi);
    else
        printf("%d,%d,%d\n", ucuncu_sayi, ikinci_sayi, ilk_sayi);
}

return 0;

}
