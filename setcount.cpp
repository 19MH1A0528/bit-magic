#include<iostream>
using namespace std;
int main()
{
	int num,count=0;
	cin>>num;
	while(num!=0)
	{
		if(num&1==1)
		{
			count++;
		}
		num=num>>1;
	}
	cout<<"set bit count:"<<count;
	return 0;
	
}
