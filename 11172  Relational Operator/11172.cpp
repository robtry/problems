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
