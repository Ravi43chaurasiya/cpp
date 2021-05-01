/* given a number n , find the minimum steps to reach n to 1.
this is a recursive solution
*/

#include<iostream>
#include<climits>
using namespace std;

int minsteps(int n)
{
	//base case
	if(n==1)
	{
		return 0;
	}
	// 
	
	
	// recursive case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;
	op1=minsteps(n-1);
	if(n%2==0)
	{
		op2=minsteps(n/2);
		}	
	if(n%3==0)
	{
		op3=minsteps(n/3);
	}
	int ans=min(op1,min(op2,op3))+1;
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<minsteps(n)<<endl;
	return 0;
}

