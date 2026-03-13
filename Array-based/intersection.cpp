#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>nums1={4,9,5};
    vector<int>nums2={9,4,9,8,4};
    set<int>s(nums1.begin(),nums1.end());
    set<int>ans;

    for(int x : nums2){
        if(s.count(x)){
            ans.insert(x);

        }
    }
    for(auto i : ans){
        cout<<i<<" ";
    }

}