#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number of numbers : ";
	cin>>n;
	
	int arr[n];
	cout<<"Enter Array : "<<endl;
	int i=0;
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	
	int key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    
    cout<<"Sorted Array is : ";
    for(int i=0;i<n;i++)
    	cout<<arr[i]<<" ";
    return 0;
}
 

