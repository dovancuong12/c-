#include<bits/stdc++.h>
using namespace std;

int k , n , a[100], x[100];
bool used[100];

void kq()
{
	for(int i = 1 ; i <= k ; i++)
	{
		cout<<a[i];
	}
	cout<<endl;
}


void Try(int i)
{
	for(int j = 1 ; j <= k ; j++)
	{
		if(used[j] == false)
		{
			a[i] = j;
			used[j] = true;
			if(i == n)
			{
				kq();
			}
			else{
			Try(i + 1);
			}
			
			used[j] = false;
		}
	}
}

int main()
{
	n = 5 ; k = 3;
	Try(1);

}
