#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
int modularexponentiation(int base,int power,int mod){
    int res=1;
    while(power){
        if(power%2){
            res = (res*base)%mod;
            power--;
        }
        else{
            base = (base*base)%mod;
            power/=2;
        }
    }
    return res;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int base;
    int power;
    int mod;
    cin>>base>>power>>mod;
    cout<<modularexponentiation(base,power,mod)<<endl;

    return 0;
}