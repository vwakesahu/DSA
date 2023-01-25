#include <iostream>
#define MAX 10
using namespace std;

int top, stk[MAX];

int empty(){
    if(top == -1)
        return 1;
    else
        return 0;
    return 0;
}


int full(){
    if(top == MAX - 1)
        return 1;
    else
        return 0;
}

int push(){
    if(full())
        cout << "Stack is FULL!!" << endl;
    else{
    cout << "Enter the element to be added!" << endl;
    cin >> stk[top];
    }

    return 0;
}

int pop(){
    if (empty())
        cout << "Stack is EMPTY!!!" << endl;
    else{
        cout << "Deleted element is: " + stk[top];
        top--;
    }
    return 0;
}

int display(){
    for (int i = 0; i < MAX; i++)
        cout << stk[i];    
    return 0;

}

main(){
    int choice;

    while (5)
    {
        cout << "1. Push\n2. Pop\n3. Display\n4.Exit\n\nEnter Choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        
        default:
            cout << "Invalid Choice!!" << endl;
        }
    }
    

}