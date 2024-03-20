#include<bits/stdc++.h>

using namespace std;

int n , a[100];

void kq()
{
	for(int i = 0 ; i <= n ; i++)
	{
		cout<<a[i] ;
	}
	cout<<endl;
}

void Try(int i)
{
	for(int j = 0 ; j <= 1 ; j++)
	{
		a[i] =j;
		if(i == n )
		{
			kq();
		}
		else{
			Try(i+1);
		}
	}
}

int main()
{
	n = 5;
	Try(1);
}

