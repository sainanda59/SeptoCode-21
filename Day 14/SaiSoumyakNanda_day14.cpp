#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
       int n;cin>>n;
       int a[n];
       int mx=INT_MIN;
       int mxi=0;
       for(int i=0;i<n;i++){
           int x;cin>>x;
           if(x>mx){
               mx=x;
               mxi=i+1;
           }
       }
       cout<<mxi<<endl;
       
    }
}