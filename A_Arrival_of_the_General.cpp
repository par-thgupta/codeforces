#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    vector<int> v;
    int ma = INT_MIN,mi = INT_MAX,a,b;
    for(int i=0;i<n;i++){
        int h;cin>>h;
        v.push_back(h);
        if(ma < h){
            ma = h;
            a =i;
        }
        if(mi >= h){
            mi = h;
            b=i;
        }
    }
    if(a < b)cout<<a+(n-1)-b;
    else {cout<<a+(n-1)-(b+1);}
return 0;
}