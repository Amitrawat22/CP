#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int k;
    cin>>n;
    cin>>k;
    int a[50];
    int count=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    } 
    // cout<<"value at kth position is"<<a[k]<<endl;
    for(int i=0;i<n;i++){
       if(a[i]>=a[k-1]&&a[i]>0){
        count++;
       }
    } 
    cout<<count;
    return 0;
}