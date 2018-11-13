#include<iostream>
using namespace std;

class linear_search{
	public:
		int arr[20],size;
		void get_data();
		void search_data();	
};
void linear_search :: get_data(){
	int i;
	cout<<"Enter Size : ";
	cin>>size;
	for(i=0;i<size;i++){
		cout<<"Enter Elements : ";
		cin>>arr[i];
	}
}
void linear_search::search_data(){
	int data,count=0,i,flag=0;
	cout<<"Enter element to search : ";
	cin>>data;
	for(i=0;i<size;i++){
		if(arr[i]==data){
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
	linear_search l;
	l.get_data();
	l.search_data();
	return 0;
}
