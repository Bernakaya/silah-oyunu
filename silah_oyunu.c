#include <stdio.h>
#include <stdlib.h>
int main()
{
    int mermi = 30;
    int secim;
    int i = 0;
    int sayi;
    printf("Ates etmek istedi�iniz mermi sayisini giriniz");
    scanf("%d", &sayi);

    for (i = 0; i <= sayi; i++)
    {
        if (sayi <= 30)
            printf("pat\n");

        else if (sayi = 0)
            printf("ate� edemez");

        else
            printf("ge�erli mermi sayisi girin");
    }

    printf("Ate� etmeye devam etmek istermisiniz\n [1] EVET \n [2] HAY�R");
    scanf("%d", &secim);
    switch (secim)
    {

    case 1:
        printf("mermi sayisi:%d\n", mermi);
        printf("Ate� etmek istedi�iniz mermi sayisini giriniz:");
        scanf("%d", &sayi);

        if (sayi > 30)
            printf("Ge�erli mermi sayisi giriniz");
        scanf("%d", sayi);

    case 2:
        printf("��leminiz sonlandirildi");
    }
}

