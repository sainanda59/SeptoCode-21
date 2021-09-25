#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    map<int,int> map;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        map[x]++;
    }
    for(auto x: map){
        if(x.second==1){
            cout<<x.first<<" ";
        }
    }
    cout<<endl;
    
    }
}