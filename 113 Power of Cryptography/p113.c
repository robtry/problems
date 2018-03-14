/*=================================================
#>= Problem: 113 Power of Cryptography
#>= Author: Roberto Gervacio ~~ Mx ~~
#>= Start Data: 03-09-2017
#>= Last Update: 03-09-2017
#>= Aditional Comments: ---
===================================================*/
#include <stdio.h>
#include <math.h>
int main()
{
	double n,p;
	while((scanf("%lf \n%lf",&n,&p))!=EOF)
	{
		printf("%1.0f\n", pow(p,1/n));
	}
	return 0;
}
