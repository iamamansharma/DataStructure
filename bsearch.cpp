// Binary Search
// Useed only for SORTED ARRAY
// ascending order
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	cout<<"\nhello\n";
	cout<<sizeof(int);
	//size
	int n;
	cin>>n;
	//array and input
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	//searching element
	int ele;
	cin>>ele;

	//searching
	int beg = 0, end = n-1, mid = (beg+end)/2;
	int flag = -1;
	while(beg<=end){
		if(a[mid] == ele){
			cout<<"\nElement found at "<<++beg<<" position";
			flag = 0;
			break;
		}
		else if(ele < a[mid]){
			end = mid - 1;
			mid = (beg + end)/2;
		}
		else if(ele > a[mid]){
			beg = mid + 1;
			mid = (beg + end)/2;
		}
	}
	// if element not found
	if(flag == -1)
		cout<<"\nNot found.";	
	return 0;
}