/*
*   @file description: this file contains a simple calculator program.
*/
#include <iostream>
using namespace std;

int main()
{
    double Number_1;
    double Number_2;
    double result;
    char operation;

    cout << "Hello , this is a calculator which performs basic arithmetic operations on two entered numbers" << endl;
    //get first number from the user
    cout<< "Enter the first number , please" << endl;
    cin>>Number_1;
    cout<< "The first number has been entered successfully" <<endl;
    //get second number from the user
    cout<< "Enter the second number , please" << endl;
    cin>>Number_2;
    cout<< "The second number has been entered successfully" <<endl;
    //get the arithmetic operation from the user
    cout<< "Enter the arithmetic operaion {+ or - or * or /}"<<endl;
    cin>>operation;

    switch (operation)
    {
    case '+':
        result= Number_1+Number_2;
        cout<<"The result of "<<Number_1<<"+"<<Number_2<<"="<<result;
        break;
    case '-':
        result= Number_1-Number_2;
        cout<<"The result of "<<Number_1<<"-"<<Number_2<<"="<<result;
        break;
    case '*':
        result= Number_1*Number_2;
        cout<<"The result of "<<Number_1<<"*"<<Number_2<<"="<<result;
        break;
    case '/':
        if(Number_2==0)
        {
            cout<<"invalid division!!"<<endl;
        }
        else
        {
            result= Number_1/Number_2;
            cout<<"The result of "<<Number_1<<"/"<<Number_2<<"="<<result;
        }
        break;
    default:
        cout<<"invalid operation!! "<<endl;
    }

    return 0;
}


