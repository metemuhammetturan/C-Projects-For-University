//
//  main.c
//  Odev1
//
//  Created by Mete Turan on 8.11.2023.
//


/*

 ÇÖZÜM ADIMLARI
 
 - Asal Sayı = Kendisine ve 1 e bölünen sayılardır ++
 - İstenilen değerler haricinde aralıktaki asal sayılar bulunacaktır. ++
 - Aralıktaki asal sayılar nasıl bulunabilir? : Aralık belirli olduğu takdirde!! aralıktaki sayılardan sadece kednine ve 1'e bölünenler asal sayı
 olarak nitelendirilecektir.
 
*/



#include <stdio.h>


int main(void) {
   
    int sayi1, sayi2;
    int i,b;
    double asalSayiAdet = 0;
    double asalSayiToplam = 0;
    
    printf("---- Iki Sayi Arasindaki Asal Sayilarin Hesaplanmasi ve Ortalamalarinin Bulunmasi ---- \n");
    
    
    
    printf("1. Sayiyi Giriniz: ");
    scanf("%d", &sayi1);
    // 1. degerin kullanici tarafindan sisteme tanımlanması.

    printf("2. Sayiyi Giriniz: ");
    scanf("%d", &sayi2);
    // 2. degerin kullanici tarafindan sisteme tanımlanması.

    
        
    // ARALIKTAKI ASALLARIN LISTELENMESI ve ORTALAMALARININ BULUNMASI
    
    for(i=sayi1; i<=sayi2; i++)
        {
            int asalKontrol = 1;

            for(b=2; b<i; b++)
            {
                if(i%b == 0)
                {
                    asalKontrol = 0;
                    break;
                }
            }
            
            
            if (asalKontrol==1) 
            {
                printf("%d\n", i);
                asalSayiAdet++;
                asalSayiToplam += i;
            }
        }
    
    printf("Araliktaki Asal Sayiların Ortalamasi: %f\n", asalSayiToplam/asalSayiAdet);
    
    
    
    
    return 0;
}
