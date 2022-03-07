#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,sum=0;
        cin>>n;
        int arr[n-1];
        for(i=0;i<n-1;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        int son=(n*(n+1))/2;
        cout<<son-sum<<endl;
        
    }

	return 0;
}
