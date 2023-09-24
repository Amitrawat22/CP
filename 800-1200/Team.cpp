#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //total cases;
    int ans=0;
    for(int i=0;i<n;i++){

        int a[3];
    
        int countone = 0;

        for(int j=0;j<3;j++){
            cin>>a[j];
            if(a[j]==1){
                countone++;
            }
        }
        if(countone>=2)
        {
            ans++;
        }
    }
    cout<<ans;
    return 0;
}