//
//  main.c
//  Odev2
//
//  Created by Mete Turan on 11.11.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

    printf(" ---- Sayi Tahmin Oyunu ---- ");
    
    int kullaniciTahmini, tahminAdedi = 1, rastgeleSayi, tahminDurum = 0;
    
    srand(time(NULL));
    rastgeleSayi = (rand()%100)+1;
    
    printf("Bilgisayar: 1 ile 100 arasında rastgele bir sayı tuttum. \n");
    
    
    while ((tahminDurum != 1))
    {
        
        printf("Tahminizi Giriniz: ");
        scanf("%d",&kullaniciTahmini);
        
        
        
        if (kullaniciTahmini<0 || kullaniciTahmini>100)
        {
            printf("Lütfen 0 ile 100 arasinda bir deger giriniz! \n");
            continue;
        }
        
        
        
        if (kullaniciTahmini == rastgeleSayi)
        {
            
            tahminDurum = 1;
            printf("Tebrikler! %d olan tahmininiz dogru. %d. seferde dogru sayiyi buldunuz! \n", kullaniciTahmini, tahminAdedi);
            break;
            
        }   else if (kullaniciTahmini < rastgeleSayi)
            {
                
                printf("Tahmininiz yanlış! Lütfen daha büyük bir değer giriniz. \n");
                tahminAdedi = tahminAdedi+1;
                tahminDurum=0;
                
            } else if (kullaniciTahmini > rastgeleSayi)
                {
                    
                    printf("Tahmininiz yanlış! Lütfen daha küçük bir değer giriniz.\n");
                    tahminAdedi = tahminAdedi+1;
                    tahminDurum=0;

                }
    }
    
    
    
    return 0;
}
