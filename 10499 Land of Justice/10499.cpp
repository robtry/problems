/*=================================================
#>= Problem: 10499 Land of Justice
#>= Author: Roberto Gervacio ~~ Mx ~~
#>= Start Data: 10-10-2017
#>= Last Update: 10-10-2017
#>= Aditional Comments: ---
===================================================*/
#include <iostream>
int main(){
	long int part;
	while(scanf("%ld",&part)&&part>0){
		if(part!=1){
			printf("%ld%%\n",(part*25));
		}else{
			printf("0%%\n");
		}
	}
}
