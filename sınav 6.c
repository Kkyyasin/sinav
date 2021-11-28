#include<stdio.h>
main(){
	int i,f,c,x;
	double fakt,toplam,carp;
	toplam=1;
	x=7;
	for(i=0;i<100;i++){
		if(i==0){
			printf("%f\n",toplam);
		}
		else{
			fakt=1;
			for(f=1;f<=i;f++){
				fakt*=f;
			}
			carp=x;
			for(c=1;c<i;c++){
				carp*=x;
			}
			toplam+=carp/fakt;
			printf("%f\n",toplam);
		}
	}
}
