#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
const int N = 1e5+10;
int a[N];
int pf[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        pf[i] = pf[i-1]+a[i];
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<<pf[r]-pf[l-1]<<endl;
        
        
    }
    
    return 0;
}