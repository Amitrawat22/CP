#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
int exponentiation(int base,int power){
    int result=1;
    //while(n)->n is non zero
    while(power){
        //if(n%2)->when it is non zero or odd
        if(power%2){
            result *=base;
            power--;
        }
        else{
            //even
            base *=base;
            power/=2;
        }
    }
    return result;
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
    cin>>base>>power;
    cout<<" "<<exponentiation(base,power);

    return 0;
}