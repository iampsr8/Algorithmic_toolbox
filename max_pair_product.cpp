#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        arr.push_back(ele);
    }
    sort(arr.begin(),arr.end());
    long long res=(long long)arr[arr.size()-1]*arr[arr.size()-2];
    cout<<res;
    return 0;
}