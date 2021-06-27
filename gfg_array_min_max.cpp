#include <iostream>
using namespace std;

//https://www.geeksforgeeks.org/program-find-minimum-maximum-element-array/

int CheckMaxKey(int ,int);
int CheckMinKey(int ,int);

int CheckMaxKey(int arr[],int n)
{   int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        max=arr[i];
    }
    return max;
}

int CheckMinKey(int arr[],int n)
{   int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        min=arr[i];
    }
    return min;
}

int main() {
    int arr[]={8,7,3,1,5,6,3,2,0};
    int x=3,k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<" ";
    cout<<CheckMaxKey(arr,n)<<" ";
    cout<<CheckMinKey(arr,n)<<" ";
	return 0;
}
