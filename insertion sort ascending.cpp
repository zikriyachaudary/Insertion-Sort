#include<iostream>
using namespace std;
int main()
{
	int size,a,loc,temp, min;
	cout << "Enter the Size of an Array ==>  ";
	cin >> size;
	int arr[size];
	cout << "Enter "<< size <<" values :  ";
	for(int j=0; j<size; j++)
	{
		cin >> arr[j];
	}
	for(int i=1; i<size; i++)
	{
		for(int j=i; j>=0; j--)
		{
			if(arr[j-1]>arr[j] && arr[j+1]<arr[j])
			{
				temp = arr[j];
				loc = j;
			}
		}
		for(int k=loc; k>=0; k--)
		{
			arr[k] = arr[k-1];
		}
		arr[i-1] = temp;
	}
	cout << endl <<" _________" << endl;
	for(int z=0; z<size; z++)
	{
		cout << arr[z] << endl;
	}
	return 0;
}
