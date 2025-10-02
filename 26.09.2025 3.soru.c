#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char harf;
char sesli_harfler[] = "aeiouAEIOU";
int main() {
printf("Bir harf giriniz: ");
    scanf(" %c", &harf);

if (strchr(sesli_harfler, harf)){
        printf("Sesli harf\n");
    } else {
        printf("Sessiz harf\n");
    }

    return 0;
}
