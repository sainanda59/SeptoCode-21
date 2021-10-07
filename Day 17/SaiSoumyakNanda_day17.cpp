#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
      long long int n;cin>>n;
      while(n/10!=0){
          long long int sum=0;
          while(n!=0){
              int x = n%10;
              sum+= x*x;
              n/=10;
          }
          n=sum;
          if(sum==1){
          break;
          }
      }
      if(n==1){
          cout<<"lucky"<<endl;
      }
      else{
          cout<<"unlucky"<<endl;
      }
       
    }
}