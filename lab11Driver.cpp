#include "graph.h"

int main(int argc, char *argv[]) {
    std::ifstream inFile;
    inFile.open(argv[1]);
    if(inFile) {
      Graph test(inFile);
      test.print();
      test.whatGraph();
      test.DFS();
      test.CheckIfDag();
      test.TopoSort();
      test.SCC();
      test.printDFSData();
    }
    else {
      std::cout << "File failed to open." << std::endl;
    }
    inFile.close();

}
