#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
	
	/*
	if(0)
	{
		printf("if bloguna girdi\n");
	}
	else if(1)
	{
		printf("else if bloguna girdi\n");
	}
	else
	{
		printf("else bloguna girdi\n");
	}
	*/
	
	/*
	int sayi,sayi2;
	srand(time(NULL));    //farkli deðer üretir
	sayi=rand()%100+1;
	sayi2=rand()%100+1;
	printf("birinci sayi:%d , ikinci sayi:%d\n",sayi,sayi2);
	
	if(sayi<sayi2)
	{
		printf("Sonuc:%d degeri %d degerinden kucuktur\n",sayi,sayi2);
	}
	else if(sayi==sayi2)
	{
		printf("Sonuc:%d degeri %d degerine esittir\n",sayi,sayi2);
	}
	else
	{
		printf("Sonuc:%d degeri %d degerinden buyuktur\n",sayi,sayi2);
	}
	*/
	
	/*
	int sayi;
	srand(time(NULL));    
	sayi=rand()%1000;
	printf("Olusturulan sayi %d\n",sayi);
	
	if(sayi%2==0)
	{
		printf("%d cifttir",sayi);
	}
	else
	{
		printf("%d tektir",sayi);
	}
	*/
	
	int sayi1,sayi2;
	float sonuc;
	char ch;
	
	printf("Lutfen sirasiyla iki adet sayi giriniz:");
	scanf("%d%d",&sayi1,&sayi2);
	printf("Lutfen yapmak istediginiz islemi giriniz(+,-,*,/):");
	fflush(stdin);   //buffer temizleniyor
	scanf("%c",&ch);
	
	if(ch=='+'){
		sonuc=sayi1+sayi2;
		printf("Toplama sonucu:%.2f\n",sonuc);
	}
	else if(ch=='-'){
		sonuc=sayi1-sayi2;
		printf("Cýkarma sonucu:%.2f\n",sonuc);
	}
	else if(ch=='*'){
		sonuc=sayi1*sayi2;
		printf("Carpma sonucu:%.2f\n",sonuc);
	}
	else if(ch=='/'){
		sonuc=sayi1*sayi2;
		printf("Bolme sonucu:%.2f\n",sonuc);
    }
    else{
    	printf("Yanlis tuslama yaptiniz\n");
	}


	return 0;
}


