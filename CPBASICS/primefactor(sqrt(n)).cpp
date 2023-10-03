#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
void primefactor(int &n){
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            int count=0;
            while(n%i==0){
            count++;
            n/=i;
            }
        
            cout<<i<<"^"<<count<<endl;
        }
    }
    if(n>1){
        cout<<n<<"^"<<1<<endl;
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    primefactor(n);
    return 0;
}