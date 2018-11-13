#include<iostream>
using namespace std;

class stack{
	struct node{
		int data;
		struct node *next;
	};
	public:
		struct node *head,*ptr,*ptr1;
		stack(){
			head=NULL;
		}
		void push(int);
		int top();
		void pop();
};
void stack::push(int num){
	struct node *f1=new node;
	f1->data=num;
	f1->next=head;
	head=f1;
}
int stack::top(){
	return ptr->data;
}
void stack::pop(){
	ptr1=head;
	head=head->next;
	delete ptr1;
	ptr=head;
}
int main(){
	int choice;
	stack s;
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
