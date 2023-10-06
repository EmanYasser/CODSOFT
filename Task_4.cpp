/*
*   @file description:this program is TO-DO-LIST
*/
#include <iostream>
#include<string.h>
#define LENGTH 20
using namespace std;
string my_list[20];
string completed_list[20];
int completed_task_number=0;
int task_number=0;
 // a functions that adds a task
void add_task(string task,int &task_number)
{
    if(task_number==19)
    {
        cout<<"to-do-list is full!!"<<endl;
    }
    else
    {
        my_list[task_number]=task;
        task_number++;
        cout<<"task is added successfully"<<endl;
    }

}
 // a functions that deletes a task from the list
void delete_task_1(int &number_of_removed_task)
{
    if(task_number==0)
    {
        cout<<"to-do-list is empty!!"<<endl;
    }
    else if(task_number<=number_of_removed_task)
    {
        cout<<"invalid!!"<<endl;
    }
    else
    {
        for(int i=number_of_removed_task; i<LENGTH-1; i++)
        {
            my_list[i]=my_list[i+1];
        }
        task_number--;
    }

}
 // a functions that deletes a task from the completed list
void delete_task_2(int &number_of_removed_task)
{
    if(completed_task_number==0)
    {
        cout<<"there isn't a completed task!!"<<endl;
    }
    else if(completed_task_number<number_of_removed_task)
    {
        cout<<"invalid!!"<<endl;
    }
    else
    {
        for(int i=number_of_removed_task; i<LENGTH-1; i++)
        {
            completed_list[i]=completed_list[i+1];
        }
        completed_task_number--;
    }

}
 // a functions that marks a task as completed
void add_completed_task(int &number_of_completed_task)
{
    if(completed_task_number==19)
    {
        cout<<"completed-list is full!!"<<endl;
    }
    else if(task_number==0)
    {
        cout<<"to-do-list is empty!!"<<endl;
    }
    else if(number_of_completed_task<=task_number)
    {
        completed_list[completed_task_number]=my_list[number_of_completed_task];
        delete_task_1(number_of_completed_task);
        completed_task_number++;
    }
    else
    {
        cout<<"invalid"<<endl;
    }
}
 // a functions that displays all tasks
void display_list()
{
    cout<<"completed tasks"<<endl;
    if(completed_task_number==0)
    {
        cout<<"---empty---"<<endl;
    }
    for(int i=0 ; i<completed_task_number ; i++)
    {
        cout<<i+1<<"-"<<completed_list[i]<<endl;
    }

    cout<<"pending"<<endl;
    if(task_number==0)
    {
        cout<<"---empty---"<<endl;
    }
    for(int i=0 ; i<task_number ; i++)
    {
        cout<<i+1<<"-"<<my_list[i]<<endl;
    }

}
 // a functions that displays pending tasks
void display_incompleted_tasks()
{
    for(int i=0 ; i<task_number ; i++)
    {
        cout<<i+1<<"-"<<my_list[i]<<endl;
    }
}
 // a functions that displays completed tasks
void display_completed_tasks()
{
    for(int i=0 ; i<completed_task_number ; i++)
    {
        cout<<i+1<<"-"<<completed_list[i]<<endl;
    }
}

int main()
{
    int operation;
    int number_of_removed_task;
    int number_of_completed_task;
    int flag=1;
    string task;
    cout << "Hello to your to-do-list" << endl;
    cout<< "the list is empty, please enter your tasks" <<endl;
    while(flag)
    {
        cout<<"choose the operation, please"<<endl<<endl;
        cout<<"Enter 1 to add a task"<<endl;
        cout<<"Enter 2 to remove a task from to-do-list(pending tasks)"<<endl;
        cout<<"Enter 3 to remove a task from to-do-list(completed tasks)"<<endl;
        cout<<"Enter 4 to set a task as a completed task"<<endl;
        cout<<"Enter 5 to display all tasks"<<endl;
        cin>>operation;
        if(operation==1)
        {
            cout<<"Enter the task,please"<<endl;
            fflush(stdin);
            getline(cin,task);
            add_task(task,task_number);

        }
        else if(operation==2)
        {
            display_incompleted_tasks();
            cout<<"choose the number of task to remove it"<<endl;
            cin>>number_of_removed_task;
            number_of_removed_task--;
            delete_task_1(number_of_removed_task);

        }
        else if(operation==3)
        {
            display_completed_tasks();
            cout<<"choose the number of task to remove it"<<endl;
            cin>>number_of_removed_task;
            number_of_removed_task--;
            delete_task_2(number_of_removed_task);

        }
        else if(operation==4)
        {
            display_incompleted_tasks();
            cout<<"Enter the number of completed task,please"<<endl;
            cin>>number_of_completed_task;
            number_of_completed_task--;
            add_completed_task(number_of_completed_task);

        }
        else if(operation==5)
        {
            display_list();

        }
        else
        {
            cout<<"invalid operation"<<endl;

        }
        label:
        cout<<"to exit press 0 , to continue press 1"<<endl;
        cin>>flag;
        if (!(flag==0 ||flag==1))
        {
            cout<<"invalid!!"<<endl;
            goto label;
        }


    }




return 0;
}



