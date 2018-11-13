#include<iostream>
using namespace std;

class array{
	public:
		int arr[10],size;
		void get_data();
		void insert_element(int,int);
		void delete_element(int);
		void location_element(int);
		void display_array();
};
void array :: get_data(){
	int i;
	cout<<"Enter Size : ";
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"Enter Elements : ";
		cin>>arr[i];
	}
}
void array::insert_element(int insert,int pos){
	int i;
	for(i=size-1;i>=pos-1;i--){
		arr[i+1]=arr[i];
	}
	arr[pos-1]=insert;
	size++;
}
void array :: delete_element(int del){
	int i,j;
	for(i=0;i<size;i++){
		if(arr[i]==del){
			for(j=i+1;j<size;j++){
				arr[j]=arr[j+1];
			}
			size=size-1;
		}
	}
}
void array :: display_array(){
	int i;
	for(i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void array::location_element(int search){
	int i,count=0,flag=0;
	for(i=0;i<size;i++){
		if(arr[i]==search){
			flag=1;
			break;
		}
		else{
			flag=0;
			count=count+1;
		}
	}
	if(flag==1){
		cout<<"Position of element : "<<count<<endl;
	}
	else{
		cout<<"Element not found "<<endl;
	}
}
int main(){
	array a;
	int size,choice,insert,pos,del,search;
	a.get_data();
	cout<<"Enter 1 for inserting new element, 2 for delete an element, 3 for location of element, 4 for displaying array : ";
	cin>>choice;
	while(choice!=5){
		switch(choice){
			case 1:
				{
					cout<<"Enter new element to insert : ";
					cin>>insert;
					cout<<"Enter position to insert element : ";
					cin>>pos;
					a.insert_element(insert,pos);
					break;
				}
			case 2:
				{
					cout<<"Enter element to delete : ";
					cin>>del;
					a.delete_element(del);
					break;
				}
			case 3:
				{
					cout<<"Enter a element to search : ";
					cin>>search;
					a.location_element(search);
					break;
				}
			case 4:
				{
					a.display_array();
					break;
				}
			default:
				cout<<"Invalid Choice"<<endl;
		}
		cout<<"Enter your choice : ";
		cin>>choice;
	}
}
