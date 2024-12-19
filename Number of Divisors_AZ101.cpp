#include<bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin>>n;
	unordered_set<int> s;
	for (int i = 1; i*i <= n; ++i)
	{
		if(n%i == 0){
			if(n/i == i){
				s.push_back(i);
			}else{
				s.push_back(i);
				s.push_back(n/i);
			}
		}
	}
	cout<<s.size()<<endl;
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