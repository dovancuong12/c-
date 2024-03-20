#include<bits/stdc++.h>

using namespace std;

using ll = long long;
ll a, b, c;

ll binpow(ll a , ll b , ll c)
{
	if(b == 0) return 1;
	ll x = binpow(a , b/2 , c);
	if(b % 2 == 1)
		return ((x % c) * (x % c) * (a % c)) % c;
	else
		return ((x % c) * (x % c)) % c;
}

int main()
{
	a = 103;
    b = 106;
    c = 7;
    ll result = binpow(a, b, c);
    cout<<result;
}
