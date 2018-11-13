#include <iostream>
#include <string>
using namespace std;
string s;
int main() 
{
	cin>>s;
	int i,j,b,c,d;
	while(s!="0")
	{
		b=0;
		c=0;
		for(i=0;i<s.size();i=i+2)
			b=b+int(s[i])-int('0');
		for(i=1;i<s.size();i=i+2)
			c=c+int(s[i])-int('0');
		if(b<c)
		swap(b,c);
		if( (b-c)%11==0)
			cout<<s<<" is a multiple of 11."<<endl;
		else
			cout<<s<<" is not a multiple of 11."<<endl;
		cin>>s;
	}
	// your code goes here
	return 0;
}