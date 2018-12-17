#include <iostream>


using namespace std;

int binarySearch(const int list[], int start, int last, int searchItem);

void sortNumber(int list[], int length);


int main() 
{
	int number, input, length, result = 0;
	int *list;

	cout << "\n\t Enter the size of the array: ";
	cin >> length;

	if (length <= 0) 
	{
		cout << "\n\n\t You must enter a value greater than 0. Please try again.";
		cin >> length;
	}

	list = new int[length];
	cout << "\n\t Enter array values" << endl;

	for (int i = 0; i < length; i++)
	{
		cout << "\n\t Enter value " << i + 1 << ": ";
		cin >> input;
		list[i] = input;
	}

	sortNumber(list, length);

	cout << "\n\t Enter a number to search for: ";
	cin >> number;

	result = binarySearch(list, 0, length, number);

	if(result == -1)	
		cout << "\n\t Searched value not found" << endl << endl;

	else
		cout << "\n\t Searched value is found at index: " << result << endl << endl;

	delete[] list;
	
	return 0;
}



int binarySearch(const int list[], int start, int last, int searchItem)
{
	int mid = 0;
	mid = (start + last) / 2;

	if (list[mid] == searchItem)
	{
		return mid;
	}

	else if(start <= last)
	{
		if(searchItem < list[mid]){
			return binarySearch(list, start, mid - 1, searchItem);
		}

		else
			return binarySearch(list, mid + 1, last, searchItem);
	}
	
	else
		return -1;
}


void sortNumber(int list[], int length)
{
	int temp, j;
	for (int i = 0; i < length; i++)
	{
		j = i;

		while (j > 0 && list[j] < list[j - 1])
		{
			temp = list[j];
			list[j] = list[j - 1];
			list[j - 1] = temp;
			j--;
		}
	}
}
