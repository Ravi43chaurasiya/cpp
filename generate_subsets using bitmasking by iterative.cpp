#include<iostream>
#include<cstring>

using namespace std;
void filter_chars(int i,char *str)
{
	int j=0;
	while(i>0)
	{
		if(i&1!=0)
		{
			cout<<str[j];
		}
		j++;
		i=i>>1;
	}
	cout<<endl;
	return ;
}

void generate_subsequences(char *str,int n)
{
	for(int i=0;i<=(1<<n)-1;i++)
	{
		filter_chars(i,str);
	}
	return ;
}


int main()
{
	char str[]="abc";
	int n=strlen(str);
	generate_subsequences(str,n);
	return 0;
}
