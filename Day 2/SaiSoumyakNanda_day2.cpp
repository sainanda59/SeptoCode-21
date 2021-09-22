#include<iostream>
using namespace std;

int leap(int n){
    if (n % 400 == 0)
        return 366;

    if (n % 100 == 0)
        return 365;

    if (n % 4 == 0)
        return 366;

    return 365;
}

int main(){
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        cout<<leap(a)+leap(b)<<endl;
    }
}
