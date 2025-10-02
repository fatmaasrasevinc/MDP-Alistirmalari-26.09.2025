#include <stdio.h>
#include <stdlib.h>

float sayi_1;
float sayi_2;
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
printf("Sayilarin bolumu:%f\n", (float) sayi_1 / sayi_2);

return 0;

}
