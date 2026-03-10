#include<iostream>
using namespace std;
int main(){
    int sem;
    cout<<"Enter no of semester: ";
    cin>>sem;
    
    int subject[sem];
    for(int i=0;i<sem;i++){
        cout<<"Enter no of subject in "<<i+1<<" semester: ";
        cin>>subject[i];
    }
    for(int i=0;i<sem;i++){
        int mark,maxMark= -1;
        cout<<"marks obtained in semester "<<i+1<<" : ";
        for(int j=0;j<subject[i];j++){
            cin>>mark;

            if(mark<0 || mark>100){
                cout<<"you have entered invalid mark.";
                return 0;
            }
            if(mark>maxMark){
                maxMark=mark;
            }

        }
        cout<<"maximum mark in "<< i+1 <<" semester: "<<maxMark<<endl;
    }
    return 0;

}