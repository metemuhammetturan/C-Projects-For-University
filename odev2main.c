//
//  main.c
//  Odev2
//
//  Created by Mete Turan on 13.11.2023.
//

#include <stdio.h>






int main(int argc, const char * argv[]) {

    int p,N,i;          //butun integer'ların sisteme tanımlanması.
    
    
    
    printf("--------p ve N Normlari Girilen Sistemin Cikti Cikarmasi Islemi--------\n\n");
    
baslangic:
    
    printf("Belirlemek istediğiniz p degerinizi giriniz: "); // p degerinin kullanicidan alinmasi.
    if(scanf("%d",&p) != 1)
    {
        printf("Hatali Deger Girisi! Degeri Lutfen Tekrardan Giriniz. \n\n");
        fflush(stdin);
        goto baslangic;
    }// Hatali deger girilmesi sonucunda kullaniciya hatali deger girisi hakkinda bilgi verilmesi.
    
    
    
    printf("Belirlemek istediğiniz N degerinizi giriniz: "); // N degerinin kullanicidan alinmasi.
    if(scanf("%d",&N) != 1)
    {
        printf("Hatali Deger Girisi! Degeri Lutfen Tekrardan Giriniz. \n\n");
        fflush(stdin);
        goto baslangic;
    }// Hatali deger girilmesi sonucunda kullaniciya hatali deger girisi hakkinda bilgi verilmesi.
    
    
    
    if(p <= 0)
    {
        printf("\nLutfen 0'dan buyuk bir deger giriniz.\n\n");
        fflush(stdin);
        goto baslangic;
    }// Deger olarak 0 veya daha kucuk bir sayi girilmesi halinde sonucun tanimsiz olacagindan dolayı kullaniciya bilgi verilmesi.
    
    if(N <= 0)
    {
        printf("\nLutfen 0'dan buyuk bir deger giriniz.\n\n");
        fflush(stdin);
        goto baslangic;
    }// Deger olarak 0 veya daha kucuk bir sayi girilmesi halinde sonucun tanimsiz olacagindan dolayı kullaniciya bilgi verilmesi.
    
    
    
    printf("(");                    // Ciktidaki parantezli islemin parantezinin sisteme eklenmesi.
    for (i=1; i<=N ;i++) {
        
        printf("|x%d|^%d",i,p);     // for dongusu ile p ve N normlarini iceren ciktinin cikarilmasi.
            
    }
    printf(")^1/%d\n",p);


}
