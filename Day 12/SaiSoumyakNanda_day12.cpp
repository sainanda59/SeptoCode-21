#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
       int n;cin>>n;
       int a[n][n];
       int rs=0,cs=0;
       for(int i=0;i<n;i++){
           for(int j=0;j<n;j++){
               cin>>a[i][j];
               if(i==0 || i==n-1){
                   rs+=a[i][j];
               }
               if(j==0 || j==n-1){
                   cs+=a[i][j];
               }
           }
       }
       cout<<abs(rs-cs)<<endl;
    }
}
