#include<iostream>
#include<cstdio>
using namespace std;
class Stack{
    int top,totalSize;
    int *ptr;
    public:
        Stack(int totalSize){
            this->totalSize=totalSize;
            this->top=-1;
            ptr=new int[totalSize];
        }

        void push(int n){
            if(!isFull()){
            top++;
            ptr[top]=n;
            }
            else{
                cout<<"Stack overFlow"<<endl;
            }
        }
        
        int pop(void){
            if(!isEmpty()){
            int temp=ptr[top];
            top--;
            return temp;
            }
            else{
                cout<<"Stack underFlow"<<endl;
            }
        }
        bool isFull(){
            if(top==totalSize-1){
                return true;
            }
            else{
                return false;
            }
        }

        bool isEmpty(){
            if(top==-1)
                return true;
            else
                return false;
        }

        void stackDisplay(){
            for (int i = 0; i<=top; i++)
            {
                cout<<ptr[i]<<endl;
            }
        }

        int topVal(){
            return ptr[top];
        }

        int bottomVal(){
            return ptr[0];
        }
};
int main(){

    Stack stack1(2);
    stack1.pop();
    stack1.push(5);
    stack1.push(6);
    stack1.push(62);
    stack1.stackDisplay();
    cout<<stack1.topVal()<<endl<<stack1.bottomVal()<<endl;

    return 0;
}