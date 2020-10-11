#include <bits/stdc++.h>

using namespace std;

class QueueStack
{
private:
    queue<int> q1;
    queue<int> q2;

public:
    void push(int);
    int pop();
};

int main()
{
    QueueStack *q = new QueueStack();
    int type, t, element;
    cout << "Enter number of test cases" << endl;
    // input number of test cases
    cin >> t;
    while (t--)
    {
        // input type 0:= push operation 1:= pop operation
        cout << "Enter 0 for push operation and 1 for pop operation" << endl;
        cin >> type;
        switch (type)
        {
        case 0:
            cout << "Enter element to push: ";
            cin >> element;
            q->push(element);
            break;
        case 1:
            element = q->pop();
            cout << "Popped: " << element << "\n";
            break;
        default:
            cout << "Wrong choice";
        }
    }
}

void QueueStack ::push(int x)
{
    q1.push(x);
}

int QueueStack ::pop()
{
    if (q1.empty())
        return -1;
    int n = q1.size() - 1, e;
    while (n--)
        q2.push(q1.front()), q1.pop();
    e = q1.front();
    q1.pop();
    while (!q2.empty())
        q1.push(q2.front()), q2.pop();
    return e;
}