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
