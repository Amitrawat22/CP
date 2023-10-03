#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

const int N = 1e7+10;
int H[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif

   
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        H[a[i]]++;
    }
    int q;
    cin>>q;

    while(q--){
        int x;
        cin>>x;
        cout<<H[a[x]]<<endl;
        
    }
    return 0;
}