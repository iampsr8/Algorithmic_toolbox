#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>profits(n);
    vector<int>clicks(n);
    for(int i=0;i<n;i++){
        cin>>profits[i];
    }
    for(int i=0;i<n;i++){
        cin>>clicks[i];
    }
    sort(profits.rbegin(),profits.rend());
    sort(clicks.rbegin(),clicks.rend());
    long long int mx=0;
    for(int i=0;i<n;i++){
        mx+=(profits[i]*clicks[i]);
    }
    cout<<mx;
    return 0;
}