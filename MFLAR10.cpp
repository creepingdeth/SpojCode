#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
	string s;
	int n,j,b,c,d,i;
	char prev;
	bool flag;
	getline(cin,s);
	while(s!="*")
	{
		prev=toupper(s[0]);
		flag=true;
		for(i=0;i<s.size();i++)
		{
			if(s[i]==' ')
			{
				if(toupper(s[i+1])!=prev)
				{
					flag=false;
					break;
				}

			}
		}
		if(flag==true)
			cout<<'Y'<<endl;
		else
			cout<<'N'<<endl;
		getline(cin,s);
	}
	return 0;
}
