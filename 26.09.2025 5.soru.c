#include <stdio.h>
#include <stdlib.h>


float ortalama_not;
int toplam;
int not;
int ogrenci;
int sinav_no;

int main() {

for (ogrenci = 1; ogrenci <= 4; ogrenci++) {
    toplam = 0;
    printf("%d. ogrencinin notlarini giriniz:\n", ogrenci);

    for (sinav_no = 1; sinav_no <= 4; sinav_no++) {
        printf("%d. sinav: ", sinav_no);
        scanf("%d", &not);
        toplam = toplam + not;
    }

    ortalama_not = toplam / 4.0;
    printf("%d. Ogrencinin not ortalamasi: %.2f\n", ogrenci, ortalama_not);

    if (ortalama_not >= 50)
        printf("%d. Ogrenci gecti.\n", ogrenci);
    else
        printf("%d. Ogrenci kaldi.\n", ogrenci);

    printf("\n");
   }

    return 0;
}
