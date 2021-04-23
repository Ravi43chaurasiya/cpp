#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//vector<string> v;

void subsequences_rec(char *inp,int i,int mv)
{
	// base case
	if(i==mv)
	{
		return;
	}
	// recursive case
	int j=i;
	int index=0;
	while(j!=0)
	{
		if((j&1)==1)
		{
			cout<<inp[index];
		}
		index++;
		j=j>>1;
	}
	cout<<endl;
	subsequences_rec(inp,i+1,mv);
	return;
}
int main()
{
	char inp[4]="abc";
	int mv=1<<(strlen(inp));
	subsequences_rec(inp,0,mv);
	return 0;
}
