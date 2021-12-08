#include<iostream>
using namespace std;
void Cocktail_sort(int arr[], int size);
int main()
{
    int arr[] ={30,50,3,25,6,100};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout<<"\n Array before sorting: ";
    for(int i=0; i <size; i++)
    {
        cout<<arr[i]<<" ";
    }
    Cocktail_sort(arr, size);
    cout<<"\n Array after sorting: ";
    for(int i=0; i<size; i++)
    cout<< arr[i]<<" ";
    return 0;
}

void Cocktail_sort(int arr[], int size)
{
    int flag =1;
    int start =0;
    int end =size-1;

    while (flag)
    {
        flag = 0;
        for(int i = start; i<end; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
             arr[i] = arr[i+1];
             arr[i+1] = temp;
             flag =1;
            }
        }
        if (!flag)
        break;
        flag = 0;
        end --;
        for(int i= end -1; i>= start; i++)
        {
             if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
             arr[i] = arr[i+1];
             arr[i+1] = temp;
             flag =1;
            }
        }
        start++;

    }
}