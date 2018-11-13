#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;cin>>n;
	vector<int> list(n);
	for(int i=0;i<n;i++){
	  int numero; cin>>numero;
	  list[i]=numero;
	}
	sort(list.begin(),list.end());
	for(int i=0;i<n;i++){
	 cout<<list[i]<<"\n";	
	}

 return 0;
}