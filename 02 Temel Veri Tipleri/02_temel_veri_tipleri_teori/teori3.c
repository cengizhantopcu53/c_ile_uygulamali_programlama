#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
    char karakter='a';
    char karakterDizisi[]="1234.1234";   //string ifade
	
	/*
	printf("%c karakterinin hafizada kapladigi alan:%d byte\n",karakter,sizeof(karakter));
	printf("%c karakterinin decimal karsiligi:%d, hexadecimal karsiligi:%X\n",karakter,karakter,karakter);
	*/
	
	// 0 dönerse yanlýþ, 0 dýþýnda dönerse doðru
	/*
	printf("karakter icin isalpha sonucu:%d\n",isalpha(karakter));   //alfabetik mi deðil mi?
	printf("sayi icin isalpha sonucu:%d\n",isalpha('5'));
	
	printf("karakter icin isdigit sonucu:%d\n",isdigit(karakter));   //rakam mý ddeðil mi?
	printf("sayi icin isdigit sonucu:%d\n",isdigit('5'));
	*/
	
	/*
    printf("karakter icin isalnum sonucu:%d\n",isalnum(karakter));   //ya alfabetik olmasÄ± gerekiyor ya da rakam, diðer karakterlerde sonuç yanlýþ döner
    printf("sayi icin isalnum sonucu:%d\n",isalnum('5'));
    printf("+ icin isalnum sonucu:%d\n",isalnum('+'));
    */
    
    /*
	printf("H icin islower sonucu:%d\n",islower('H'));     //kucuk harf mi?
	printf("h icin islower sonucu:%d\n",islower('h'));     //kucuk harf mi?
	printf("H icin isupper sonucu:%d\n",isupper('H'));     //buyuk harf mi?
	printf("h icin isupper sonucu:%d\n",isupper('h'));     //buyuk harf mi?
	printf("h icin toupper sonucu:%c \n",toupper('h'));    //büyüðe çevirir
	printf("H icin tolower sonucu:%c \n",tolower('H'));    //küçüðe çevirir
	*/ 
	
    int tamSayi;
	float ondalikliSayi;
	
	tamSayi=atoi(karakterDizisi);          //string ifadeyi tam sayýyaya cevirir
	ondalikliSayi=atof(karakterDizisi);    //string ifadeyi floata cevirir
	
	printf("Sayi:%d\n",tamSayi);
	printf("Sayi:%.4f",ondalikliSayi);
	
	return 0;
}

