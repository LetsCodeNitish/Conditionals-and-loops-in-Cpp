/*Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.*/
#include<iostream>
#include <cmath>
using namespace std;

int main() {
	int basic, allow;
    float hra, da, pf ;
    char grade;
    cin>>basic>>grade;
    hra = 0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    
    if(grade =='A')
    {
        allow=1700;
    }
    else if(grade =='B')
    {
        allow=1500;
    }
    else
    {
        allow=1300;
    }
    int totalSalary=round(basic + hra + da + allow - pf);
	cout<<(totalSalary);
}
