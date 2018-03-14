/*=================================================
#>= Problem: 11172  Relational Operator
#>= Author: Roberto Gervacio ~~ Mx ~~
#>= Start Data: 09-10-2017
#>= Last Update: 09-10-2017
#>= Aditional Comments: ---
===================================================*/
#include <iostream>
int main(){
	int test,i=0;
	long int a,b;
	scanf("%d",&test);
	while(i<test){
		scanf("%ld %ld",&a,&b);
		if(a==b){
			printf("=\n");
		}else if(a<b){
			printf("<\n");		
		}else{
			printf(">\n");
		}
		i++;
	}

}
