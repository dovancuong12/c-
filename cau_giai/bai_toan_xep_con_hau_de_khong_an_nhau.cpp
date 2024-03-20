#include<bits/stdc++.h>
using namespace std;

int n,dem , a[100];

bool cot[100] , xuoi[100] , nguoc[100];

void kq()
{
	for(int i = 1 ; i <= n ; i++)
	{
		cout<<"con hau o hang "<<i<<" nam o cot "<<a[i]<<endl;
	}
	cout<<endl;
}

void Try(int i)
{
	for(int j = 1 ; j <= n ; j ++)
	{
		if(!cot[j] && !xuoi[i - j + n] && !nguoc[i + j - 1])
		{
			a[i] = j;
			cot[j] = true;
			xuoi[i - j + n] = true;
			nguoc[i + j - 1] = true;
			
			if(i == n)
			{
				kq();
				dem++;
			}
			else{
				Try(i + 1);
			}
			cot[j] = false;
			xuoi[i - j + n] = false;
			nguoc[i + j - 1] = false;
		}
	}
}

int main()
{
	memset(cot,false,sizeof(cot));
	memset(xuoi,false,sizeof(xuoi));
	memset(nguoc,false,sizeof(nguoc));
	n = 8;
	Try(1);
	cout<<dem;
}
