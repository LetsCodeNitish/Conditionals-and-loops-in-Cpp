// Given a number N, print sum of all even numbers from 1 to N.
#include<iostream>
using namespace std;
int sumEven(int N){
    int sum=0;
    for(int i=1;i<=N;i++)
    {

          if(i%2==0){
              sum=sum+i;
          }
        
    }
    return sum;
}
int main()
{
    int N;
    cin>>N;
    cout<<sumEven(N);

}