#include<iostream>
using namespace std;
int dp[1000005];
void fun(int L,int R)// 1 10
{
	if(L==R)
	{
		cout<<0;
	}
	else{
	for(int i=L;i<=R;i++)
	{
		int count=0;
		for(int j=2;j<=R;j++)
		{
			if(i%j==0)
			{
				count=count+1;
			}
		}
		if(count==1)
		{
		dp[i]=i;
		cout<<dp[i]<<" ";
		}
	}
	int max=INT_MIN;
	for(int i=L;i<=R;i++)
	{
		if(max<dp[i])
		{
			max=dp[i];
		}
	}
	if(max==0)
		{
			cout<<-1;
			return;
		}
		else{
	cout<<"\n";
	cout<<"MAX: "<<max;
    }
    int min=INT_MAX;
	for(int i=L;i<=R;i++)
	{
		if(dp[i]!=-1 &&dp[i]!=0)
		{
		if(min>dp[i])
		{
			min=dp[i];
		}
	    }
    }
	cout<<"\n";
	cout<<"MIN: "<<min<<"\n";
    cout<<"Difference = "<<(max-min);
}
}
int main()
{
	int T,L,R,a[T];
	cin>>T;
	for(int i=0;i<T;i++)
	{
		dp[i]=-1;
	}
	for(int i=0;i<T;i++)
	{
		cout<<"\n";
		cout<<"Enter Range: ";
		cin>>L>>R;
		fun(L,R);
	}
}
