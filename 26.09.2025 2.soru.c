#include <stdio.h>
#include <stdlib.h>

float sayi;
int main()
{
    printf("Bir sayi giriniz:");
    scanf("%f", &sayi);

    if (sayi > 0) {
      printf("Pozitif.");

}
  else if (sayi == 0) {
      printf("Sifir.");
}
  else {
      printf("Negatif.");
}
    return 0;
}
