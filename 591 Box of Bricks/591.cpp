#include <iostream>
using namespace std;
int main()
{
	int c,t=0,fc,brick=0,times=0;
	int v[50];
	while((cin>>c)&& c!=0){
		for(int i=0;i<c;i++){
			cin>>v[i];
			t+=v[i];
		}
		fc= t/c;
		for (int i = 0; i<c; i++){
			if ((v[i])>fc){
				brick+=(v[i])-fc;
			}
		}
		times++;
		cout<<"Set #"<<times<<"\nThe minimum number of moves is "<<brick<<".\n\n";
		brick=0;
		t=0;
	}
	return 0;
}