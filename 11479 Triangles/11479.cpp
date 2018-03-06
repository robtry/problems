#include <iostream>
int main(){
	long int test,a,b,c,i=1;
	scanf("%ld",&test);
	while(i<=test){
		scanf("%ld %ld %ld",&a,&b,&c);
		if (((a+b)>c)&&((a+c)>b)&&((b+c)>a)){
			if(a==b && b==c){
				printf("Case %ld: Equilateral\n",i);
			}else if(a!=b && b!=c && a!=c){
				printf("Case %ld: Scalene\n",i);
			}else{
				printf("Case %ld: Isosceles\n",i);
			}
		}else{
			printf("Case %ld: Invalid\n",i);
		}
		i++;
	}
}