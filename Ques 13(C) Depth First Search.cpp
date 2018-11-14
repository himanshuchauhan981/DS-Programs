#include<iostream>
using namespace std;
int main(){
    int m;
    int cost[10][10],b[10],c[10],i,j,k,n,a[10],top,v;
    cout <<"Enter total no of vertices : ";
    cin >>n;
    cout <<"Enter total no of edges : ";
    cin >>m;
    for(k=1; k<=m; k++){
        cout<<"Enter a edge : ";
		cin >>i>>j;
        cost[i][j]=1;
    }
    cout <<"Enter a vertex : ";
    cin >>v;
    cout <<"Order of vertices are : ";
    cout << v <<" ";
    c[v]=1;
    k=1;
    while(k<n){
        for(j=n; j>=1; j--)
            if(cost[v][j]!=0 && c[j]!=1 && b[j]!=1)
            {
                b[j]=1;
                a[top]=j;
                top++;
            }
        v=a[--top];
        cout<<v <<" ";
        k++;
        b[v]=0;
        c[v]=1;
    }
    return 0;
}
