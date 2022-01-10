#include<bits/stdc++.h>
using namespace std;

static bool comp(vector<double>a,vector<double>b){
    return (a[0]/a[1] > b[0]/b[1]);
}

int main(){
    vector<vector<double>>items;
    int t,W;
    cin>>t>>W;
    for(int i=0;i<t;i++){
        vector<double>temp(2);
        cin>>temp[0]>>temp[1];
        items.push_back(temp);
    }
    sort(items.begin(),items.end(),comp);
    int i=0;
    double val=0;
    while(W!=0 && i<items.size()){
        int weigh=items[i][1];
        int taken=min(W,weigh);
        W-=taken;
        val+=(double)(items[i][0]/items[i][1])*taken;
        if(W>0){
            i++;
        }
    }
    cout<<setprecision(15)<<val;
    return 0;
}