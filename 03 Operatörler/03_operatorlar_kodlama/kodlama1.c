#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	int paraMiktari;
	printf("Lutfen para miktarini giriniz:");
	scanf("%d",&paraMiktari);
	
	printf("%d adet 200 TL bulunmaktadir\n",paraMiktari/200);
	paraMiktari%=200;
	printf("%d adet 100 TL bulunmaktadir\n",paraMiktari/100);
	paraMiktari%=100;
	printf("%d adet 50 TL bulunmaktadir\n",paraMiktari/50);
	paraMiktari%=50;
	printf("%d adet 20 TL bulunmaktadir\n",paraMiktari/20);
	paraMiktari%=20;
	printf("%d adet 10 TL bulunmaktadir\n",paraMiktari/10);
	paraMiktari%=10;
	printf("Kalan para: %d\n",paraMiktari);
	*/
	
	int sayi, geciciSayi;
	printf("Lutfen 3 basamakli tersi alinacak sayi girin:");
	scanf("%d",&sayi);
	geciciSayi=sayi;
	printf("%d",geciciSayi%10);
	geciciSayi/=10;
	printf("%d",geciciSayi%10);
	geciciSayi/=10;
	printf("%d",geciciSayi%10);
	geciciSayi/=10;
	
	

	
	return 0;
}
