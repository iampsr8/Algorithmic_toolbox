#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    return gcd(b % a, a);
}
int main(){
    int a,b;
    cin>>a>>b;
    long long int ans=(long long)(a/gcd(a,b))*b;
    cout<<ans<<endl;
    return 0;
}