#include<stdio.h>
main(){
	int i;
	float toplam,x;
	toplam=0;
	x=1;
	for(i=1;i<500;i++){
	
	
		if(i%2==1){
			toplam+=4/x;
			x+=2;
			printf("%f\n",toplam);
		}
		else{
			toplam-=4/x;
			x+=2;
			printf("%f\n",toplam);
		}
	}
}
