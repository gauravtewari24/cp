#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	for (int i = 0; i < 16; i++)
	{	
	cout<<(i&0)<<" ";
	}
	cout<<"\n";

	for (int i = 0; i < 16; i++)
	{	
	cout<<(i&i)<<" ";
	}
	cout<<"\n";

	for (int i = 0; i < 16; i++)
	{	
	cout<<(i&1)<<" ";
	}
	cout<<"\n";

	for (int i = 0; i < 16; i++)
	{	
	cout<<(i^i)<<" ";
	}
	cout<<"\n";

	for (int i = 0; i < 16; i++)
	{	
	cout<<(i^1)<<" ";
	}
	cout<<"\n";

	for (int i = 0; i < 16; i++)
	{	
	cout<<~(i^0)<<" ";
	}
	cout<<"\n";
}	
