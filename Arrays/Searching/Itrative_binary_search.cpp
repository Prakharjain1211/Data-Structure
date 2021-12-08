//Itrative version of binary search
#include<iostream>
using namespace std;
int binary_search(int a[],int array_size)
{
	//binary search
	int first,last,middle,x;
	cout<<"Enter element to search:"; 
    cin>>x;
	first = 0;
	last = array_size-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(a[middle] < x)
	   {
		first = middle + 1;
	   }
	   else if(a[middle] == x)
	    {
		      return middle;
        } 
        else 
		   { 
                last = middle - 1; 
           } 
           middle = (first + last)/2; 
    }
return -1;
}
int main()
{
	int array_size, i, a[100], x;  
	cout<<"Enter size of array: "; 
        cin>>array_size;

     cout<<"Enter elements in array\n";
	for (i=0; i<array_size; i++)
	{ 
        cin>>a[i];
	}
 int y;      
y=binary_search(a,array_size);
if (y==-1)
cout<<"element not present";
else
cout<<"element present at index :"<<y;
return 0;
}


