#include<bits/stdc++.h>
using namespace std;

int main(){
    string s= "leetcode";
    int freq[26]={0};
    for(char c:s){
        freq[c-'a']++;
    }
    for(char c:s){
        if(freq[c-'a']==1){
            cout<<c;
            return 0;
        }
    }
    
}

// int main(){
//     string s="leetcode";

//     map<char,int>mp;
//     for(char c:s){
//         mp[c]++;
//     }
//     for(char c:s){
//         if(mp[c]==1){
//             cout<<c;
//             return 0;
//         }

//     }
//     cout<<-1;
    
//     }
    

