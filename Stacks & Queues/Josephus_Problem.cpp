#include<iostream>
using namespace std;
int josephus(int n, int k) 
{
    int start = 1;
    for(int i=1; i<=n;i++){
        start = (start + k - 1) % i +1;
    }
    return start;
} 
int main() 
{ 
	int n, k;
    cout<<"Enter Total no. of Persons: ";
  	cin>>n;
    cout<<"Enter Gap: ";
    cin>>k;
    cout<<"The last person alive is: " <<josephus(n, k); 
    return 0; 
}
