#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int casos;
	cin>>casos;

	for (int i = 0; i < casos; ++i)
	{
		int x;int num;int odd=0,even=0;
		cin>>x;
		while(x--){
			
			cin>>num;
			if (num%2 == 0)
				even++;
			else
				odd++;
		}
		cout<<even<<" even and "<<odd<<" odd.\n";
	}


	return 0;
}