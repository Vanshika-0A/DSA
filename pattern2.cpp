#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<< j << "   ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}
// if I wanted to print the pattern in reverse order then I can do it by changing the value of j in the inner loop.
// just do cout<< n-j+1 << "   "; instead of cout<< j << "   ";