#include<iostream>
using namespace std;

void selection_sort(int arr[],int size)
{
int min,i,j;

for(i=0;i<size-1;i++)
{
   min=i;

  for(j=i+1;j<size;j++)
  {
      if(arr[j]<arr[min])
        {
           min=j;
        }
  }
  if(min!=i)
  {
      int temp=arr[min];
      arr[min]=arr[i];
      arr[i]=temp;
  }
}  
}

int main()
{
    int size;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size],i;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<endl<<"Array before sorting"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    selection_sort(arr,size);

    cout<<"Array after sorting"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    
}