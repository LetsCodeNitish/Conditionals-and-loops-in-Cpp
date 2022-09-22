/* Given three values - Start Fahrenheit Value (S), End Fahrenheit value (E) and Step Size (W), you need to convert all Fahrenheit values from Start to End at the gap of W, into their corresponding Celsius values and print the table.*/
#include <iostream>
using namespace std;

int main(){
    int s,w,e,c;
    cin>>s>>e>>w;
    while(s<=e)
    {
         c=((s-32)*5)/9;
         cout<<s<<" "<<c<<endl;
         s=s+w;
    }
}