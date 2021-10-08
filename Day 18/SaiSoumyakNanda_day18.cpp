#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
      long long int n;cin>>n;
      map<int,int> hash;
      for(int i=0;i<n;i++){
          int x;cin>>x;
          hash[x]++;
      }
      for(int i=1;i<=n;i++){
          if(hash[i]==0){
              cout<<i<<" ";
          }
      } 
      cout<<endl; 
    }
}