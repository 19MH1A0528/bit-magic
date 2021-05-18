#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num,pos;
	cin>>num;
	cin>>pos;
	num=num|(1<<(pos-1));
	cout<<num;
	return 0;
	
	
}
