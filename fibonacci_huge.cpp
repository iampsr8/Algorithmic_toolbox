#include<bits/stdc++.h>
using namespace std;
long long pisano(long long m) {
    long long a = 0, b = 1, c = a + b;
    for (int i = 0; i < m * m; i++) {
        c = (a + b) % m;
        a = b;
        b = c;
        if (a == 0 && b == 1) return i + 1;
    }
}
int main(){
    long long int n,m;
    cin>>n>>m;
    long long int rem=n%pisano(m);
    long long n1=0;
    long long n2=1;
    long long res=rem;
    for (int i = 1; i < rem; i++) {
        res = (n1 + n2) % m;
        n1 = n2;
        n2 = res;
    }
    int ans=res%m;
    cout<<ans<<endl;
    return 0;
}