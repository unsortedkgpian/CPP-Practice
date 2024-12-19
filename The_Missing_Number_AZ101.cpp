#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	unordered_map<int, int> m;
	for(int i = 0;i<(3*n)-3;i++){
		int x;
		cin>>x;
		m[x]++;
	}
	int a, b;
	for(auto it =  m.begin();it !=m.end();++it){
		if(it->second == 1){
			a = it->first;
		}else if ( it->second == 2){
			b = it->first;
		}
	}
	cout<<a<<" "<<b<<endl;
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