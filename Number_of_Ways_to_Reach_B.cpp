#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll M = 1e9 + 7;
const int MAX = 1e6;

vector<ll> fact(MAX+1), inv_fact(MAX +1);

ll bin_pow(ll base, ll exp, ll mod){
    ll result = 1;
    while(exp >0){
        if(exp % 2 == 1) result = (result*base)%mod;
        base = (base*base)%mod;
        exp /=2;
    }
    return result;
}

void factorials(){
    fact[0] = 1;
    for(ll i =1;i<=MAX;i++){
        fact[i] = (i*fact[i-1])%M;
    }
    inv_fact[MAX] = bin_pow(fact[MAX], M-2, M);
    for(ll i = MAX-1;i>=0;i--){
        inv_fact[i] = (inv_fact[i+1]*(i+1))%M;
    }
}




void solve(){
	int n, m;
	cin>>n>>m;
    ll ans =(((fact[n+m]*inv_fact[n])%M)*(inv_fact[m]))%M;
    cout<<ans<<endl;

}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    factorials();

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}