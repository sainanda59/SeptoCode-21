#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;cin>>t;
   while(t--){
       int n;cin>>n;
       while(n>3){
           cout<<2<<" ";
           n-=2;
       }
       if(n==2)
       cout<<2<<endl;
       if(n>=3)
       cout<<3<<endl;
   }
}