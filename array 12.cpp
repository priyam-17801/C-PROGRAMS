#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
 int arr[n-1];
 for(int i=0;i<n;i++)
 {
 	cin>>arr[i];
 	
 }
 int  temp=0;
 for(int i=0,j=n-1;i<j;i++,j--)
 {
 	temp=arr[i];
 	arr[i]=arr[j];
 	arr[j]=temp;
 }
 for(int i=0;i<n;i++)
 	cout<<arr[i]<<" ";
 
	return 0;
}
