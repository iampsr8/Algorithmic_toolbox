#include<bits/stdc++.h>
using namespace std;
static bool comp(pair<int,int>a,pair<int,int>b){
    return a.second<b.second;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>points;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        points.push_back({a,b});
    }
    sort(points.begin(),points.end(),comp);
    vector<int>ends;
    int mn=points[0].second;
    ends.push_back(mn);
    for(auto i:points){
        if(mn<i.first || mn>i.second){
            mn=i.second;
            ends.push_back(mn);
        }
    }
    cout<<ends.size()<<endl;
    for(auto i:ends){
        cout<<i<<" ";
    }
    return 0;
}