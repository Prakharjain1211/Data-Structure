#include<iostream>
using namespace std;

void bubblesort(int a[],int n)
{
 for(int pass= 1; pass<n ; pass++)
 {
     for(int j=0; j<n-pass ; j++)
     {
         if (a[j] >= a[j+1])
         {
             int temp = a[j+1];
             a[j+1] = a[j];
             a[j] = temp;
         }
     }
 }
}
/*void printArray (int a[], int n)
{
    cout<<"[";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]";
    cout<<endl;
}*/
int main()
{
    int n;
    cout<<"Enter the value of array size: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of array ";
    for(int i=0; i< n ; i++)
    {
        cin>>a[i];
    }
    bubblesort (a, n);
    //printArray(a, n);
     cout<<"Array after sorting:[";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]";
    return 0;
}
