#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
	int i,j;
	for(i=1;i<size;i++){
		j=i-1;
		int max=arr[i];
		while(j>=0 && max<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=max;
	}
}
void insertSorted(int arr[],int size,int num){
	arr[size]=num;
	size=size+1;
	insertionSort(arr,size);
}
void sortShow(int arr[],int size){
	for(int i=0;i<=size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[10],size,new_num;
	cout<<"Enter size of array : ";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"Enter elements : ";
		cin>>arr[i];
	}
	insertionSort(arr,size);
	cout<<"Enter a new element : ";
	cin>>new_num;
	insertSorted(arr,size,new_num);
	sortShow(arr,size);
	return 0;
}
