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
