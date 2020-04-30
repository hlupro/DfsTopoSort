
#ifndef GRAPH_H
#define GRAPH_H

#include <iostream>
#include <map>
#include <vector>
#include <queue>
#include <fstream>
#include <string>
#include <sstream>

class Graph{
private:
  enum color_t {white, grey, black, nil};
  std::map<int, std::vector<int>> vertices;
  std::map<int, int> predecesor; //map for parent
  std::map<int, int> discover; //map for discover times
  std::map<int, int> finish; //map for finish times
  std::map<int, color_t> color; //map for color
  bool direct; //determines if graph is directed or not
  bool cycle = false; //determines if there exists a cycle in the graph


public:

//  enum color_t {white, grey, black};
  Graph(bool d);
  Graph(std::ifstream &inFile);
  Graph(const Graph&);
  void addVertex(int x); // add a vertex to the graph
  void addEdge(int x, int y); // add an undirected edge to the graph
  void print(); // prints the adjacency list of each vertex, to show the structure
  void printBfs(int); // prints the vertices discovered by a BFS, starting at a given vertex
  void whatGraph();
  void DFS();
  void DFSVisit(int u);
  void CheckIfDag();
  void TopoSort();
  void SCC();
  void printDFSData();
  void PrintDFSVisit(int u);
};

#endif
