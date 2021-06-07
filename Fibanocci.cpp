/*#include<iostream>
using namespace std;
int main()
{                       
	int f0=0,f1=1,f2,n,count=2;
	cin>>n;
	cout<<"Fibanocci Series  :  "<<f0<<" "<<f1<<" ";
	while(count<n)
	{
		f2=f0+f1;// f1=0+1-->1
		f0=f1;//f0=1
		f1=f2;
		count++;
		cout<<f2<<" ";
	}
	return 0;
}*/

//FIBANOCCI USING RECURSION METHOD

/*#include<bits/stdc++.h>
using namespace std;
int isfibo(int n)
{
      if(n<=1)
	  {
	  	return n;
	  }	
	  return isfibo(n-1)+isfibo(n-2);
}
int main()
{
	int n;
	cin>>n;
	cout<<isfibo(n-1);
}*/


//FIBANOCCI OF OPTIMISATION

#include<bits/stdc++.h>
using namespace std;
int dp[1000005];
int isfibo(int n)
{
	if(n<=1)
	{
		return n;
	}
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	return dp[n]=isfibo(n-1)+isfibo(n-2);
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		dp[i]=-1;
	}
	cout<<isfibo(n-1)<<endl;
	/*for(int i=0;i<n;i++)
	{
		cout<<dp[i]<<" ";
	}*/
}
