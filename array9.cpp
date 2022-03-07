#include<iostream>
using namespace std;
void union(int arr[],int arr1[],int n,int m)
{
	int i=0;
int j=0;
while(i<n && j<m)
{
	if(arr[i]<arr1[j])
	{
		cout<<arr[i];
		i++;	
	}
	else if(arr[i]>arr1[j])
	{
		cout<<arr[j];
		j++;
	}
	else
	{
	cout<<arr1[j];
	i++;
	j++;
}
}

while(i<n)
{
	cout<<arr[i]<<" ";
}
while(j<m)
{
	cout<<arr[j]<<" ";
}
}
int main()
{
	int n,m;
	cin>>n>>m;
	int arr[n];
	int arr1[m];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int j=0;j<m;j++)
	{
		cin>>arr1[j];
	}
	union(arr,arr1,n,m);

	return 0;
}
