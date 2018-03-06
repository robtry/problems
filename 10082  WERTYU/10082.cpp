#include <iostream>
#include <string>
using namespace std;
int main(){
	string cadena,final,temp;
	while(getline(cin,cadena)){
		for (int i = 0; i < cadena.length(); ++i){
			temp= cadena[i];
			if(temp==" "){
				final.append(" ");
			}else{
				switch(cadena[i]){
					case '1': final.append("`"); break;
					case '2': final.append("1"); break;
					case '3': final.append("2"); break;
					case '4': final.append("3"); break;
					case '5': final.append("4"); break;
					case '6': final.append("5"); break;
					case '7': final.append("6"); break;
					case '8': final.append("7"); break;
					case '9': final.append("8"); break;
					case '0': final.append("9"); break;
					case '-': final.append("0"); break;
					case '=': final.append("-"); break;

					case 'W': final.append("Q"); break;
					case 'E': final.append("W"); break;
					case 'R': final.append("E"); break;
					case 'T': final.append("R"); break;
					case 'Y': final.append("T"); break;
					case 'U': final.append("Y"); break;
					case 'I': final.append("U"); break;
					case 'O': final.append("I"); break;
					case 'P': final.append("O"); break;
					case '[': final.append("P"); break;
					case ']': final.append("["); break;
					case '\\': final.append("]"); break;

					case 'S': final.append("A"); break;
					case 'D': final.append("S"); break;
					case 'F': final.append("D"); break;
					case 'G': final.append("F"); break;
					case 'H': final.append("G"); break;
					case 'J': final.append("H"); break;
					case 'K': final.append("J"); break;
					case 'L': final.append("K"); break;
					case ';': final.append("L"); break;
					case '\'': final.append(";"); break;

					case 'X': final.append("Z"); break;
					case 'C': final.append("X"); break;
					case 'V': final.append("C"); break;
					case 'B': final.append("V"); break;
					case 'N': final.append("B"); break;
					case 'M': final.append("N"); break;
					case ',': final.append("M"); break;
					case '.': final.append(","); break;
					case '/': final.append("."); break;
				}
			}
		}
	cout<<final<<"\n";
	final="";
	}
}
