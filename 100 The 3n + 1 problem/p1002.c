/*=================================================
#>= Problem: 100 The 3n + 1 problem
#>= Author: Roberto Gervacio ~~ Mx ~~
#>= Start Data: 30-08-17
#>= Last Update: 02-09-17
#>= Aditional Comments: ---
===================================================*/
#include <stdio.h>
int main(){
	int a,b,i=1,y=0,max=0,peque,big,c;
	while ( scanf ("%d %d", &a, &b) != EOF ){
		peque=a;
		big=b;
		if(a>b){
			a=big;
			b=peque;
		}
		for(a;a<=b;a++){				
				c=a;
				while(c!=1){
					if (c%2==0){
						y=c/2;
					}else{
						y=(3*c)+1;
					}
					c=y;					
					i++;		
				}
				if (i>max){
					max=i;
				}
				i=1;
			}
			printf("%d %d %d\n",peque,big,max);
			max=0;
	}	
	return 0;
}