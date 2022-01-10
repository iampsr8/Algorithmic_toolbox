#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(b%a==0){
        return a;
    }
    else{
        return gcd(b%a,a);
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    int ans;
    if(a>b){
        ans=gcd(b,a);
    }
    else{
        ans=gcd(a,b);
    }
    cout<<ans<<endl;
    return 0;
}