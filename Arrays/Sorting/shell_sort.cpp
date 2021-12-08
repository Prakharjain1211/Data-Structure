#include <iostream>

using namespace std;

// ? function showing method of shell sort

void shell_sort(int arr_sort[], int num)
{
    int gap_btw, temp_holder, i, j;

    for (gap_btw = num / 2; gap_btw > 0; gap_btw /= 2)
    {
        for (i = gap_btw; i < num; i++)
        {
            temp_holder = arr_sort[i];
            j = 0;

            for (j = i; j >= gap_btw && arr_sort[j - gap_btw] > temp_holder; j -= gap_btw)
            {
                arr_sort[j] = arr_sort[j - gap_btw];
            }
            arr_sort[j] = temp_holder;
        }
    }
}

int main()
{
    int num_ele, i;

    cout << "Enter the number of element in array :" << endl;
    cin >> num_ele;

    int arr_ins[num_ele];

    // ? i/p of array by user

    cout << "Enter the elements in the array :" << endl;

    for (i = 0; i < num_ele; i++)
    {
        cin >> arr_ins[i];
    }

    cout << "The array is created :" << endl;

    // ? o/p of array

    cout << "\nThe as you entered :"
         << endl;

    cout << "[ ";
    for (i = 0; i < num_ele; i++)
    {
        cout << arr_ins[i] << " ";
    }
    cout << "]" << endl;

    // ? function calling

    shell_sort(arr_ins, num_ele);

    cout << "\nAfter sorting the array is :" << endl;

    // ? o/p after sorting array

    cout << "[ ";
    for (i = 0; i < num_ele; i++)
    {
        cout << arr_ins[i] << " ";
    }
    cout << "]" << endl;

    // ? credits

    cout << "\nThank you!!!" << endl;
    cout << "This program is made by Sudhanwa Kaveeshwar (57)" << endl;
    return 0;
}
