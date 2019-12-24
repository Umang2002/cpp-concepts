//Program to Insert an Element at the proper place in a sorted Array.
//Note: Enter a sorted array
#include<iostream>
using namespace std;
int main()
{
	int arr[20],i,size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	cout<<"Enter "<<size<<" elements: "<<endl;
	for (i=0;i<size;i++)
	{
		cout<<"Enter value for arr["<<i<<"]: ";
		cin>>arr[i];
	}
	cout<<"\nThe array is: "<<endl;
	for (i=0;i<size;i++)
		cout<<arr[i]<<" ";
	int elm;
	cout<<"\nEnter the element to be inserted in the sorted array: ";
	cin>>elm;
	size=size+1;
	for (i=size-2;i>=0;i--)
	{
		if (arr[i]>elm)
			arr[i+1]=arr[i];
		else
			break;
	}
	arr[i+1]=elm;
	cout<<"\nThe updated array is: "<<endl;
	for (i=0;i<size;i++)
		cout<<arr[i]<<" ";
	return 0;
}
