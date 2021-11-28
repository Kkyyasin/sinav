#include<stdio.h>
main(){
/*	int i,j,k;
	float carp,fakt,toplam,x;
	x=2;
	for(i=0;i<20;i++){
		if(i==0){
			toplam=1;
			printf("%f\n",toplam);
		}
		else{
			fakt=1;
			for(j=1;j<=i;j++){
				fakt*=j;
			}
			carp=x;
			for(k=1;k<i;k++){
				carp*=x;
			}
			toplam+=carp/fakt;
			printf("%f\n",toplam);
		}
		
	}*/
	/*int i,j,k,sayi=10;
	for(i=1;i<=sayi;i++){
		for(j=sayi;j>i;j--){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
		
		printf("*");
	}printf("\n");}
	for(i=sayi-1;i>=1;i--){
		for(j=sayi;j>i;j--){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}*/int a,b,c,i;
	a=1;
	b=1;
	for(i=1;i<=10;i++){
	c=a+b;
	
		
		printf(" %d",a);
			a=b;
		
		b=c;
	}
}
