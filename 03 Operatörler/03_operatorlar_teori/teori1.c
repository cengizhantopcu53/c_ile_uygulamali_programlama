#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	int sayi=55, sayi2=2;   //atama operatörü
	printf("%d+%d=%d\n",sayi,sayi2,sayi+sayi2);   //toplama operatörü
	printf("%d-%d=%d\n",sayi,sayi2,sayi-sayi2);   //cikarma operatörü
    printf("%d*%d=%d\n",sayi,sayi2,sayi*sayi2);   //carpma operatörü
	printf("%d/%d=%d\n",sayi,sayi2,sayi/sayi2);   //bolme operatörü
	printf("%d%%%d=%d\n",sayi,sayi2,sayi%sayi2);  //mod alma operatörü
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
	printf("i degeri:%d\n",++i);   //önce arttýrma yapýyor sonra yazdýrma yapýyor
	printf("i degeri:%d\n",i++);   //önce yazdýrma yapýyor sonra arttýrma yapýyor
	*/
	
    int bitDuzeyi=64; 
	printf("Sola kaydirilmis sonuc:%d\n",bitDuzeyi<<1);   //2 ile carpma anlamýna geliyor
	printf("Saga kaydirilmis sonuc:%d\n",bitDuzeyi>>1);   //2 e bölme anlamýna geliyor
	
	return 0;
}
