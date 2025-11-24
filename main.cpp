#include <iostream>
using namespace std;

string tasks[8];

void add(){

}

void remove(){

}

void listTasks(){

}

int main()
{
    cout << "Please select a action\n";
    cout << "1: Add a task\n";
    cout << "2: Remove a task\n";
    cout << "3: List all tasks\n";

    int operation;
    cin >> operation;


    switch (operation)
    {
    case 1:
    cout << "Added a task";
        break;

    case 2:
    cout << "Removed a task";
        break;

    case 3:
    cout << "List of all tasks";
        break;
    
    default:
        break;
    }
}