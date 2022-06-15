#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	/*
	int sayi=5;
	
	switch(sayi){
		case 0:
		    printf("0\n");
		    break;
		case 1:
		    printf("1\n");
		    break;
		case 2:
		    printf("2\n");
		    break;
		case 3:   
		    printf("3\n");
		    break;
		default:
			printf("Yanlis deger girdiniz\n");		
	}
	*/
	
	/*
	int sayi1,sayi2;
	float sonuc=0;
	char ch;
	
	printf("Lutfen gireceginiz ifadeyi (sayi/islem/sayi) seklinde giriniz:");
	scanf("%d%c%d",&sayi1,&ch,&sayi2);
	fflush(stdin);   //buffer temizleniyor
	
	switch(ch){
		case '+': 
		    sonuc=sayi1+sayi2;
		    printf("Toplama sonucu:%.2f\n",sonuc);
		    break;
		case '-': 
		    sonuc=sayi1-sayi2;
		    printf("Cýkarma sonucu:%.2f\n",sonuc);
		    break;
		case '*': 
		    sonuc=sayi1*sayi2;
		    printf("Carpma sonucu:%.2f\n",sonuc);
		    break;
		case '/':
		    sonuc=sayi1/sayi2;
		    printf("Bolme sonucu:%.2f\n",sonuc);
		    break;
		case '%': 
		    sonuc=sayi1%sayi2;
		    printf("Mod sonucu:%.2f\n",sonuc);
		    break;
		default:
		printf("Hatali islem girdiniz.\n");
	}
	*/
	
	int haftaninGunu;
	printf("Lutfen 1-7 arasinda bir haftanin gun degerini giriniz:");
	scanf("%d",&haftaninGunu);
	switch(haftaninGunu){
		case 1:
	    case 2:
	    case 3:
	    case 4:
	    case 5:
	    	printf("Haftaici!\n");
	    	break;
	    case 6:
	    case 7:
	    	printf("Haftasonu!\n");
	    	break;
	    default:
	    	printf("Yanlis deger giridiniz!");
	}
	
	
	
	
	
	
	
	
	
	

	return 0;
}
