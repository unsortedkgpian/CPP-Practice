#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	string ans = "YES";
	if (n ==1){
		cout<<"NO"<<endl;
		return;
	}
	for(int i =2;i*i<=n;i++){
		if(n%i == 0){
			ans = "NO";
		}
	}
	cout<<ans<<endl;
}

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int t;
    cin>>t;

    while(t--){
        solve();
    }
}