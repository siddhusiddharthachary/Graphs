#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<iostream>
#include<unordered_map>
using namespace std;
class graph{
  public:
    unordered_map<int,vector<int>> adj;

    void addEdge(int u,int v,int direction){
      adj[u].push_back(v);
      if(direction == 0){
        adj[v].push_back(u);
      }
    }

  void printAdjList(){
    for(auto i:adj){
      cout<<i.first<<"->";
      for(auto j:i.second){
        cout<<j<<",";
      }
      cout<<endl;
    }
  }
};

int main(){
  int n,m,direction;
  cout<<"Enter the number of nodes: "<<endl;
  cin>>n;
  cout<<"Enter the number of edges: "<<endl;
  cin>>m;

  cout<<"Enter direction"<<endl;
  cin>>direction;

  graph g;

  for(int i=0;i<m;i++){
    int u,v;
    cin>>u>>v;
    cout<<endl;
    g.addEdge(u,v,direction);
  }
  g.printAdjList();

  return 0;
}
