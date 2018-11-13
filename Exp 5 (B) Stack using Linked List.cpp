#include<iostream>
using namespace std;
class stack{
	struct Node{
		int data;
		struct Node *next;
	};
	struct Node *front,*rear;
	public:
	stack(){
		front = NULL;
		rear=NULL;
	}
	void push(int x);
	void pop();
	void show();
	int top();
};
int stack::top(){
	return rear->data;
}
void stack::show(){
	struct Node *temp=front;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}
void stack::push(int x){
	struct Node *f1 = new Node;
	f1->data = x;
	if(front== NULL){
		front=rear=f1;
		rear->next=NULL;
	}
	else{
		rear->next=f1;
		rear=f1;
		rear->next=NULL;
	}
}
void stack::pop(){
	if(front==NULL){
		cout<<"Stack is Empty";
	}
	else{
		struct Node *temp=front;
		struct Node *ptr;
		while(temp->next!=rear){
			temp=temp->next;
		}
		ptr=temp->next;
		delete ptr;
		temp->next=NULL;
		rear=temp;
	}
}

int main(){
	stack s;
	int choice;
	cout<<"Enter 1 for push, 2 for pop, 3 for display top element and 4 for exit : ";
	cin>>choice;
	while(choice!=4){
		switch(choice){
			case 1:
				int num;
				cout<<"Enter element : ";
				cin>>num;
				s.push(num);
				break;
			case 2:
				s.pop();
				break;
			case 3:
				int a=s.top();
				cout<<"Top Element : "<<a<<endl;
				break;
		}
		cout<<"Enter Choice : ";
		cin>>choice;
	}
}
