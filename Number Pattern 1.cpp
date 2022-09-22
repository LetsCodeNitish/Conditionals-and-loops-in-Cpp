/*Print the following pattern
Pattern for N = 4
1
23
345
4567*/
#include<iostream>
using namespace std;


int main(){

       int i=1,a, j=1, N;
       cin>>N;
       while(i<=N){
       a=i;
       while(a<=j)
        {cout<<a;
            a++;}
        cout<<endl;
        j+=2;
        i++;
       }
}