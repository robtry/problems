/*=================================================
#>= Problem: 10783 Odd Sum
#>= Author: Roberto Gervacio ~~ Mx ~~
#>= Start Data: 09-10-2017
#>= Last Update: 09-10-2017
#>= Aditional Comments: ---
===================================================*/
#include <iostream>
int main(){
	int a,b,cases,i=0,sum=0;
	scanf("%d",&cases);
	while(i<cases){
		scanf("%d",&a);
		scanf("%d",&b);
		for(int j=a;j<=b;j++){
			if(j%2!=0){
				sum+=j;			
			}		
		}
		i++;
		printf("Case %d: %d\n",i,sum);
		sum=0;
	}
	
}
