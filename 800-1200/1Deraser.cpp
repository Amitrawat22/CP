#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
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
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        ll size = s.size();
        for(int i=0;i<size;i++){
           if(s[i]=='B'){
            ans++;
            i +=k-1;
           }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}