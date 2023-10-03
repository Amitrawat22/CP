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
    string str ="hello";
    string str1 = "hello";
    string r= str+" "+str1;
    cout<<r<<"\n";
    if(str == str1){
        cout<<"equal"<<endl;
    }
    else
        cout<<"NOt equal"<<endl;
    cout<<str[0]<<endl;
    str[0] = 'a';
    cout<<str<<endl;
    cout<<r.size();
    return 0;

}