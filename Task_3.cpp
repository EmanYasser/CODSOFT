/*
*   @file description: this file contains a program for TIC-TAC-TOE GAME
*/
#include <iostream>
#include<string.h>
using namespace std;
void display_screen();
void player1_turn();
void player2_turn();
void check_status();
char num[3][3]= {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
string player_1;
string player_2;
int number=0;
bool flag=true;
int number_of_turns;

int main()
{
    int start=0;

    cout<<"Press enter to start the game!!"<<endl;
    start=getchar();
    while(start==10)
    {
        cout << "Hello to  TIC-TAC-TOE GAME" << endl;
        cout<<"Enter First player's name:\n";
        getline(cin,player_1);
        cout<<"Enter second player's name:\n";
        getline(cin,player_2);
        cout<<player_1<<" -->> x"<<endl<<player_2<<" -->> o"<<endl;
        display_screen();
        flag=true;
        number_of_turns=0;
        while (flag)
        {
            if(number_of_turns==9)
            {
                cout<<"   Draw   "<<endl;
                break;
            }
            player1_turn();
            number_of_turns++;
            check_status();
            if (flag==false)
            {
                break;
            }
            if(number_of_turns==9)
            {
                cout<<"   Draw   !!!"<<endl;
                break;
            }
            cout<<"the game is ongoing"<<endl;
            player2_turn();
            number_of_turns++;
            check_status();
            if (flag==true)
            {
                cout<<"the game is ongoing"<<endl;
            }
        }


        cout<<"to play again press enter , to exit press 0"<<endl;
        fflush(stdin);
        start=getchar();
        char n='1';
        for(int row=0; row<3; row++)
        {
            for(int column=0; column<3; column++)
            {
                num[row][column]=n;
                n++;
            }
        }
    }
    return 0;
}
//a function to displays the game's screen
void display_screen()
{
    cout<<"       |       |       \n";
    cout<<"   "<<num[0][0]<<"   |"<<"   "<<num[0][1]<<"   |"<<"   "<<num[0][2]<<"   \n";
    cout<<"_______|_______|_______\n";
    cout<<"       |       |       \n";
    cout<<"   "<<num[1][0]<<"   |"<<"   "<<num[1][1]<<"   |"<<"   "<<num[1][2]<<"   \n";
    cout<<"_______|_______|_______\n";
    cout<<"       |       |       \n";
    cout<<"   "<<num[2][0]<<"   |"<<"   "<<num[2][1]<<"   |"<<"   "<<num[2][2]<<"   \n";
}
//a function that takes input number from the first player and put 'x' in this position
void player1_turn()
{
    label_1:
    cout<<player_1<<"'s turn!!Enter a number please"<<endl;
    cin>>number;
    if((number==1)&&(num[0][0]!='x')&&(num[0][0]!='o'))
    {
        num[0][0]='x';
        display_screen();
    }
    else if((number==2)&&(num[0][1]!='x')&&(num[0][1]!='o'))
    {
        num[0][1]='x';
        display_screen();
    }
    else if((number==3)&&(num[0][2]!='x')&&(num[0][2]!='o'))
    {
        num[0][2]='x';
        display_screen();
    }
    else if((number==4)&&(num[1][0]!='x')&&(num[1][0]!='o'))
    {
        num[1][0]='x';
        display_screen();
    }
    else if((number==5)&&(num[1][1]!='x')&&(num[1][1]!='o'))
    {
        num[1][1]='x';
        display_screen();
    }
    else if((number==6)&&(num[1][2]!='x')&&(num[1][2]!='o'))
    {
        num[1][2]='x';
        display_screen();
    }
    else if((number==7)&&(num[2][0]!='x')&&(num[2][0]!='o'))
    {
        num[2][0]='x';
        display_screen();
    }
    else if((number==8)&&(num[2][1]!='x')&&(num[2][1]!='o'))
    {
        num[2][1]='x';
        display_screen();
    }
    else if((number==9)&&(num[2][2]!='x')&&(num[2][2]!='o'))
    {
        num[2][2]='x';
        display_screen();
    }
    else
    {
        cout<<"invalid number!!"<<endl;
        goto label_1;
    }
}
//a function that takes input number from the first player and put 'o' in this position
void player2_turn()
{
    label_1:
    cout<<player_2<<"'s turn!!Enter a number please"<<endl;
    cin>>number;
    if((number==1)&&(num[0][0]!='x')&&(num[0][0]!='o'))
    {
        num[0][0]='o';
        display_screen();
    }
    else if((number==2)&&(num[0][1]!='x')&&(num[0][1]!='o'))
    {
        num[0][1]='o';
        display_screen();
    }
    else if((number==3)&&(num[0][2]!='x')&&(num[0][2]!='o'))
    {
        num[0][2]='o';
        display_screen();
    }
    else if((number==4)&&(num[1][0]!='x')&&(num[1][0]!='o'))
    {
        num[1][0]='o';
        display_screen();
    }
    else if((number==5)&&(num[1][1]!='x')&&(num[1][1]!='o'))
    {
        num[1][1]='o';
        display_screen();
    }
    else if((number==6)&&(num[1][2]!='x')&&(num[1][2]!='o'))
    {
        num[1][2]='o';
        display_screen();
    }
    else if((number==7)&&(num[2][0]!='x')&&(num[2][0]!='o'))
    {
        num[2][0]='o';
        display_screen();
    }
    else if((number==8)&&(num[2][1]!='x')&&(num[2][1]!='o'))
    {
        num[2][1]='o';
        display_screen();
    }
    else if((number==9)&&(num[2][2]!='x')&&(num[2][2]!='o'))
    {
        num[2][2]='o';
        display_screen();
    }
    else
    {
        cout<<"invalid number!!"<<endl;
        goto label_1;
    }
}
//a function that checks if a player won
void check_status()
{
    if((num[0][0]==num[0][1])&&(num[0][0]==num[0][2]))
    {
        if(num[0][0]=='x')
        {
            cout<<"congratulations!!! "<<player_1<<" is the winner!!!"<<endl;
        }
        else
        {
            cout<<"congratulations!!! "<<player_2<<" is the winner!!!"<<endl;
        }
        flag=false;
    }
    else if((num[1][0]==num[1][1])&&(num[1][0]==num[1][2]))
    {
        if(num[1][0]=='x')
        {
            cout<<"congratulations!!! "<<player_1<<" is the winner!!!"<<endl;
        }
        else
        {
            cout<<"congratulations!!! "<<player_2<<" is the winner!!!"<<endl;
        }
        flag=false;
    }
    else if((num[2][0]==num[2][1])&&(num[2][0]==num[2][2]))
    {
        if(num[2][0]=='x')
        {
            cout<<"congratulations!!! "<<player_1<<" is the winner!!!"<<endl;
        }
        else
        {
            cout<<"congratulations!!! "<<player_2<<" is the winner!!!"<<endl;
        }
        flag=false;
    }
    else if((num[0][0]==num[1][0])&&(num[0][0]==num[2][0]))
    {
        if(num[0][0]=='x')
        {
            cout<<"congratulations!!! "<<player_1<<" is the winner!!!"<<endl;
        }
        else
        {
            cout<<"congratulations!!! "<<player_2<<" is the winner!!!"<<endl;
        }
        flag=false;
    }
    else if((num[0][1]==num[1][1])&&(num[0][1]==num[2][1]))
    {
        if(num[0][1]=='x')
        {
            cout<<"congratulations!!! "<<player_1<<" is the winner!!!"<<endl;
        }
        else
        {
            cout<<"congratulations!!! "<<player_2<<" is the winner!!!"<<endl;
        }
        flag=false;
    }
    else if((num[0][2]==num[1][2])&&(num[0][2]==num[2][2]))
    {
        if(num[0][2]=='x')
        {
            cout<<"congratulations!!! "<<player_1<<" is the winner!!!"<<endl;
        }
        else
        {
            cout<<"congratulations!!! "<<player_2<<" is the winner!!!"<<endl;
        }
        flag=false;
    }
    else if((num[0][0]==num[1][1])&&(num[0][0]==num[2][2]))
    {
        if(num[0][0]=='x')
        {
            cout<<"congratulations!!! "<<player_1<<" is the winner!!!"<<endl;
        }
        else
        {
            cout<<"congratulations!!! "<<player_2<<" is the winner!!!"<<endl;
        }
        flag=false;
    }
    else if((num[0][2]==num[1][1])&&(num[1][1]==num[2][0]))
    {
        if(num[0][2]=='x')
        {
            cout<<"congratulations!!! "<<player_1<<" is the winner!!!"<<endl;
        }
        else
        {
            cout<<"congratulations!!! "<<player_2<<" is the winner!!!"<<endl;
        }
        flag=false;
    }
}
