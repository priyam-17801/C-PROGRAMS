// sort array and minus the kth value
#include<iostream>
#include<algorithm>
using namespace std;
void sort(int n,int arr[])
{
 
 sort(arr,arr+n);
 
}
void display(int n,int arr[],int k)
{

			cout<<arr[n-k];
	
}
int main()
{
	int n;
	cin>>n;
	int k;
	cin>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

sort(n,arr);
display(n,arr,k);
	
	return 0;
}
