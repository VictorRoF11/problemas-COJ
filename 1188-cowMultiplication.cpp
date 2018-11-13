#include <bits/stdc++.h>
using namespace std;


int main(){
	string num1,num2;
	cin>>num1>>num2;
	int total=0;
	for(int i=0;i<num1.size();i++){
	 	for(int j=0;j<num2.size();j++){
	  	 	total += (num1[i]-48)*(num2[j]-48);
		}
	}
	cout<<total<<"\n";


 return 0;
}