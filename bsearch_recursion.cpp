// Binary Search -> big-oh(log(n))
// Only for Sorted Araays
// Binary Search using recursion
// function name -> bsearch_recursion()

#include<iostream>

using namespace std;
//Binary search function
int bsearch_recursion(int *, int, int, int);

int main(int argc, char const *argv[])
{
	//Size of array
	int size_of_array;
	cout<<"\nEnter size of array: ";
	cin>>size_of_array;

	//Getting n elements
	int Array[size_of_array];
	cout<<"\nEnter elements of Array:\n";
	for(int i = 0; i<size_of_array; i++)
		cin>>Array[i];

	//Element to be searched
	int element_to_be_searched;
	cout<<"\nEnter element to be searched: ";
	cin>>element_to_be_searched;


	//Binary search function call
	int first = 0;
	int last = size_of_array-1;
	int position = bsearch_recursion(Array, first, last, element_to_be_searched);

	//Printing Location
	if(position == -1)
		cout<<"\nCannot find element.";
	else
		cout<<"\nElement found at "<<++position;
	cout<<"\n";
	
	return 0;
}


//Binary search function body
int bsearch_recursion(int *Array, int first, int last, int element_to_be_searched){
	if(first <= last){
		int mid = (first + last)/2;

		if(*(Array + mid) == element_to_be_searched)
			return mid;

		else if(*(Array + mid) > element_to_be_searched){
			last = mid - 1;
			bsearch_recursion(Array, first, last, element_to_be_searched);
		}

		else if(*(Array + mid) < element_to_be_searched){
			first = mid + 1;
			bsearch_recursion(Array, first, last, element_to_be_searched);
		}
	}
	else
		return -1;
}