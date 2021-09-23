#include <iostream>
#include <sstream>
using namespace std;

int main(){
    string s;cin>>s;
    long long int i=0;
    while(s[i]!='\0'){
        if(s[i]==',')
        cout<<endl;
        else
        cout<<s[i];
        i++;
    }
}