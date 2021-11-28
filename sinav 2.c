#include<stdio.h>
main(){
	int i,j,k,sayi=10;
	for(i=1;i<=sayi;i++){
		for(j=sayi;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("*");
		}
		for(k=2;k<=i;k++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=sayi;i++){
		for(j=sayi;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=2.*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
	for(i=sayi;i>=1;i--){
		for(j=sayi-i;j<=i;j++){
			printf(" ");
		} 
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		printf("\n");
	}
}
