#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int len = s.size();
        if(len>10){
            cout<<s[0]+to_string(len-2)+s[len-1]<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}