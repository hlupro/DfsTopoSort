# lab11

#Using this program

When using this input type ./lab11 "filename.txt" with the name of your txt file.

#How to format your text file

The very first line will be true or false. Make sure true is spelled correctly with all lowercase
or else it will be mistaken as false. This line lets the constructor know if the graph is directed or not
The next line will be a line of integers seperateed by one space and serve as the vertices of the graph.
The remaining lines form a pattern and come in pairs, lines 1 and lines 2. The first line will be a singular
integer that corresponds to a vertex in the graph, the second line will be another series of integers one space
apart that serves as the adjacency list for the vertex above it. This two line pairing adds edges to the graph.

Example input

true
1 2 3 4 5
1
2 4
2
2
4
5
5
2 3

#Questions

#Summarize your approach to the problem and how your code addresses the abstractions needed.

My code follows a similar structure to last weeks lab with BFS, albeit with a few changes.
I decided to include all the map objects as private members of the graph instead of creating them as needed inside functions.
I did this mainly to avoid functions who had up to five parameters when I was doing a DFS and it made it easier to keep that
data acquired in a DFS for later use.
In order to successfully read in input how I wanted, I learned how to use stringstreams to read in integers from a string gathered
by using the getline function in the string library.
When determining how to do a Topological sort on a graph, i decided to create a copy of the map object which held the finish time
and create two loops that would find the longest time, print it out and then delete it from the copy so it wouldn't be printed again.

#What is the theoretical time complexity of your algorithms (best and worst case), in terms of the
#size of the graph? Be sure to vary the parameters enough to use the observations to answer the
#next questions!

For DPS, best and worst case will be O(V+E) where V and E are the number of vertices and edges in the graph. This is because DPSVisit is called in DPS V times and recursively called to explore every edge.

TopologicalSort when the finishing times are inserted into a LinkedList also takes O(V+E) at best and worst case since it relies on DFS.

#How could the code be improved in terms of usability, efficiency, and robustness?

My topological sort can be improved by implementing the use of a LinkedList in order to be more efficient when sorting finished times. I feel that a lot of memory and space was wasted on my PrintDFSVisit function which was the same as DFS but it included a print out of the vertices it visited. I used it for printing the strongly connected components and made a separate function because I wanted to avoid unnecessary print functions when I didn't want them, such as doing a DFS during SCC(). A booleon variable could have been used as a flag to trigger print statements instead.
