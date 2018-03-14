/*=================================================
#>= Problem: 10055 Hashmat the Brave Warrior
#>= Author: Roberto Gervacio ~~ Mx ~~
#>= Start Data: 08-10-2017
#>= Last Update: 08-10-2017
#>= Aditional Comments: ---
===================================================*/
#include <iostream>
//#include <cstdio>
using namespace std;
int main(){
	long int a,b;
	while(scanf("%ld %ld",&a,&b)!=EOF){
		if((b-a)<0){
			printf("%ld\n",-1*(b-a));
		}else{
			printf("%ld\n",b-a);
		}
	}
	return 0;
}
