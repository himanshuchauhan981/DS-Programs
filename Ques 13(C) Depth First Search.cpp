#include<iostream>
using namespace std;
int cost[10][10],i,j,k,n,a[10],top,v,b[10],c[10];
int main()
{
    int m;
    cout <<"Enter no of vertices:";
    cin >> n;
    cout <<"Enter no of edges:";
    cin >> m;
    cout <<"\nEDGES \n";
    for(k=1; k<=m; k++)
    {
        cin >>i>>j;
        cost[i][j]=1;
    }
    cout <<"Enter initial vertex to traverse from:";
    cin >>v;
    cout <<"DFS ORDER OF bED VERTICES:";
    cout << v <<" ";
    c[v]=1;
    k=1;
    while(k<n)
    {
        for(j=n; j>=1; j--)
            if(cost[v][j]!=0 && c[j]!=1 && b[j]!=1)
            {
                b[j]=1;
                a[top]=j;
                top++;
            }
        v=a[--top];
        cout<<v << " ";
        k++;
        b[v]=0;
        c[v]=1;
    }

    return 0;
}
