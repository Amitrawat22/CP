#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long total = (n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        int x;
        cin>>x;
        total -=x;
    }
    cout<<total<<endl;

    return 0;
}