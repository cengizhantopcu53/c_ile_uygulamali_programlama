#include <stdio.h>
#include <limits.h>


int main(int argc, char *argv[]) {
		
	int sayi=5;
	short int shortSayi;
	long int longSayi;
	long long int longlongSayi;
	float floatSayi=5.34567891234;
	double doubleSayi=1.12361723895512123948423;

	/*
	printf("int kapladigi alan:%lu bit\n",8*sizeof(sayi));
	printf("shortint kapladigi alan:%lu bit\n",8*sizeof(shortSayi));
	printf("longint kapladigi alan:%lu bit\n",8*sizeof(longSayi));
	printf("longlongint kapladigi alan:%lu bit\n",8*sizeof(longlongSayi));
	printf("float kapladigi alan:%u bit\n",8*sizeof(floatSayi));
	printf("double kapladigi alan:%u bit\n",8*sizeof(doubleSayi));
	*/
	
	/*
	printf("float deger:%.12f\n",floatSayi);
	printf("double deger:%.15lf\n",doubleSayi);
	*/
	
	/*
	int sayiDonusum=(int)floatSayi;
	printf("Donusturulmus hali:%d\n",sayiDonusum);
	
	float sayiDonusum2=(float)sayi;
	printf("Donusuturulmus hali:%f\n",sayiDonusum2);
	*/
	
	printf("Short maksimum aralik:%d\n",SHRT_MAX);
	printf("Short minimum aralik:%d\n",SHRT_MIN);

    return 0;  
}
