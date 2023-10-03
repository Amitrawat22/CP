#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
bool ar[50000001];
vector<int> primes;
//all these elements in ar contains false;
void sieve()
{
    //true->composite;
    //false->prime;
    int maxN = 50000000;
    //as zero and 1 are not prime number;
    ar[0]=ar[1]=true;
    for(int i=2;i*i<maxN;i++){
        if(!ar[i]){
            for(int j=i*i;j<=maxN;j+=i)
                ar[j]=true;//composite
        }
    }
    for(int i=2;i<=maxN;i++){
        if(!ar[i]){
            primes.push_back(i);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int q,n;
    cin>>q;
    sieve();
    while(q--){
        cin>>n;
        cout<<primes[n-1]<<endl;
    }


    return 0;
}