//Recursive version of binary search
#include<iostream>
using namespace std;

int binsearch(int a[], int x, int last, int first);
   
int main()
{
    int a[100],size,numtofind;
    cout<<"Enter size of array: "; 
    cin>>size;
    cout<<"Enter element of array: ";
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the number to search: ";
    cin>>numtofind;

    int location = binsearch(a, numtofind, size, 0);
    if (location == -1)
    {
        cout<<"Number is absent";
    }
    else
    {
        cout<<"Number present at index:"<<location;
    }
    return 0;    
}

int binsearch(int a[], int x, int last, int first)
{
   
   if(first > last)
   {
       return -1;
   }
   int mid = (first + last)/2;
   if(x == a[mid])
   {
       return mid;
   } 
   else if (x > a[mid])
   {
       return binsearch (a, x, last, mid+1);
   }
   else
   {
       return binsearch (a, x, mid-1, first);
   }
}

