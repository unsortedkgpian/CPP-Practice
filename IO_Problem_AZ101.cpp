#include<bits/stdc++.h>
using namespace std;

void solve(){
	int a;
	cin>>a;
	string s;
	cin>>s;
	int y, z;
	for(int i =0;i<s.size();i++){
		if(s[i] == '.'){
			string Y = s.substr(0,i);
			string Z = s.substr(i + 1);
			// cout<<Y<<endl<<Z<<endl;
			y = stoi(Y);
			z= stoi(Z);
			break;
		}
	}
	string ans = to_string(z+a) + '.' + to_string(y+a);
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