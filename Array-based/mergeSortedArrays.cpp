#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};

    int m=3,n=3;

    int i=m;
    for(int j=0;j<n;j++){
        nums1[i]=nums2[j];
        i++;
    }

    sort(nums1.begin(),nums1.end());

    for(int x:nums1) cout<<x<<" ";
}
