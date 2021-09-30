#include<bits/stdc++.h>
using namespace std;
#include <set>

int main(){
    int t;cin>>t;
    while(t--){
        set<char> st;
        string s;cin>>s;
        if(s.size()<26){
            cout<<"Fail"<<endl;
        }
        for(int i=0;i<s.size();i++){
           st.insert(s[i]);
        }
        if(st.size()==26){
            cout<<"Pass"<<endl;
        }
    }
}