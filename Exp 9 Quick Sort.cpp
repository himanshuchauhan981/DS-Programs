#include<iostream>
using namespace std;
int part(int arr[],int low,int h){
	int pivot = arr[h];
	int i=low-1,j;
	for(j=low;j<=h-1;j++){
		if(arr[j]<=pivot){
			i++;
			int temp = arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	int temp = arr[i+1];
	arr[i+1]=arr[h];
	arr[h]=temp;
	return (i+1);
}
void quickSort(int arr[], int l, int h){
	if(l<h){
		int p=part(arr,l,h);
		quickSort(arr,l,p-1);
		quickSort(arr,p+1,h);
	}
}
void showArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int arr[10],size;
	cout<<"Enter size of array : ";
	cin>>size;
	for(int i=0;i<size;i++){
		cout<<"Enter elements : ";
		cin>>arr[i];
	}
	quickSort(arr,0,size-1);
	showArray(arr,size);
	return 0;
}
