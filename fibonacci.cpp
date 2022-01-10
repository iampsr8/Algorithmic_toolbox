#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    n--;
    long long int n1=0,n2=1,n3=0;
    while(n--){
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    cout<<n3<<endl;
    return 0;
}