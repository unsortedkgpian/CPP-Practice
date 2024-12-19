#include<bits/stdc++.h>
using namespace std;

signed main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int a,b,c;
    cin>>a>>b>>c;
    int maxi = max(a,max(b,c));
    int mini = min(a, min(b, c));
    int min_distance = maxi-mini;
 	cout<<min_distance;
}