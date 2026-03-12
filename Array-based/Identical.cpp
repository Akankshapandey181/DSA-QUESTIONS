#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>mat={
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };
    vector<vector<int>>matrix={
        {1,1,1,1},
        {2,2,2,2},
        {3,3,3,3},
        {4,4,4,4}
    };

    int n=mat.size();
    int m=mat[0].size();

    if(n!=matrix.size() || m!=matrix[0].size()){
         cout<<"Matrices are not identical";
        return 0;

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]!=matrix[i][j]){
                 cout<<"Matrices are not identical";
        return 0;
            }
        }
    }
    cout<<"Matrices are identical";
       
   
}
