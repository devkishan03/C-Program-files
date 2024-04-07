#include <iostream>
using namespace std;

int binarySearch(int ar[], int key, int n)
{

	int low = 0;
	int high = n;
	while (low <= high)
	{
		int mid = (low + high) / 2;
	
		if (ar[mid] == key)
		{
		//	 cout << "the key will found at:" << mid << " index"
			return mid;
		}
		else if (ar[mid] < key)
		{
			low = mid + 1;
		}
		else if(ar[mid] > key)
		{
			high = mid - 1;
		}
	   
	}
return -1;
}

int main()
{
	int n, key;
	cout << "enter range of array:";
	cin >> n;
	int Array[n];
	for (int i = 0; i < n; i++)
	{
		cin >> Array[i];
	}
	cout << "enter key value want to find:";
	cin >> key;

	cout << "key found at :" << binarySearch(Array, key,n);

	return 0;
}
