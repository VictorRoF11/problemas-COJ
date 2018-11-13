#include <bits/stdc++.h>
using namespace std;

char s[32];
char t[32];
int ini;

int main(){

	while(cin>>s>>t){
		int j=0;
		int ban=0;
		for (int i = 0; i < strlen(t); ++i){

			if(s[j] == t[i]){
				ban++;
				j++;
			}
		}

		if(ban == strlen(s))cout<<"Yes\n";
		else cout<<"No\n";
	}

	return 0;
}