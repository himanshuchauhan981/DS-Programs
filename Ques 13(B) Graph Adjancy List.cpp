#include<iostream>
using namespace std;
struct AdjListNode{
	int dest;
	struct AdjListNode *next;
};
struct AdjList{
	struct AdjListNode *head;
};

class Graph{
	int v;
	struct AdjList *array;
	public:
	Graph(int v){
		this->v = v;
		array = new AdjList [v];
		for(int i=0;i<v;i++){
			array[i].head=NULL;
		}
	}
	struct AdjListNode *newAdjListNode(int dest){
		struct AdjListNode *f1 = new AdjListNode;
		f1->dest = dest;
		f1->next= NULL;
		return f1;
	}
	struct AdjList *addEdge(int src,int dest){
		AdjListNode *f2 = newAdjListNode(dest);
		f2->next = array[src].head;
		array[src].head=f2;
		f2 = newAdjListNode(src);
		f2->next = array[dest].head;
		array[dest].head = f2;
	} 
	void showGraph(){
		struct AdjListNode *ptr = array[v].head;
		while(ptr){
			cout<<ptr->dest;
			ptr=ptr->next;
		}
		cout<<endl;
	}
};
int main(){
	Graph gh(5);
	gh.addEdge(0,1);
	gh.addEdge(0,4);
	gh.addEdge(1,2);
	gh.addEdge(1,3);
	gh.addEdge(1,4);
	gh.addEdge(2,3);
	gh.addEdge(3,4);
	gh.showGraph();
	return 0;
}
