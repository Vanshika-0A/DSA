#include<iostream>
using namespace std;
// 1 2 3
// 4 5 6
// 7 8 9
// int main(){
//     int n;
//     cout<<"Enter the number of rows: ";
//     cin>>n;
//     int i=1;
//      int count = 1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<< count << "   ";
//             count++;
//             j++;
//         }
//         cout<<endl;
//         i++;

//     }
// now
// 1
// 2 3 
// 4 5 6
// 7 8 9 10
    int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int row=1;
     int value = row;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<< value << "   ";
            value++;
            col++;
        }
        cout<<endl;
        row++;

    }
}