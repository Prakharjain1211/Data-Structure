#include<iostream>
using namespace std;

void countingSort(int a[], int n, int r)
{
    int freqArr[r] = {0};
    int opArr[n] = {0};

    for (int i = 0; i < n; i++)
    {
        freqArr[a[i]] = freqArr[a[i]] + 1;
    }

    for (int i = 1; i < r; i++)
    {
        freqArr[i] = freqArr[i] + freqArr[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        opArr[freqArr[a[i]] - 1] = a[i];

        freqArr[a[i]] = freqArr[a[i]] - 1;
    }
    cout << " Sorted array is: [" ;
    for (int i = 0; i < n; i++)
    {
        cout << opArr[i] << " ";
    }
    cout << "]";
    cout << endl;
}
int main()
{
    int size;
    int range;
    cout << "Enter the range of array: ";
    cin >> range;
    cout<<"Enter size of array";
    cin>>size;
    int a[size];
    cout<<"Enter elements of array";
    for(int i=0; i<size; i++)
    {
        cin>>a[i];
    }
    countingSort(a, size, range + 1);
    return 0;
}