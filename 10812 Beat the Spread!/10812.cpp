#include <iostream>
int main(){
	int n,i=0;
	double y,x,s,d;
	scanf("%d",&n);
	while(n>i){
		scanf("%lf %lf",&s,&d);
		y=(s-d)/2;
		x=d+y;
		//printf("%f\n",y);
		if((y-(int)y)==0){
			if(y>=0  && x>=0){
				printf("%.0lf %.0lf\n",x,y);
			}else{
				printf("impossible\n");
			}
		}else{
			printf("impossible\n");
		}
		i++;
	}
}
