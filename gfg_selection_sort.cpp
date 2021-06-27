#include <iostream>
//https://www.geeksforgeeks.org/selection-sort/
using namespace std;

void SelectionSort(int arr[],int n)
{   int temp,min_index=0;
    for(int i=0;i<n-1;i++)
    {   
        min_index=i;
        for(int j=i;j<n;j++)
        {  
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        if(arr[min_index]<arr[i])
        {
            temp=arr[i];
            arr[i]=arr[min_index];
            arr[min_index]=temp;
        }
    }
}




int main(void) {
	int arr[]={8,7,3,1,5,6,3,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
	SelectionSort(arr,n);
	for(int i=0;i<n;i++)
	{
	    cout<<arr[i]<<" ";
	}
	return 0;
}

