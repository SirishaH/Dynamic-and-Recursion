#include<bits/stdc++.h>
#include<vector>
using namespace std;
 void printStringSubsets(string res,string a,int n,int vis[])
{
	if(res.size()==a.size())
	{
		cout<<res<<" ";
		cout<<"\n";
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(vis[i]==0)
		{
			vis[i]=1;
			printStringSubsets(res+a[i],a,n,vis);
			vis[i]=0;
		}
	}
 }
int main()
{
	string a,res;
	cin>>a;
	int n;
	n=a.length();
	int vis[n];
	for(int i=0;i<n;i++)
	{
		vis[i]=0;
	}
	printStringSubsets(res,a,n,vis);
	return 0;
}


