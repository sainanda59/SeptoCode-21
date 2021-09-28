#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
    string s;cin>>s;
    int uc=0,sc=0;
    for(int i=0;s[i]!='\0';i++){
       if(s[i]>='A' && s[i]<='Z'){
           uc++;
       }
       else{
           sc++;
       }
    }
    if(sc>=uc){
        for(int i=0;s[i]!='\0';i++){
            if(s[i]>='A' && s[i]<='Z')
            s[i]+=32;
        }
    }
    else{
        for(int i=0;s[i]!='\0';i++){
            if(s[i]>='a' && s[i]<='z')
            s[i]-=32;
        }
    } 
    cout<<s<<endl;   
    }
}