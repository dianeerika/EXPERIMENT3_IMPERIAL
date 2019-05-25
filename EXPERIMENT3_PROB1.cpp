#include <iostream>
using namespace std;

int main()
{
    int arr[10], n, i, max, min;
    float sum, average;
    for(i = 0; i < 10; i++)
    {
       cout << "Enter Number " << i + 1 << " : ";
       cin >> arr[i];
    }
    for(i = 1;i < 10; i++)
    {
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    cout << "Largest element = " << arr[0] << endl;
 for(i = 1;i < 10; i++)
    {
       if(arr[0] > arr[i])
           arr[0] = arr[i];
    }
    cout << "Smallest element = " << arr[0] << endl;
   for (i=0; i<10; i++)
	{
	
		sum+=arr[i];
	}
    cout << "Sum = " << sum << endl;
    for(int i=0; i<10; i++) 
{
	average+=arr[i];
}
average/=10;
	cout << "Average = " << average << endl;
    return 0;
}
