//ITERATIVE METHOD

/*#include<iostream>
using namespace std;
int main()
{
	int n,fact=1;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<fact<<" ";
}*/

//FACTORIAL USING RECURSION

/*#include<iostream>
using namespace std;
int isfact(int n)
{
	if(n==1)
	{
		return 1;
	}
	if(n==0)
	{
		return 0;
	}
	return n*isfact(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<isfact(n);
}*/

//FACTORIAL OPTIMISING METHOD

#include<bits/stdc++.h>
using namespace std;
int dp[1000005];
int isfact(int n)
{
	if(n==1||n==0)
	{
		return 1;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	return dp[n]=n*(isfact(n-1));
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		dp[i]=-1;
	}
	cout<<isfact(n)<<endl;
	/*for(int i=0;i<=n;i++)
	{
		cout<<dp[i]<<" ";
	}*/
}
