#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
main(){
	int sayi,i,islem,k1,k2,k3,tek,cift,a,b,c;
	float x1,x2,dis;
	printf("1-Klavyeden girilen bir sayinin tum tam bolenlerini ekrana yazdiran program\n");
	printf("2-ucgen cesiti belirleme\n");
	printf("3-sayi buyuklugu acilklama\n");
	printf("4-Klavyeden girilen 10 adet sayidan cift olanlarin toplamini ve tek olanlarin toplamni ayri ayri hesaplayip ekrana yazdiran program\n");
	printf("5-fibonocci\n");
	printf("6-0 dan 100'e kadar sayi bulma oyunu\n");
	printf("7-mukemmel sayi\n");
	printf("8-ikinci dereceden kok bulma\n");
	printf("yapmak istediginiz islemi seciniz:");
	scanf("%d",&islem);
	switch(islem){
		case 1:
			scanf("%d",&sayi);
			for(i=1;i<=sayi;i++){
				if(sayi%i==0){
				printf("%d\n",i);
				}
			}break;
			case 2:
				printf("kenarlari giriniz:\n");
				scanf("%d",&k1);
				scanf("%d",&k2);
				scanf("%d",&k3);
				if(k1==k2){
					if(k2==k3){
						printf("eskenar");
					}
					else{
						printf("ikizkenar");
					}
				}
				else if(k2==k3){
					printf("ikizkenar");
				}
				else if(k1==k3){
					printf("ikizkenar");
				}
				else{
					printf("cesitkenar");
				}break;
				case 3:
					printf("sayilari giriniz:");
			    scanf("%d",&k1);
				scanf("%d",&k2);
				scanf("%d",&k3);
				if(k1>k3 && k1>k2){
					printf("%d. sayisi buyuktur",k1);
				}
					else if(k2>k3 && k2>k1){
					printf("%d. sayisi buyuktur",k2);
	}
		else if(k3>k1 && k3>k2){
					printf("%d. sayisi buyuktur",k3);
					}else{
					printf("sayilar esittir");
					} break;
					case 4:
					tek=0;
					cift=0;
					for(i=1;i<=10;i++){
						printf("%d. sayiyi giriniz:",i);
						scanf("%d",&sayi);
						if(sayi%2==0){
							cift+=sayi;
						}else{
							tek+=sayi;
						}
					}
					printf("tek toplam=%d\n",tek);
					printf("cift toplam=%d",cift);
					break;
					case 5:
						k1=1;
						k2=1;
						printf("sayi giriniz");
						scanf("%d",&tek);
					for(i=1;i<=tek;i++){
					k3=k1+k2;
						printf(" %d",k1);
						k1=k2;
						k2=k3;
					}break;
					case 6:
					srand(time(NULL));
				 sayi=rand()%100 +1;
				 for(i=1;i<=10;i++){
				 	scanf("%d",&tek);
				 	if(sayi==tek){
				 		printf("tebrikler sayiyi buldunuz");break;
					 }
					 else if(tek>sayi){
					 	printf("buyuk girdiniz\n");
					 	printf("%d .hakkiniz kaldi",10-i);
					 }
					 else if(tek<sayi){
					 	printf("kucuk girdiniz\n");
					 	printf("%d .hakkiniz kaldi",10-i);
					 }
				 }break;
				 case 7:
				 	for(i=1;i<10000;i++){
				 		cift=0;
				 		for(k1=1;k1<i;k1++){
				 			if(i%k1==0){
				 				cift+=k1;
							 }
							
						 }
						  if(cift==i){
							 	printf("%d\n",i);}
							 	
				 		
					 }break;
					 case 8:
					 printf("ax*x+bx+c denkleminin a b c katlariniz sirayla giriniz:\n");
					 scanf("%d %d %d",&a,&b,&c);
							 	dis=b*b-4*a*c;
							 	x1=(-b-sqrt(dis))/2*a;
							 	x2=(-b+sqrt(dis))/2*a;
							 	if(dis<0){
							 		printf("kok yok");}
								 
							    else if(x1==x2){
							    	printf("cift kat kok=%.3f",x1);
								}
								else{
									printf("x1=%.3f\nx2=%.3f",x1,x2);
								}
								
							 	break;
							 
					 	
						
				default:printf("hatali kodlama yaptiniz");break;
		
	}
	getchar();
	return 0;
}
