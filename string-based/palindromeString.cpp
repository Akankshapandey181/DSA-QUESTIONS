#include<bits/stdc++.h>
using namespace std;
 
    int main(){
        string s="aabbaa";
        int i=0;
        int j=s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                cout<<"false";
                return 0;
            }else{
                i++;
                j--;
            }
        }
        cout<<"true";
    }


    // int main(){
    //     string s="abab";
    //     string rev=s;

    //     reverse(rev.begin(),rev.end());
    //     if(s==rev){
    //         cout<<"Palindrome";
    //     }else{
    //         cout<<"Not Palindrome";
    //     }
    // }

