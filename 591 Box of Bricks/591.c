#include <iostream>
using namespace std;
int main()
{
	int c,t=0,fc,brick=0;
	int v[50];
	while((cin>>c)&& c!=0){
		cout<<c;
		for(int i=0;i<c;i++){;
			cin>>v[i];
			//scanf("%d",&v[i]);
			t+=v[i];
		}
		fc= t/c;
		for (int u=0; u < c;u++){
			if((v[u])> fc){
				brick+= v[u]-c;
			}
		}
		//printf("%d\n",brick );
		cout<<"es:"<<brick;
	}
	return 0;
}