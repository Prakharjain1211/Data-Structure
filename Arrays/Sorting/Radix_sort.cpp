#include<iostream>
using namespace std;

int getmax(int arr[],int size)
{
    int max= arr[0];
    for(int i=1;i<size;i++)
    {
         if (arr[i] > max)
         max = arr[i];
    }     
    return max;
}

void count_sort(int arr[],int size,int div)
{
    int output[size],i,count[10]={0};
   
    for( i=0; i<size; i++)
         count[(arr[i]/div)%10]++;

    for(i =1;i<10;i++)
         count [i]= count[i]+count[i-1];

    for(i=size-1;i>=0;i--)
    {
         output[count[ (arr[i]/div)%10 ] - 1] = arr[i];
         count[(arr[i]/div)%10]--;
    }
    for(i=0;i<size;i++)
         arr[i]=output[i];
}

void radix_sort(int arr[],int size)
{
    int m= getmax(arr,size);

    for (int div=1; m/div>0;div*=10)
        count_sort( arr,size,div);
    
}

void printarr(int arr[],int size)
{
    cout<<endl <<"Array after sorting : ";
    for(int i=0;i<size;i++)
    {
         cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int size,i;
    cout<<"Enter size of array : ";
    cin>>size;
    int arr[size];
    for( i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array before sorting : ";
    for(i=0;i<size;i++)
    {
         cout<<arr[i]<<" ";
    }
    
    radix_sort(arr,size);

    printarr(arr,size);
    
}