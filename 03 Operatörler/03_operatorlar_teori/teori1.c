#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	int sayi=55, sayi2=2;   //atama operat�r�
	printf("%d+%d=%d\n",sayi,sayi2,sayi+sayi2);   //toplama operat�r�
	printf("%d-%d=%d\n",sayi,sayi2,sayi-sayi2);   //cikarma operat�r�
    printf("%d*%d=%d\n",sayi,sayi2,sayi*sayi2);   //carpma operat�r�
	printf("%d/%d=%d\n",sayi,sayi2,sayi/sayi2);   //bolme operat�r�
	printf("%d%%%d=%d\n",sayi,sayi2,sayi%sayi2);  //mod alma operat�r�
	*/
	
	/*
	int sonuc=1;
	sonuc*=4;   //sonuc=sonuc*4;=4
	sonuc*=3;   //sonuc=sonuc*3=12
	sonuc*=2;   //sonuc=sonuc*2=24
	printf("Sonuc:%d\n",sonuc);
	*/
	
	/*
	int i=5;
	printf("i degeri:%d\n",++i);   //�nce artt�rma yap�yor sonra yazd�rma yap�yor
	printf("i degeri:%d\n",i++);   //�nce yazd�rma yap�yor sonra artt�rma yap�yor
	*/
	
    int bitDuzeyi=64; 
	printf("Sola kaydirilmis sonuc:%d\n",bitDuzeyi<<1);   //2 ile carpma anlam�na geliyor
	printf("Saga kaydirilmis sonuc:%d\n",bitDuzeyi>>1);   //2 e b�lme anlam�na geliyor
	
	return 0;
}
