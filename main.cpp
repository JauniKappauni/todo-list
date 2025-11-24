#include <iostream>
using namespace std;

string tasks[8];
int count = 0;

void add()
{
    string input;
    cout << "Please enter the task: ";
    cin >> input;
    tasks[count++] = input;
    cout << "Added a task\n";
}

void remove()
{
    int input;
    cout << "Please enter the index: ";
    cin >> input;
    tasks[input] = "";
    cout << "Removed a task\n";
}

void listTasks()
{
    cout << "List of all tasks:\n";
    for (int i = 0; i < count; i++)
    {
        cout << i << ": " << tasks[i] << endl;
    }
}

int main()
{
    while (true)
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
            add();
            break;

        case 2:
            remove();
            break;

        case 3:
            listTasks();
            break;

        default:
            break;
        }
    }
}