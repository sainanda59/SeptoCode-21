#include<bits/stdc++.h>
using namespace std;

int main(){
   int t;cin>>t;
   while(t--){
       int n;cin>>n;
       int a[n];
       for(int i=0;i<n;i++){
           cin>>a[i];
       }
       bool high = true;
       bool check = false;
       for(int i=1;i<n;i++){
           if(a[i]<a[i-1])
           high=false;
           if(high){
               if(a[i]==a[i-1]){
                   cout<<"Gentle"<<endl;
                   check=true;
                   break;
               }
           }
           else{
               if(a[i]>=a[i-1]){
                   cout<<"Gentle"<<endl;
                   check=true;
                   break;
               }
           }
       }
       if(!check){
           cout<<"Steep"<<endl;
       }
   }
}