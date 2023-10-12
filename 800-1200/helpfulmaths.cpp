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
    string s;
    cin>>s;
    int arr[1001];
    int count=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='+')
            continue;
        else{
            arr[count++]=s[i]-'0';
            //char to numeric digit;
        }
    }   
    sort(arr,arr+count);
    for(int i=0;i<count;i++){
        cout<<arr[i];
        if(i==count-1){
            break;
        }
        cout<<"+";
    }

    return 0;
}