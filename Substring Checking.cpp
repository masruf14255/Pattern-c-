#include<bits/stdc++.h>
using namespace std;




bool search(string s1,string p)
{
	int n=s1.length();
	int m=p.length();
	for(int i=0; i<=n-m; i++)
	{
		int j;
		for(j=0; j<m; j++)
		{
			if(s1[i+j]!=p[j])
				break;
		}
		if(j==m)
			return true;

	}
	return false;
}
int main()
{
	string s1="prodevelopertutrial";
	string p="rial";

	if(search(s1,p))
	{
		cout<<"Present";
	}
	else
	{
		cout<<"No Found";
	}
}
