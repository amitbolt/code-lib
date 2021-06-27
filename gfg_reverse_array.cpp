#include <iostream>
using namespace std;

//https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/



void ReverseArray(int arr[],int n)
{   int rarr[n];
    for(int i=0;i<n;i++)
    {
        rarr[i]=arr[n-i-1];
    }
    for(int i=0;i<n;i++)
    {
        cout<<rarr[i]<<" ";
    }
}

void ReverseArray2(int arr[],int n,int start,int end) //Recursrion
{
    if(start>=end)
    return;
    
    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    ReverseArray2(arr,n,start+1,end-1);
    
}

int main() {
    int arr[]={8,7,3,1,5,6,3,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    int start=0,end=n-1;
    ReverseArray(arr,n);
    ReverseArray2(arr,n,start,end);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
	return 0;
}
