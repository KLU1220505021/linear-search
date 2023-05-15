#include <stdio.h>

//sayiyi lineer arayacak fonksiyon
void linear_search(int sayi,int array[],int uzunluk){
    //sayinin elemanlarini teker teker kontrol edecek dongu
    for (int i = 0; i < uzunluk; i++)
    {
        //eger i indeksindeki sayi aranan sayiya esitse yazdirir
        if(array[i] == sayi){ printf("sayi %d dizinin %d. elemanidir\n",sayi,i); return;};
      
    }
    //teker teker kontrol sounda eger sayi bulunamazsa kullaniciya bildirilir
    printf("sayi %d bulunamadi \n",sayi);
    return;
    
}

int main(){
    int uzunluk;
    //kullanicidan dizi uzunlugunu isteyecek dongu
    printf("dizinin uzunlugunu giriniz : ");
    scanf("%d",&uzunluk);
    int array[uzunluk];
    //kullanicinin istedigi eleman sayisi kadar sayi girdisi isteyecek dongu
    for (int i = 0; i < uzunluk; i++)
    {
        printf("%d. sayiyi giriniz : " , i );
        scanf("%d",&array[i]);
    }
    //arancak sayi kullanicidan isteniyor
    int sayi;
    printf("aranacak sayiyi giriniz : ");
    scanf("%d",&sayi);
    //linear search ile araniyor ve bildiriliyor
    linear_search(sayi,array,uzunluk);
    return 0;


    
}