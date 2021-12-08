#include<iostream>
using namespace std;

class Stack
{
    private:
    int top;
    int arr[5];

    public:
      Stack()
      {
          top=-1;
          for (int i = 0; i < 5; i++)
          {
              arr[i]=0;
          }
          
      }

      bool isEmpty()
      {
          if (top==-1)
             return true;
          else
             return false;   
      }

      bool isFull()
      {
          if (top == 4)
             return true;
          else
             return false;
      }

      void push(int value)
      {
          if(isFull())
            cout<<"Stack Overflow"<<endl;
          else
          {
              top++;
              arr[top]=value;
          }
      }

      int pop()
      {
          if(isEmpty())
          {
              cout<<"Stack Underflow"<<endl;
              return 0;
          }
          else
          {
              int popValue = arr[top];
              arr[top]=0;
              top--;
              return popValue;
          }
      }

      void display()
      {
          cout<<"All values in Stack are "<<endl;
          for(int i=4; i>=0; i--)
          cout<<arr[i]<<" "<<endl;
      }

      void topv()
      {
          cout<<"Current value st the top of the stack is :"<<arr[top];
      }
};

int main()
{
    Stack s1;
    int option, position,value;

    do
    {
        cout<<"What operation do you want to perform? Select option or enter 0 to exit."<<endl;
        cout<<"1. Push()"<<endl;
        cout<<"2. Pop()"<<endl;
        cout<<"3. isEmpty()"<<endl;
        cout<<"4. isFull()"<<endl;
        cout<<"5. display()"<<endl;
        cout<<"6. topv()"<<endl;

        cin>>option;
        switch(option)
        {
            case 1:
              cout<<"Enter an item to push in the stack : ";
              cin>>value;
              s1.push(value);
              break;
            case 2:
               cout<<"Pop Function called - Poped Value: "<<s1.pop() <<endl;
               break;
            case 3:
              if (s1.isEmpty())
                 cout<<"Stack is Empty"<<endl;
              else
                 cout<<"Stack is not Empty"<<endl;
              break;
            case 4:
              if (s1.isFull())
                 cout << "Stack is Full" << endl;
              else
                 cout << "Stack is not Full" << endl;
              break;
            case 5: 
               cout << "Display Function Called - " << endl;
               s1.display();
               break;
            case 6:
              s1.topv();
              cout<<endl;
              break;   
            default:
                cout << "Enter Proper Option number " << endl;              
        }
    }
    while (option !=0);
    return 0;
}