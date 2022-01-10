#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int coins[]={10,5,1};
    int rem=1;
    int c=0;
    int i=0;
    while(rem!=0){
        c+=(n/coins[i]);
        rem=n%coins[i];
        if(rem>0){
            n=rem;
            i++;
        }
    }
    cout<<c;
    return 0;
}