#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin>>T;
    string numero;
	while(T--){
	  cin>>numero;
	  int num;int suma=0;
	  if(numero.size() == 1){
	     suma=int(numero[0]-48);
	  }else		
	  for(int i=0;i<2;i++){
	     num=int(numero[(numero.size()-1*(i+1))])-48;
   	     num= num*(pow(10,i));
  	     suma+=num; 
	  }
	  if(suma%4 == 0) cout<<"YES\n";
	  else cout<<"NO\n";	 

	}

 return 0;
}