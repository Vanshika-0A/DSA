#include<iostream>
using namespace std;
int main(){
    // pattern 1
    // * * *
    // * * *
    // * * *
    // int n;
    // cout<<"Enter the number of rows: ";
    // cin>>n;
    // int i=1;
    // while(i<=n) {
    //     int j=1;
    //     while(j<=n){
    //         cout<<"*"<<"  ";
    //         j++;

    //     }
    //     cout<<endl;
    //     i++;
    // }
    // // pattern 2
    // // 1 1 1
    // // 2 2 2
    // 3 3 3
    cout<<"enter no of rows:";
        int n;
    int i =1;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=i){
            cout<<i<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    // pattern 3
    // * * * 
    // * *
    // * 
    //  cout<<"enter no of rows:";
    //     int n;
    // int i =1;
    // cin>>n;
    // while(i<=n){
    //     int j=i;
    //     while(j<=i){
    //         cout<<"*"<< " ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
}
