/*=================================================
#>= Problem: 272 TEX Quotes
#>= Author: Roberto Gervacio ~~ Mx ~~
#>= Start Data: 07-10-2017
#>= Last Update: 07-10-2017
#>= Aditional Comments: ---
===================================================*/
#include <iostream>
#include <string>
using namespace std;
int main() {
	string str,f="``",s="''",strfinal,temp;
	bool a=true;
	//cin >> str;
	while(getline(cin,str)){//para leer con espacios
		for (int i = 0; i < str.length(); ++i){
			//cout <<str[i]<<"\n";
			temp= str.at(i);
			if(str.at(i)=='\"'){
				if (a){
					strfinal.append(f);
				}else{
					strfinal.append(s);
				}
				a=!a;
			}else{
				strfinal.append(temp);
			}
		}
		cout <<strfinal<<"\n";
		strfinal="";
	}
    return 0;
}