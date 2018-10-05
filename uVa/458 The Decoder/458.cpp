/*=================================================
#>= Problem: 458 The Decoder
#>= Author: Roberto Gervacio ~~ Mx ~~
#>= Start Data: 07-10-2017
#>= Last Update: 07-10-2017
#>= Aditional Comments: ---
===================================================*/
#include <cstdio>
using namespace std;
int main() {
	char c;
	while(scanf("%c",&c) != EOF){
		if(c!='\n')printf("%c",c-7);
		else printf("\n");
	}
	return 0;
}