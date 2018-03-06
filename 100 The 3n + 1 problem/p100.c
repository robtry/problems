#include <stdio.h>
int main(){
	int a,y,i=1,b,c,max=0,sta,fin;//,times=0;
	//while(times<101){
		scanf("%d %d",&a,&b);
		//printf("%d ",a);
		//printf("%d ",b);
		sta= a;
		fin=b;
		if (a>b)
		{
			a=fin;
			b=sta;

		}
		if (a==1 && b==1)
		{
			printf("1 1 1\n");
		}else{
			for(a;a<=b;a++){
				//printf("con %d\n",a);
				c=a;
				do{
					if (c%2==0){
						y=c/2;
					}else{
						y=(3*c)+1;
					}
					c=y;
					//printf("%d ",y);
					i++;		
				}while(y!=1);
				//printf("fueron %d\n",i );N
				if (i>max){
					max=i;
				}
				i=1;
			}
			printf("%d %d %d\n",sta,fin,max );
		}
	//	times++;
	//	max=0;
	//}
}


