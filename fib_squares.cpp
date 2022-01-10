#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    int n1=0,n2=1,n3=0;
    int s=0;
    while(n--){
        s=(s+(n2*n2))%10;
        n3=(n1+n2)%10;
        n1=n2;
        n2=n3;
    }
    cout<<s<<endl;
    return 0;
}