#include<iostream>
using namespace std;
class Matrix
{
	int A[2][2];
	public:
     void getdata()
	{
		for(int i=0; i<=2;i++)
		{
			for(int j=0; j<=2;j++)
			cin>>A[i][j];
		}
	}
	void showdata()
	{
		for(int i=0; i<=2;i++)
		{
			for(int j=0; j<=2;j++)
			cout<<A[i][j]<<" ";
		}
	}
	
};

int main()
{
	Matrix obj1,obj2;
	cout<<"enter elements of obj1"<<endl;
	obj1.getdata();
	cout<<"enter elements of obj2"<<endl;
	obj2.getdata();
	obj1.showdata();
	obj2.showdata();
	return 0;
}
