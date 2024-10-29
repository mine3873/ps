#include<iostream>
typedef long long ll;
using namespace std;

ll gcd(ll x, ll y) {
	if (!y) return x;
	return gcd(y, x % y);
} 

ll extended_exclidean(ll a, ll b, ll &x, ll &y){
    if(b == 0){
        x = 1, y = 0;
        return x;
    }
    extended_exclidean(b, a % b, x, y);
    ll x1 = x, y1 = y;
    x = y1;
    y = x1 - (a / b) * y1;
    if( x <= 0) x += b, y -= a;
    return x;
}

int main(){
    ll n, a,  x, y;
    cin >> n >> a;
    cout << n-a << ' ' << (gcd(a,n) == 1 ? extended_exclidean(a, n, x, y) : -1);
}