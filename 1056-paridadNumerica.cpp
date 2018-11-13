#include <bits/stdc++.h>
using namespace std;
typedef long long i64;

int main(){
	int numero,rep;
	vector<int> numbin;
	
	while(cin>>numero && numero){
	numbin.clear(); rep=0;
	  while(numero >= 2){
	  	numbin.push_back(numero%2);
		numero >>=1;
	  }
		numbin.push_back(numero%2);
	reverse(numbin.begin(),numbin.end());
	
	cout<<"The parity of ";
	for(int i=0;i < numbin.size();i++){
           cout<<numbin[i];
	   if(numbin[i]) rep++;
	}
	cout<<" is "<<rep<<" (mod 2).\n";			

	}
 return 0;
}