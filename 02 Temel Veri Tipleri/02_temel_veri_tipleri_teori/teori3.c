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
	
	// 0 d�nerse yanl��, 0 d���nda d�nerse do�ru
	/*
	printf("karakter icin isalpha sonucu:%d\n",isalpha(karakter));   //alfabetik mi de�il mi?
	printf("sayi icin isalpha sonucu:%d\n",isalpha('5'));
	
	printf("karakter icin isdigit sonucu:%d\n",isdigit(karakter));   //rakam m� dde�il mi?
	printf("sayi icin isdigit sonucu:%d\n",isdigit('5'));
	*/
	
	/*
    printf("karakter icin isalnum sonucu:%d\n",isalnum(karakter));   //ya alfabetik olması gerekiyor ya da rakam, di�er karakterlerde sonu� yanl�� d�ner
    printf("sayi icin isalnum sonucu:%d\n",isalnum('5'));
    printf("+ icin isalnum sonucu:%d\n",isalnum('+'));
    */
    
    /*
	printf("H icin islower sonucu:%d\n",islower('H'));     //kucuk harf mi?
	printf("h icin islower sonucu:%d\n",islower('h'));     //kucuk harf mi?
	printf("H icin isupper sonucu:%d\n",isupper('H'));     //buyuk harf mi?
	printf("h icin isupper sonucu:%d\n",isupper('h'));     //buyuk harf mi?
	printf("h icin toupper sonucu:%c \n",toupper('h'));    //b�y��e �evirir
	printf("H icin tolower sonucu:%c \n",tolower('H'));    //k����e �evirir
	*/ 
	
    int tamSayi;
	float ondalikliSayi;
	
	tamSayi=atoi(karakterDizisi);          //string ifadeyi tam say�yaya cevirir
	ondalikliSayi=atof(karakterDizisi);    //string ifadeyi floata cevirir
	
	printf("Sayi:%d\n",tamSayi);
	printf("Sayi:%.4f",ondalikliSayi);
	
	return 0;
}

