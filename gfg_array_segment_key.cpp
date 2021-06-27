#include <iostream>
using namespace std;
//https://www.geeksforgeeks.org/check-if-a-key-is-present-in-every-segment-of-size-k-in-an-array/
bool CheckSegmentKey(int arr[],int x,int k,int n)
{   int j=-1;
    bool f = 0;
    for(int i=0;i<n;i++)
    {   
        if(i>j)
        {j=j+x;
        f = 0;}
        if(arr[i]==k)
        {
            i=j;
            f=1;
        }
        if(i==j&&f==0)
        {
            return f;
        }
        
    }
    return f;
}


int main() {
    int arr[]={8,7,3,1,5,6,3,2,0};
    int x=3,k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<n<<" ";
    cout<<CheckSegmentKey(arr,x,k,n)<<" ";
	return 0;
}
