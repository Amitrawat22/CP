/*
    given t test case and each test case a number N . print its factorial for each test case % M
    where M = 10^9+7;

    constraints
    1<=T<=10^5;
    1<=N<=10^5
*/

#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
const int M = 1e9+7;
const int N = 1e5+10;
long long fact[N];
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fact[0] = fact[1] = 1;
    for(int i=2;i<N;i++){
        fact[i] = fact[i-1]*i;
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
    }


    return 0;
}
// O(10^10) iterations O(t*n);old

// O(N) + O(T); 10^5 +10^5 