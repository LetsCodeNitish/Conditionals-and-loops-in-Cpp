/*Print the following pattern
Pattern for N = 3
  *
 **
***
*/
#include<iostream>
using namespace std;


int main(){

       int i=0, k, N;
    cin>>N;
    while(i<N)
    {
        int a=0;
        k=i;
        while(k<N-1)
        {
            cout<<" ";
            k++;
        }
        while(a<2*i+1)
        {
            cout<<"*";
            a++;
            
        }
        cout<<endl;
        i++;
    }
}


