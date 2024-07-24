#include <bits/stdc++.h>
using namespace std;
#define MAX 1000 

class CreateStack {
    int top;

public:
    int a[MAX];

    // Creation of stack
    CreateStack() {
        top = -1;
        cout << "stack created" << endl;
    }

    // Push operation
    bool push(int x) {
        
        if (top >= (MAX - 1)) {
            return false;
        } else {
            top++;
            a[top] = x;
            cout << "push ops " << top << endl;
            return true;
        }
    }

    // Peek element
    int peek() {
        cout << "peek ops " << endl;
        if (top < 0) {
            return 0; // Consider using a special value to indicate error
        } else {
            return a[top];
        }
    }

    // Check if empty
    bool isempty() {
        cout << "empty ops " << endl;
        return (top < 0);
    }

    // Pop (remove operation)
    int pop() {
        cout << "pop ops " << endl;
        if (top < 0) {
            return 0; // Consider using a special value to indicate error
        } else {
            top--;
            return a[top];
        }
    }
};

int main() {
    CreateStack s;

    s.push(10);
    s.push(11);
    s.push(12);

    int peeked = s.peek();
    cout << peeked << endl;

    s.pop();
    peeked = s.peek();
    cout << peeked << endl;

    return 0;
}
