#include <iostream>
#include <string>
#include <math.h> 
using namespace std;
int main(){
	int a,b;
	double sum=0;
	string stra,stra2="",strb,strb2="",strfinal="",strfinal2="";
	while(scanf("%d %d",&a,&b)!=EOF){
		/////////////convertir a binario/////////////
		while(a!=0){
			if(a%2==1){
				//printf("1 ");
				stra.append("1");
			}else{
				//printf("0 ");
				stra.append("0");
			}
			a=a/2;
		}
		while(b!=0){
			if(b%2==1){
				//printf("1 ");
				strb.append("1");
			}else{
				//printf("0 ");
				strb.append("0");
			}
			b=b/2;
		}
		////////////////////////////////////////////
		//////////////llenar de 0//////////////////
		//cout<<"size: "<<stra.length()<<"\n";
		while(stra.length()<32){
			stra.append("0");
		}
		while(strb.length()<32){
			strb.append("0");
		}
		///////////////////////////////////////////
		//////////////////invertir las cadenas/////
		for (int i = 32; i >= 0; i--){
			stra2+=stra[i];
		}
		for (int i = 32; i >= 0; i--){
			strb2+=strb[i];
		}
		/////////////////////////////////////////////
		//cout<<"size after: "<<stra.length()<<"\n";
		//cout<<stra2<<"\n";
		//cout<<strb2<<"\n";
		////////////////////////////////////////////
		/////////////////hacer la suma/////////////
		for (int i = 1; i <= 32; ++i){
			if(stra2[i]==strb2[i]){
				strfinal+="0";
			}else{
				strfinal+="1";
			}
		}
		//cout<<strfinal<<"\n";
		////////invertir final//////////////
		for (int i = 32; i >= 0; i--){
			strfinal2+=strfinal[i];
		}
		//cout<<strfinal2<<"\n";
		////////////////////////////////////////////
		/////////////hacer la suma numerica/////////
		for (int i = 0; i < strfinal2.length(); i++){
			if (strfinal2[i]=='1'){
				//printf(" igual en %d\n",i);
				sum+= (pow(2,i-1));
				//printf("elevado %f\n",pow(2,i));
				//printf("suma: %lf\n",sum);
			}
		}
		///////////////////////////////////////////
		printf("%1.0f\n",sum);
		strfinal="";
		strfinal2="";
		stra="";
		stra2="";
		strb="";
		strb2="";
		sum=0;
	}	
}