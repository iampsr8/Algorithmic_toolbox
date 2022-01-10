#include<bits/stdc++.h>
using namespace std;

int main(){
    int d,m;
    cin>>d>>m;
    int n;
    cin>>n;
    vector<int>pumps(n+1);
    for(int i=0;i<n;i++){
        cin>>pumps[i];
    }
    pumps[pumps.size()-1]=d;
    int mx=m;
    int refill=0;
    m-=pumps[0];
    for(int i=1;i<pumps.size();i++){
        m-=(pumps[i]-pumps[i-1]);
        if(pumps[i]-pumps[i-1]>=mx){
            refill=-1;
            break;
        }
        if(m<0){
            refill++;
            m=mx;
            i--;
        }
    }
    cout<<refill;
    return 0;
}