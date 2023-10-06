/*
*   @file description : This file contains a program for number guessing game
*/
#include <iostream>
#include<ctime>
using namespace std;

int main()
{
    cout << "Hello to our Number Guessing Game" << endl;
    cout << "Guess the number from 1 to 100, please" << endl;
    srand(time(0));
    int number = rand()%100 +1;
    int guessed_number=-1;
    while(number!= guessed_number)
    {
        //get a number from the user
        cin>>guessed_number;
        //check whether the guess is too high or too low until the user guesses the correct number
        if(number>guessed_number)
        {
            cout<<"the entered number is too low, try again "<<endl;
        }
        else if(number>guessed_number)
        {
            cout<<"the entered number is too high, try again"<<endl;
        }
        else
        {
            cout<<"Congratulations!!! you have entered the correct number"<<endl;
            break;
        }
    }
    return 0;
}
