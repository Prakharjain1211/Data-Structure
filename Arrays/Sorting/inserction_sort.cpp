#include <iostream>
using namespace std;
void insertionS(int arr[], int size);

int main()
{
int arr[] = { 55, 62, 1, 39, 100, 19, 43};
int size = sizeof(arr) / sizeof(arr[0]);

cout << "\n Array before sorting: ";
for (int i = 0; i < size; i++)
cout << arr[i] << " ";
insertionS(arr, size);

cout << "\n Array after sorting: ";
for (int i = 0; i < size; i++)
cout << arr[i] << " ";
return 0;
}

void insertionS(int arr[], int size)
{
int i, key, j;
for (i = 1; i < size; i++)
{
    key = arr[i];
    j = i - 1;
    while (j >= 0 && arr[j] > key)
    {
         arr[j + 1] = arr[j];
         j = j - 1;
    }
    arr[j + 1] = key;
}
} 