/* given a number n , find the minimum steps to reach n to 1.
this is a top-down dp solution
*/

#include<iostream>
#include<climits>
using namespace std;

int minsteps(int n,int *dp)
{
	//base case
	if(n==1)
	{
		return dp[n]=0;
	}
	// check
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	
	
	// recursive case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;
	op1=minsteps(n-1,dp);
	if(n%2==0)
	{
		op2=minsteps(n/2,dp);
		}	
	if(n%3==0)
	{
		op3=minsteps(n/3,dp);
	}
	int ans=min(op1,min(op2,op3))+1;
	return dp[n]=ans;
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
	cout<<minsteps(n,dp)<<endl;
	return 0;
}

