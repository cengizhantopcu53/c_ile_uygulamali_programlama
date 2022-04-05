#include <stdio.h>


int main(int argc, char *argv[]) {
	
	//degiskeninTipi degiskeninAdi = degiskeninDegeri;
    int sayi,sayi2=9; //tam sayilar icin
    float sayi3=5.7; //ondalikli sayılar icın
    double sayi4=2.8; //ondalikli sayılar icın
    char karakter='x'; //karakterler için
    
    sayi=5;
    
    printf("%d %i %.2f %.2lf %c\n",sayi,sayi2,sayi3,sayi4,karakter); 
	//adreslerin nerede tutulduğunu hex şeklinde yazıyor
	printf("%#X %#X %#X %#X %#X\n",&sayi,&sayi2,&sayi3,&sayi4,&karakter); 
	
    //isimlendirme kurallari
    /*
    int sayi2;       tekrar tanımlama yapılamaz
    int for;         keyword kullanılamaz
    int sayı;        turkce karakter kullanılamaz
    int sayı 5;      bosluk karakteri kullanılamaz
    int 2sayı;       sayi ile baslayamayiz
    */
    
    int s;
    int sayfaNo;
    int _2sayi;
    
	return 0;
}
