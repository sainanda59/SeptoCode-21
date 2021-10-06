#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
       int n;cin>>n;
       int o=0,e=0,oi=0,ei=0;
       for(int i=1;i<=n;i++){
           int x;cin>>x;
           if(x%2==0){
               e++;
               ei=i;
           }
           else{
               o++;
               oi=i;
           }
       }
       if(o==1){
           cout<<oi<<endl;
       }
       else{
           cout<<ei<<endl;
       }
       
    }
}