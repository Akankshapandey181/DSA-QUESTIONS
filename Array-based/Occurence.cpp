#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    unordered_map<int,int>freq;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        freq[arr[i]]++;
    }
    for(auto it : freq){
        cout<<it.first<<" occurs "<<it.second<<" times "<<endl;
    }
    return 0;
}
