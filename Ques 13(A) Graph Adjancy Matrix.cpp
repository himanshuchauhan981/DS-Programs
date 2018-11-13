#include<iostream>
using namespace std;

int main(){
	int nodes,arr[10][10];
	cout<<"Enter Nodes : ";
	cin>>nodes;
	for(int i=0;i<nodes;i++){
		for(int j=0;j<nodes;j++){
			arr[i][j]=0;
		}
	}
	int ori,dest;
	for(int i=0;i<nodes;i++){
		for(int j=0;j<nodes;j++){
			cout<<"Enter origin : ";
			cin>>ori;
			cout<<"Enter Destination : ";
			cin>>dest;
			if(ori==-1 && dest==-1){
				break;
			}
			arr[ori-1][dest-1]=1;
		}
		if(ori==-1 && dest==-1){
			break;
		}
	}
	for(int i=0;i<nodes;i++){
		for(int j=0;j<nodes;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
}
