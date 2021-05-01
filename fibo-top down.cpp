#include<iostream>
using namespace std;

// before calculating check whether it is already solved
// and before returning store it

int fibo(int n,int *dp)
{
	// base case
	if(n==0 || n==1)
	{
		return dp[n]=n;
	}
	// check
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	// recursive case
	return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
}
int main()
{
	int n;
	cin>>n;
	int *dp=new int[n+1];
	for(int i=0;i<=n;i++)
	{
		dp[i]=-1;
	}
	cout<<fibo(n,dp)<<endl;
	return 0;
}
