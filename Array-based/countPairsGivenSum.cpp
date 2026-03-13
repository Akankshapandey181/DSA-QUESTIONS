#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int count=0;
    unordered_map<int,int>mp;

    for(int i=0;i<n;i++){
        int x=target-arr[i];
        if(mp[x]>0){
            count++;
        }
        mp[arr[i]]++;
    }
    cout<<count;

}
