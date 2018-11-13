#include<bits/stdc++.h>
using namespace std;

int main(){
 string figura;cin>>figura;
 if(figura[0] == 's'){
  int lado;cin>>lado;
  cout<<lado*lado<<"\n";
 }
 else{
  int base,altura;
  cin>>base>>altura;
  cout<<base*altura<<"\n";

 }

 return 0;
}