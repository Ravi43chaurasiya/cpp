// let dinomination[ ]={1,7,10}
/* amount =15
find the minimum number of coins to give exchange of amount*/
#include<iostream>
#include<climits>

using namespace std;

int coinsexchange(int amt,int *dino,int n)
{
	// base case
	if(amt==0)
	{
		return 0;
	}
	// recursive case
	int ans=INT_MAX;
	for(int i=0;i<n;i++)
	{
		if(amt>=dino[i])
		{
			int sa=coinsexchange(amt-dino[i],dino,n);
			if(sa!=INT_MAX)
			{
				ans=min(sa+1,ans);
			}
		}
	}
	return ans;
}



int main()
{
	int dino[4]={1,7,10};
	int amount;
	cin>>amount;
	cout<<coinsexchange(amount,dino,3);
	return 0;
}
