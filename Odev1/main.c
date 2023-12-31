//
//  main.c
//  Odev1
//
//  Created by Mete Turan on 8.11.2023.
//


/*

 ÇÖZÜM ADIMLARI
 
 - Asal Sayı = Kendisine ve 1 e bölünen sayılardır
 - İstenilen değerler haricinde aralıktaki asal sayılar bulunacaktır.
 - Aralıktaki asal sayılar nasıl bulunabilir? : Aralık belirli olduğu takdirde!! aralıktaki sayılardan sadece kendine ve 1'e bölünenler asal sayı
 olarak nitelendirilecektir.
 
*/

/*
 
DEGISKENLERIN ANLAMLARI
 
 sayi1: Kullanicinin girdigi ilk deger
 sayi2: Kullanicinin girdigi ikinci deger
 asalSayiAdet: Bulunan asal sayilarin ortalamasinin hesaplanmasinda kullanilacak asal sayilarin adedini gosteren integer
 asalSayiToplam: Bulunan asal sayilarin ortalamasinin hesaplanmasinda kullanilacak asal sayilarin toplamini gosteren integer
 asalKontrol: for dongusunun her bir adimindaki sayinin asal olup olmadigini kontrol eden integer
 
 
 */



#include <stdio.h>


int main(void) {
   
    //Degiskenlerin sisteme tanitilmasi.
    
    int sayi1, sayi2;
    int i,b;
    double asalSayiAdet = 0;
    double asalSayiToplam = 0;
    
    
    
    
    
    printf("---- Iki Sayi Arasindaki Asal Sayilarin Hesaplanmasi ve Ortalamalarinin Bulunmasi ---- \n");
    
    baslangic:                               // Hesaplama isleminin baslangicinin yapildigi yer
    
    printf("Kucuk Olan 1. Sayiyi Giriniz: ");
    if (scanf("%d", &sayi1) != 1) {
        printf("Hatali giris! Lutfen bir integer deger girin.\n");
        fflush(stdin);
        goto baslangic;
        }
    
    // Kucuk olan 1. degerin kullanici tarafindan sisteme tanımlanması.

    printf("Buyuk Olan 2. Sayiyi Giriniz: ");
    if (scanf("%d", &sayi2) != 1) {
        printf("Hatali giris! Lutfen bir integer deger girin.\n");
        fflush(stdin);
        goto baslangic;
        } // Kullanicinin girdigi deger integer haricinde bir veri tipinde oldugu takdirde sistem tarafindan uyari verilmesi.
    // Buyuk olan 2. degerin kullanici tarafindan sisteme tanımlanması.


        
    // ARALIKTAKI ASALLARIN LISTELENMESI ve ORTALAMALARININ BULUNMASI
    
  
    if(sayi1>sayi2)
    {
        
        printf("1. sayiyi kucuk olacak sekilde giriniz.\n");
        goto baslangic;
        
    } // Birinci degerin buyuk tanimlanmasi halinde ortaya cikabilecek karisikligin onlenmesi amaciyla kullaniciya bilgi veren sart blogu.
    
    
    for(i=sayi1; i<=sayi2; i++)
        {
            
            
            int asalKontrol = 1;

            for(b=2; b<i; b++)
            {
                if(i%b == 0)
                {
                    asalKontrol = 0;
                    break;
                } // Dongudeki her bir adimdaki hesaplanan sayiyi kalansiz bolen bir sayinin oldugu takdirde donguyu kiracak ve o an ki sayinin asal sayi olmadigini belirtecek sart blogu.
            }
            
            
            if (asalKontrol==1) 
            {
                printf("%d\n", i); // Bir ust kisimdaki sart blogunun tamamlandigi takdirde asal olan sayinin cikti olarak cikarilmasinin saglanmasi.
                asalSayiAdet++; // Asal sayilarin ortalamasinin bulunmasini saglayan komut icindeki asal sayilarin kac tane oldugunu belirlenmesi.
                asalSayiToplam += i; // Asal sayilarin ortalamasinin bulunmasini saglayan komut icindeki asal sayilarin toplaminin kac oldugunun belirlenmesi.
            }
        }
    
    if(asalSayiAdet == 0) {
        printf("Bu Aralikta Herhangi Bir Asal Sayi Yoktur.\n");
    } else
        {
            printf("Araliktaki Asal Sayiların Ortalamasi: %f\n", asalSayiToplam/asalSayiAdet); // Asal sayilarin ortalamasinin cikti olarak cikarilmasi.
        }
    
    return 0;
}
