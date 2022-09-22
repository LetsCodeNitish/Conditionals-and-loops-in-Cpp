/*Write a program to find x to the power n (i.e. x^n). Take x and n from the user. You need to print the answer.
Note : For this question, you can assume that 0 raised to the power of 0 is 1*/
#include<iostream>
using namespace std;

int main() {
	int i, j;
    cin>>i>>j;
    int mul=1;
    while(j>0)
       {
        mul=mul*i;
        j--;
        }
    cout<<mul;
}
//2codes


#include<iostream>
using namespace std;

int main() 
{
    int x, n; 
    int mul=1, i=1;
    cin >> x>> n;
    while(i<=n)
    {
        mul = mul*x;
        i = i+1;
    }
    cout<<mul<<endl;
    
    
}