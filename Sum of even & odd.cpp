/*Write a program to input an integer N and print the sum of all its even digits and sum of all its odd digits separately.
Digits mean numbers, not the places! That is, if the given integer is "13245", even digits are 2 & 4 and odd digits are 1, 3 & 5.*/
#include<iostream>
using namespace std;
int main() {
	int i, N, sumeven=0, sumodd=0;
    cin>>N;
    while(N>0){
    int rem=N%10;
        
    if(rem%2==0){
    sumeven=sumeven+rem;
    }
    else
    {
    sumodd=sumodd+rem;
    }
    N=N/10;
    }
    cout<<sumeven<<" "<<sumodd;
    
	
}
