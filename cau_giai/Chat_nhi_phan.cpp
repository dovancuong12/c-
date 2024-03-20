#include<bits/stdc++.h>

using namespace std;
using ll = long long;

int n , k , a[200005];

bool check(ll x)
{
	//x: day con lon nhat
	//tim xem voi x thi co bao nhieu day con
	//neu so day con <= k -> ok
	//neu so day con > k -> tang x len
	
	int dem = 0;
	long long sum = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(a[i] > x) return false;
		sum += a[i];
		if(sum > x)
		{
			++dem;
			sum = a[i];
		}
	}
	++dem;
	return dem <= k;
	
}

int main()
{
	cin >> n >> k;
	for(int i = 0; i < n ; i++)
	{
		cin >>a[i];
	}
	ll left = *max_element(a ,a + n);
	ll right = accumulate(a ,a + n, 0ll);
	ll res;
	
	while(left <= right)
	{
		ll mid = (left + right)/2;
		if(check(mid))
		{
			res = mid;
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	
	cout<<res<<endl;
	
}
