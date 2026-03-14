#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="aabcd";
    int l=0;
    int r=s.size()-1;
    while(l<r){
        swap(s[l],s[r]);
        l++;
        r--;
    }  
        cout<<s;    
}

// int main(){
//     string s="abcd";
//     stack<char>st;
//     for(char c:s){
//         st.push(c);
//     }
//     while(!st.empty()){
//         cout<<st.top();
//         st.pop();
//     }
// }


//  int main(){
//     string s="abedsc";
//     string ans="";
//     for(int i=s.size()-1;i>=0;i--){
//         ans+=s[i];
//     }
//     cout<<ans;
// }



// int main(){
//     string s="abedsc";
//     reverse(s.begin(),s.end());
//     cout<<s;
// }

