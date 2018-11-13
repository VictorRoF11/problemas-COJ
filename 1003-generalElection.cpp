#include<bits/stdc++.h>
using namespace std;

int main(){
	int casos;cin>>casos;
	while(casos--){
	 vector<int> sumas(100);
	 int max=0;int ganador;
	 int candidatos,regiones;
	 cin>>candidatos>>regiones;
	 for(int i=0;i<regiones;i++){
	    for(int j=0;j<candidatos;j++){
	       int cantidad;cin>>cantidad;
	       sumas[j]+=cantidad;
	       if(sumas[j]>max){
		 max= sumas[j];
		 ganador=j;
	       }
	    }
	 }
	cout<<ganador+1<<"\n";
	}

 return 0;
}