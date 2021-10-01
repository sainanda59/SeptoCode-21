#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int c=0;
        while(n>1){
        c++;
        if(n%2==1){
        n/=2;
        if(n%2==1 && n!=1){
            n++;
        }
        }
        else
        n/=2;
        }
        cout<<c<<endl;
    }
}

