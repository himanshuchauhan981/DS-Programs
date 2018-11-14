#include<iostream>
using namespace std;
int main()
{
    int m;
    int cost[10][10],i,j,k,n,qu[10],front,rare,v,a[10],b[10];
    cout <<"Enter total no of vertices:";
    cin >> n;
    cout <<"Enter total no of edges:";
    cin >> m;
    for(k=1; k<=m; k++){
        cout<<"Enter Edges : ";
		cin >>i>>j;
        cost[i][j]=1;
    }
    cout <<"Enter a vertex : ";
    cin >>v;
    cout <<"Visitied vertices : ";
    cout <<v<<" ";
    b[v]=1;
    k=1;
    while(k<n)
    {
        for(j=1; j<=n; j++)
            if(cost[v][j]!=0 && b[j]!=1 && a[j]!=1)
            {
                a[j]=1;
                qu[rare++]=j;
            }
        v=qu[front++];
        cout<<v <<" ";
        k++;
        a[v]=0;
        b[v]=1;
    }

    return 0;
}
