/*=================================================
#>= Problem: 10370  Above Average
#>= Author: Roberto Gervacio ~~ Mx ~~
#>= Start Data: 09-10-2017
#>= Last Update: 09-10-2017
#>= Aditional Comments: ---
===================================================*/
#include <iostream>
//using namespace std;
int main(){
	int c,cases=1,i=0;
	float califn, sum=0,media,bajas=0;
	scanf("%d",&c);	
	while(cases<=c){
		scanf("%f",&califn);
		float a[(int)califn];
		while(i<califn){
			scanf("%f",&a[i]);
			sum+=a[i];
			i++;
		}
		i=0;
		media=sum/califn;
		//printf("media :%f\n",media);
		for (int j = 0; j < califn; ++j){
			//printf("a[%d] = %f\n",j,a[j]);
			if(a[j]>media){
				bajas++;
			}
		}
		//printf("bajas : %f\n",bajas);
		printf("%.3f%\n",(bajas*100)/(double)(califn));
		sum=0;
		bajas=0;
		cases++;
	}
}