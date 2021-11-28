#include<stdio.h>
#include<stdlib.h>
main(){
	int i,islem,sayi,toplam,bas,bit;
	printf("1-0 dan 100'e kadar cift sayi yazdirma\n");
	printf("2-0 girilinceye kadar toplayan program\n");
	printf("3-asal sayi hesaplayici\n");
	printf("4- baslangic bitis arasi çift sayi bulma\n");
	printf("5-faktoreyel hesabi\n");
	printf("yapmak istediginiz islemi seciniz:");
	scanf("%d",&islem);
	switch(islem){
	case 1:	
	for(i=0;i<=100;i++){
		if(i%2==0){
			printf("%d\n",i);
		}
	}break;
	case 2:
		toplam=0;
		do{
			scanf("%d",&sayi);
			toplam+=sayi;
			printf("toplam=%d\n",toplam);
		}while(sayi!=0);break;
		case 3:
			printf("hesaplamak istediginiz sayiyi giriniz");
			scanf("%d",&sayi);
			toplam=0;
			for(i=1;i<sayi;i++){
				if(sayi%i==0){
					toplam+=1;
				}	
			}
				if(toplam<2){
					printf("%d. sayisi asal sayidir",sayi);}
					else{printf("%d. sayisi asal degildir",sayi);{
					}break;	
					case 4:	
					printf("baslangic degerini  giriniz:"),
					scanf("%d",&bas);
					printf("bitis degerini giriniz:"),
					scanf("%d",&bit);
					for(i=bas;i<=bit;i++){
						if(i%2==0){
							printf("%d\n",i);
						}
					}break;	 
					case 5:
						toplam=1;
						scanf("%d",&sayi);
						for(i=1;i<=sayi;i++){
							toplam*=i;
						}
						printf("%d",toplam);break;
   default:printf("hatali kodlama yaptiniz");break;
	}
	printf("\nprogram sonlandi");
	getch();
}}
