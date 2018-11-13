//Sumamos las cifras del número y si el resultado de la suma es un número múltiplo de 3, entonces el número sí es divisible por 3.
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,count;
	scanf("%d",&n);
	
	count=n-n/3;
	if(n%2 != 3) count--;

	printf("%d\n", count);

	return 0;
}
