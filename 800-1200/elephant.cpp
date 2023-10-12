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
    ll x;
    cin>>x;
    int count=0;
    while(x!=0){
        if(x>=5){
            count++;
            x -=5;
        }
        else if(x>=4 && x<5){
            count++;
            x -= 4;
        }
        else if(x>=3 && x<4){
            count++;
            x -= 3;
        }
        else if(x>=2 && x<3){
            count++;
            x -= 2;
        }
        else{
            count++;
            x -=1;
        }
    }
    cout<<count;
    return 0;
}