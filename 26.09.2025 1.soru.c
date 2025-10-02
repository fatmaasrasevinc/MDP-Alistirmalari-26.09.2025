#include <stdio.h>
#include <stdlib.h>

int sayi_1;
int sayi_2;
int main()

{

printf("Ilk sayiyi giriniz:");
if(scanf ("%d", &sayi_1) != 1) {
    printf("Sadece TAM SAYI giriniz!\n");
}

printf ("Ikinci sayiyi giriniz:");
if(scanf ("%d", &sayi_2) != 1) {
    printf("Sadece TAM SAYI giriniz!\n");
}

printf("Sayilarin toplami:%d\n",sayi_1 + sayi_2);
printf("Sayilarin farki:%d\n", abs (sayi_1 - sayi_2));
printf("Sayilarin carpimi:%d\n",sayi_1 * sayi_2);
printf("Sayilarin bolumu:%d\n",sayi_1 / sayi_2);

return 0;

}
