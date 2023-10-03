#include<bits/stdc++.h>

typedef unsigned long long int ll;
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;

    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n+10];
        int forward[n+10];
        int backword[n+10];
        forward[0]=backword[n+1]=0;
        for(int i=1;i<=n;++i){
            cin>>a[i];
        }
        for(int i=1;i<=n;i++){
            forward[i] = gcd(forward[i-1],a[i]);
        }
        for(int j=n;j>=1;--j){
            backword[j] = gcd(backword[j+1],a[j]);
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<gcd(forward[l-1],backword[r+1])<<endl;
        }
    }
    return 0;
}