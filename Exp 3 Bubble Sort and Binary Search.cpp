#include<iostream>
using namespace std;

class array{
	public:
		int arr[10],size;
		void get_data();
		void bubble_sort();
		void binary_search(int);
		void show();
};
void array::get_data(){
	int i;
	cout<<"Enter size : ";
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"Enter Elements : ";
		cin>>arr[i];
	}
}
void array::show(){
	int i;
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
void array::bubble_sort(){
	for(int i=0;i<size;i++){
		for(int j=i+1;j<size;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void array::binary_search(int search){
	int lb,ub,mid;
	lb=0;
	ub=size-1;
	while(lb<=ub){
		mid=(lb+ub)/2;
		if(search == arr[mid]){
			cout<<"Element is found at position : "<<mid<<endl;
			break;
		}
		else if(search<arr[mid]){
			ub=mid;
		}
		else if(search>arr[mid]){
			lb=mid;
		}
	}
}
int main(){
	array a;
	int search;
	a.get_data();
	a.bubble_sort();
	cout<<"Enter a number to search : ";
	cin>>search;
	a.binary_search(search);
	a.show();
}
