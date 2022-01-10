#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int temp=n-1;
    if(n==0){
        temp=0;
    }
    int s=0;
    int n1=0,n2=1,n3=0;
    while(temp--){
        n3=(n1+n2)%10;
        n1=n2;
        n2=n3;
    }
    m-=n;
    if(n==0){
        m--;
    }
    m++;
    while(m--){
        s=(s+n2)%10;
        n3=(n1+n2)%10;
        n1=n2;
        n2=n3;
    }
    cout<<s<<endl;
    return 0;
}