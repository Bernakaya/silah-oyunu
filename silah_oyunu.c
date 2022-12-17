#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mermi = 30;
    int secim;
    int i = 0;
    int sayi;
    printf("Ates etmek istediðiniz mermi sayisini giriniz");
    scanf("%d", &sayi);

    for (i = 0; i <= sayi; i++)
    {
        if (sayi <= 30)
            printf("pat\n");

        else if (sayi = 0)
            printf("ateþ edemez");

        else
            printf("geçerli mermi sayisi girin");
    }

    printf("Ateþ etmeye devam etmek istermisiniz\n [1] EVET \n [2] HAYÝR");
    scanf("%d", &secim);
    switch (secim)
    {

    case 1:
        printf("mermi sayisi:%d\n", mermi);
        printf("Ateþ etmek istediðiniz mermi sayisini giriniz:");
        scanf("%d", &sayi);

        if (sayi > 30)
            printf("Geçerli mermi sayisi giriniz");
        scanf("%d", sayi);

    case 2:
        printf("Ýþleminiz sonlandirildi");
    }
}

