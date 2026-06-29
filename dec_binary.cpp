#include<iostream>
using namespace std;
#include<math.h>
int main(){
    int n;
    cout<<"give no: ";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit = n&1;
        ans = (bit*pow(10,i)+ans);
         n=n>>1;
         i++;
        //  for as it is we use formula = (ans*10)+digit
        //for reverse formula = (digit*10^i)+ans

    }
    cout<<"Number"<<n<<" in bits is "<<ans<<endl;
}