#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>res;
    int c=0;
    for(int i=1;n;i++){
        if(n-i>i){
            c++;
            n-=i;
            res.push_back(i);
        }
        else{
            c++;
            res.push_back(n);
            break;
        }
    }
    cout<<c<<endl;
    for(auto i:res){
        cout<<i<<" ";
    }
    return 0;
}