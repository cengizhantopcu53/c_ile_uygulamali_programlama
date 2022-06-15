#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*
	int sayiInt=1234;
	
	printf("SayiInt 10luk taban:%d\n",sayiInt);
	printf("SayiInt 16'lik taban:%X\n",sayiInt); //4D2=16^0*2+16^1*13+16^2*4=1234
	printf("SayiInt 8'lik taban:%o\n",sayiInt);  //2322=8^0*2+8^1*2+8^2*3+8^3*2=1234
	*/
	
	/*
	float sayiFloat=1.123456;
	printf("SayiFloat normal hali:%f\n",sayiFloat);
	printf("SayiFloat bilimsel hali:%e\n",sayiFloat);
	printf("SayiFloat bilimsel hali:%E\n",sayiFloat);
	printf("SayiFloat kisa hali:%g\n",sayiFloat);
	printf("SayiFloat kisa hali:%G\n",sayiFloat);
	*/
	
	printf("Merhaba Dunya\n");          //alt satira gecmek icin
	printf("Merhaba \t Dunya\n");       //bir tab kadarlık boşluk bırakıyor
	printf("Merhaba \bDunya\n");        //backspace, bir karakter geriye siler
	printf("'Merhaba Dunya'\n");        //çift tırnak izin verilmiyor, tek tırnak kullnılabilir
	printf("Merhaba \\ Dunya\n");       // \ işareti kullanmak için 2 tane yazmanız gereklidir
	printf("\"Merhaba Dunya\"\n");      // "" kullanımına izin veriyor
	printf("Merhaba 5%%7 Dunya\n");     // mod ifadesini kullanmak için 2 tane yazmanız gereklidir
	
	return 0;
}
