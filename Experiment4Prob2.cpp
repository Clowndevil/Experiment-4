#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main ()
{
	int size, arr[50], i, j, temp;
	cout << " Enter the size of array: " << endl;
	cin >> size;
	cout << " Enter the array elements: " << endl;
	for (i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	cout << " Sorting array using selection sort " << endl;
	
	for (i=0; i<size; i++)
	{
		for(j=i+1; j<size; i++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	cout << " The array after sorting: " << endl;
	for(i=0; i<size; i++)
	{
		cout << arr[i] << " " << endl;
	}
	_getch();
	return 0;
}
