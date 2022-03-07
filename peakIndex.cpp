#include<iostream>
using namespace std;
int  peakindex(int arr[],int n)
{
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	while(s<=e)
	{
		if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
		return mid;
		else if(arr[mid]<arr[mid+1])
		mid++;
		else if(arr[mid]>arr[mid+1])
		mid--;
		
		
	}

}
int main()
{
	int arr[4]={0,10,5,2};
	cout<<"peak index ="<<peakindex(arr,4)<<endl;
	
	return 0;
}
