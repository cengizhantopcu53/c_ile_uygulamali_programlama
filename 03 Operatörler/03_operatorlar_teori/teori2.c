#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	int sayi1=15,sayi2=25;
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,sayi1>sayi2);       //buyuktur
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,sayi1<sayi2);       //kucuktur
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,sayi1==sayi2);      //esittir
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,sayi1!=sayi2);      //esit degildir
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,sayi1>=sayi2);      //buyuk esittir.
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,sayi1<=sayi2);      //kucuk esittir.
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,!(sayi1==sayi2));   //unlem sonucu terse çevirdi
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,(sayi1==sayi2)&&(sayi1<sayi2));   //iki taraf da 1 olmalý=1
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,(sayi1==sayi2)||(sayi1>sayi2));   //bir taraf 1 ise=1
	*/
	
	int bitDuzeyi=64;    //0100 0000
	int bitDuzeyi2=32;   //0010 0000
	
	printf("Ve operatoru sonuc:%d\n",bitDuzeyi & bitDuzeyi2);     //0000 0000=0
	printf("Veya operatoru sonuc:%d\n",bitDuzeyi | bitDuzeyi2);   //0110 0000=96
	
	
	return 0;
}

