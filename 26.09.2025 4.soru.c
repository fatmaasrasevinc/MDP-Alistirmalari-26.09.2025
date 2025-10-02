#include <stdio.h>
#include <stdlib.h>

int sayi;
int deger;
int main()
{
    printf("Sayi giriniz:");
    scanf("%d", &sayi);

    for(deger=1; deger <= sayi; deger++)
    {
        if (deger>50) {
                break;
    }
       else if (deger % 3 == 0){
                continue;
    }

    printf("%d\n", deger);
}
    return 0;
}
