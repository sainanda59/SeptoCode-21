#include<iostream>
using namespace std;

int score(int a,int b, int c){
    int ans = a+b*c/a-b;
    return ans;
}

int main(){
    int n;
    cin>>n;
    while(n--){
        int a,b,c;
        cin>>a>>b>>c;
        cout<<score(a,b,c)<<endl;
    }
}