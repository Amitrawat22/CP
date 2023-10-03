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
    string s;
    cin>>s;
    int n=s.length();
    int maxi=0;
    int cur=1;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            maxi = max(maxi,cur);
            cur=0;
        }
        cur++;
    }
    cout<<max(maxi,cur)<<endl;

    return 0;
}