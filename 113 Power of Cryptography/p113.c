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
