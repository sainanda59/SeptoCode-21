#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
       int n;cin>>n;
       int s = (n*(n+1))/2;
       int r = 0;
       map<int,int> hash;
       for(int i=1;i<=n;i++){
       int x;cin>>x;
       if(hash[x]==0){
           hash[x]++;
           r+=x;
       }
       }
       cout<<s-r<<endl;
       
    }
}