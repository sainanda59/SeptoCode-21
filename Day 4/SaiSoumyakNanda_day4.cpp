#include<iostream>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
    int n;cin>>n;
    if(n<=33)
        cout<<n<<endl;
    else{
        int y = 5*((n/5)+1);
        if(y-n<3)
        cout<<y<<endl;
        else
        cout<<n<<endl;
    }

}
}