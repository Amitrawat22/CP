#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
const int N = 1e7+10;
long long int arr[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b,k;
        cin>>a>>b>>k;
        arr[a] += k;
        arr[b+1] -= k;
    }    
        for(int i=1;i<=n;++i){
            arr[i] += arr[i-1];
        }
        long long maxi = -1;
        for(int i=1;i<=n;i++){
            if(arr[i]>maxi){
                maxi = arr[i];
            }
        }
        cout<<maxi<<endl;
    
    
    return 0;
}