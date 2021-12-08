# include<iostream>
using namespace std;

int min(int a, int b)
{
    if (a<=b)
        return a;
    else
        return b;
}

int search(int a[], int x, int n)
{
    int m2 = 0;
    int m1 = 1;
    int m = m1 + m2;

    while(m <= n)
    {
        m2 = m1;
        m1 = m;
        m = m1 + m2;
    }
    int offset = -1;
    int i=0;
   while (m > 1)
   {
       i = min(offset + m2, n);
       if (a[i] < x)
       {
           m = m1;
           m1 = m2;
           m2 = m - m1;
           offset = i;
       }
       else if (a[i] > x)
       {
           m = m2;
           m1 = m1 - m2;
           m2 = m - m1;
       }
       else
       {
           return i;
       }
   }
   return -1;
}

int main()
{
    int array[100], size , numtofind;
    cout<<"Enter size of array: "; 
        cin>>size;

     cout<<"Enter elements in array\n";
	for (int i=0; i<size; i++)
	{ 
        cin>>array[i];
	}
    cout<<"Enter the number to search";
    cin>>numtofind;

    int loaction = search(array, numtofind, size);
    if(loaction < 0)
    {
        cout<<"Element does not exist in the give array";
    }
    else
    {
        cout<<"Element is exist in the given array at index: "<<loaction;
    }
    return 0;
}




