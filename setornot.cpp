#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cout<<"enter number and position";
	cin>>n;
	cin>>k;
	if(n&((k-1))<<1)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
}
