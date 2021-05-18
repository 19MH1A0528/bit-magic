#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos;
	cin>>num;
	cin>>pos;
	int res;
	res=num^((pos-1)<<1);
	cout<<res;
	return 0;
}
