#include<bits/stdc++.h>
using namespace std;

void solve(){
	int x1, y1, x2, y2, x3, y3, x4, y4;
	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	int a1 = max(x1, x3);
	int b1 = max(y1, y3);
	int a2 = min(x2, x4);
	int b2 = min(y2, y4);
	int ari = 0;
	if(a1<=a2 && b1<= b2){
		ari = (a2 - a1)*(b2- b1);
	}
	int ari1 = (y2-y1)*(x2-x1);
	int ari2 = (y4-y3)*(x4-x3);
	int unio = ari1 + ari2 - ari;
	cout<<ari<<" "<<unio<<endl;
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