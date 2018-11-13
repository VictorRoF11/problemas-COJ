#include<bits/stdc++.h>
using namespace std;
int main(){
int n,ban=0;
while(cin>>n && (n>=0 && n<=100)){
if(n == 42) ban = 1;
if(ban != 1)  cout<<n<<"\n";
}
return 0;
}