#include<bits/stdc++.h>
using namespace std;

void solve(){
	string s;
	cin>>s;
	int sumo =0;
	for(int i =0;i<s.size();i++){
		sumo+=s[i]-'0';
	}
	cout<<sumo<<endl;
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