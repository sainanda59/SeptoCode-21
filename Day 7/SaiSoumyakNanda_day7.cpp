#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int sqn = 0;
        int c =1;
        for(int i=0;i<n-1;i++){
          if(s[i]==s[i+1]){
              c++;
              sqn=max(sqn,c);
          }
          else{
              sqn=max(sqn,c);
              c=1;
          }

        }
        if(sqn>=6){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}