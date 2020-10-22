//stackArray.cpp
//a program that shows Arrays as class data members


#include<iostream>
using namespace std;

//class definition

class Stack
{
private:
  static const int MAX= 10; //define 10 elements in the Stack
  int st[MAX]; //stack st an array of integers
  int top; //which is the top element of teh Stack
public:
  Stack()
  {
    top = -1;    //constructor
  }
  void push(int var)    //put a number on the top of the stack
  {
    st[++top] = var;
  }
  int pop()    //take a number off the top of the Stack
  {
    return st[top--];
  }
};

//main code

int main()
{
  Stack s1;

  s1.push(11);
  s1.push(22);
  cout << "1: " << s1.pop() << endl;  //22
  cout << "2: " << s1.pop() << endl;  //11
  s1.push(33);  
  s1.push(44);
  s1.push(55);
  s1.push(66);
  cout << "3: " << s1.pop() << endl;  //66
  cout << "4: " << s1.pop() << endl;  //55
  cout << "5: " << s1.pop() << endl;  //44
  cout << "6: " << s1.pop() << endl;  //33
  return 0;
}

    return 0;
}
