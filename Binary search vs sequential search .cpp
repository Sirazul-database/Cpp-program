
#include<iostream>

using namespace std;

// A function implementing Binary search on a sorted array.
int BinarySearch(int a[], int start, int end, int item, int iter)

{
	int i, mid;
	// Every time this function called, counted as a iteration of binary search.
	cout<<"\niteration "<<iter+1;
	iter++;
	// Assigning middle of the array.
	mid = start + (end-start+1)/2;
	// If value is less than value at start index more than end index then item is not in the array.
	if(item > a[end] || item < a[start] || mid == end)
	{
		cout<<"\nNot found";
		return iter;
	}

	// Return if item found at mid index.

	else if(item == a[mid])
	{
		cout<<"\n item found at "<<mid<<" index.";
		return iter;
	}
	// Return if item found at start index.
	else if(item == a[start])
	{
		cout<<"\n item found at "<<start<<" index.";
		return iter;
	}
	// Return if item found at end index.
	else if(item == a[end])
	{
		cout<<"\n item found at "<<end<<" index.";
		return iter;
	}
	// According to the item value choose the partion to proceed further.
	else if(item > a[mid])
		BinarySearch(a, mid, 19, item, iter);
	else
		BinarySearch(a, start, mid, item, iter);
}

// A function implementing Binary search on a sorted array.
int LinearSearch(int a[], int n, int item)
{
	int i;
	for(i = 0; i < n; i++)
	{
		cout<<"\niteration "<<i+1;
		// Directly comparing the item with the array element sequentially.
		if(a[i] == item)
		{
			cout<<"\n item found at "<<i<<" index.";
			// Returning the number of iteration taken place.
			return i+1;
		}
	}
	cout<<"\nNot found";
}

int main()

{
	int n, i, Biter, Liter, a[20]={1, 9, 16, 24, 28, 35, 39, 43, 49, 53, 55, 66, 67, 73, 75, 77, 83, 89, 96, 97};
	cout<<"\nEnter the element to be searched: ";
	cin>>n;
	cout<<"\n\n\t\t\tBinary Search :";
	cout<<"\n\t\t\t*************";

	Biter = BinarySearch(a, 0, 19, n, 0);

	cout<<"\n\n\t\t\tLinear Search :";
	cout<<"\n\t\t\t*************";
	Liter = LinearSearch(a, 20, n);

	// Comparing the number of iteration and printing the better approach for this search.
	if(Liter > Biter)
		cout<<"\n\nBinary search is better for this search.";
	else if(Liter < Biter)
		cout<<"\n\nLinear search is better for this search.";
	else
		cout<<"\n\nBoth are equally efficient for this search.";

	return 0;

}

