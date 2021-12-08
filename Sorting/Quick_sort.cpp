#include <iostream>
using namespace std;
void printArray(int a[], int r);

void quickSort(int a[], int first, int last)
{
    int i, j, pivot;
    if (first < last && first != last)
    {
        i = first+1;
        j = last;
        pivot = first;
    }
    else
    {
        return;
    }
    while (i < j)
    {

        while (a[i] <= a[pivot] && i < last)
        {
            i++;
        }
        while (a[j] > a[pivot])
        {
            j--;
        }
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    if(i<j){
    swap(a[pivot], a[j]);
    }

    quickSort(a, first, j - 1);
    quickSort(a, j + 1, last);
}

void printArray(int a[], int r)
{
    cout << "[";
    for (int i = 0; i < r; i++)
    {
        cout << a[i] << " ";
    }
    cout << "] " << endl;
}
int main()
{
    //int a[] = {1,3,8,7};
    //int a[] = {1,3,8,7,8};
    //int a[]= {80,50,70,40,90,10,30,20,60,100};
    int a[] = {4, 6, 2, 1, 1, 3, 8};
    int size;
    int range;
    size = sizeof(a) / sizeof(a[0]);
    printArray(a, size);
    quickSort(a, 0, size - 1);
    printArray(a, size);
    return 0;
}