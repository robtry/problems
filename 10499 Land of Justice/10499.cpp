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
