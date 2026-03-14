#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="aabbbbeeeeffggg";
    int count=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            count++;
        }else{
            cout<<s[i-1]<<count;
            count=1;
        }
    }cout<<s[s.size()-1]<<count;
    
}




// int main(){
//     int n;
//     cin>>n;

//     string s;
//     cin>>s;

//     map<char,int>mp;
//     for(char c:s){
//         mp[c]++;
//     }
//     for(auto it:mp){
//         cout << it.first << it.second;
        
//     }
    
// }