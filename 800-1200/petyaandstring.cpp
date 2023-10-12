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

    string a;
    string b;
    cin>>a>>b;
    int val1 = INT_MIN;
    int val2 = INT_MIN;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]<92){
            a[i] += 32;
        }
        if(b[i]<92){
            b[i] +=32;
        }

    }
    if(a<b)cout<<-1;
    if(a>b)cout<<1;
    if(a==b)cout<<0;
   
    return 0;
}