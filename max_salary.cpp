#include<bits/stdc++.h>
using namespace std;

static bool comp(string a,string b){
    return stoi(a+b)>=stoi(b+a);
}
int main(){
    int n;
    cin>>n;
    string res="";
    vector<string>val;
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        val.push_back(to_string(c));
    }
    sort(val.begin(),val.end(),comp);
    for(auto i:val){
        res+=i;
    }
    cout<<res;
    return 0;
}