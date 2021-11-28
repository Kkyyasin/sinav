#include<stdio.h>
int main(){
	int i,j,k,sayi=10;
	for(i=1;i<=sayi;i++){
		for(k=sayi;k>=i;k--){
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=sayi;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(k=2*sayi-i;k>=i;k--){
		
		printf("*");
	} printf("\n");   } 
	
	
}
