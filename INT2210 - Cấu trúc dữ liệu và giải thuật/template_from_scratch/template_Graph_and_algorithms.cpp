// Graph Implementation Template
// Instructions: Implement the missing function definitions for each class.
// Each function has comments indicating what it should do.

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <stdexcept>

//-------------------- GRAPH BASE CLASS --------------------
class Graph
{
protected:
    int numVertices;
    bool directed;

public:
    // Constructor
    Graph(int vertices, bool isDirected = false) : numVertices(vertices), directed(isDirected) {}

    // Virtual destructor for proper inheritance
    virtual ~Graph() {}

    // Check if graph is directed
    bool isDirected() const
    {
        return directed;
    }

    // Get number of vertices
    int getNumVertices() const
    {
        return numVertices;
    }

    // Pure virtual functions - to be implemented by derived classes
    virtual void addEdge(int source, int destination) = 0;
    virtual bool hasEdge(int source, int destination) const = 0;
    virtual std::vector<int> getNeighbors(int vertex) const = 0;
    virtual void printGraph() const = 0;
};

//-------------------- ADJACENCY MATRIX IMPLEMENTATION --------------------
class AdjacencyMatrixGraph : public Graph
{
private:
    std::vector<std::vector<bool>> matrix;

public:
    // Constructor: Initialize matrix with given size
    AdjacencyMatrixGraph(int vertices, bool isDirected = false) : Graph(vertices, isDirected)
    {
        // TODO: Initialize the adjacency matrix
        // Hint: Create a numVertices x numVertices matrix initialized with false
    }

    // Add an edge from source to destination
    void addEdge(int source, int destination) override
    {
        // TODO: Add an edge from source to destination
        // If the graph is undirected, also add an edge from destination to source
        // Validate that source and destination are within bounds
    }

    // Check if there is an edge from source to destination
    bool hasEdge(int source, int destination) const override
    {
        // TODO: Check if there is an edge from source to destination
        // Return false if source or destination is out of bounds
        return false; // Placeholder
    }

    // Get all neighbors (vertices connected by an edge) of a vertex
    std::vector<int> getNeighbors(int vertex) const override
    {
        // TODO: Return a vector containing all vertices that are adjacent to the given vertex
        // Return empty vector if vertex is out of bounds
        return {}; // Placeholder
    }

    // Print the adjacency matrix
    void printGraph() const override
    {
        // TODO: Print the adjacency matrix in a readable format
        // Example:
        //   0 1 2 3
        // 0 0 1 0 0
        // 1 1 0 1 0
        // 2 0 1 0 1
        // 3 0 0 1 0
    }
};

//-------------------- ADJACENCY LIST IMPLEMENTATION --------------------
class AdjacencyListGraph : public Graph
{
private:
    std::vector<std::vector<int>> adjacencyList;

public:
    // Constructor: Initialize adjacency list with given size
    AdjacencyListGraph(int vertices, bool isDirected = false) : Graph(vertices, isDirected)
    {
        // TODO: Initialize the adjacency list
        // Hint: Create a vector of vectors with size numVertices
    }

    // Add an edge from source to destination
    void addEdge(int source, int destination) override
    {
        // TODO: Add an edge from source to destination
        // If the graph is undirected, also add an edge from destination to source
        // Validate that source and destination are within bounds
    }

    // Check if there is an edge from source to destination
    bool hasEdge(int source, int destination) const override
    {
        // TODO: Check if there is an edge from source to destination
        // This requires searching through the adjacency list
        // Return false if source or destination is out of bounds
        return false; // Placeholder
    }

    // Get all neighbors (vertices connected by an edge) of a vertex
    std::vector<int> getNeighbors(int vertex) const override
    {
        // TODO: Return a vector containing all vertices that are adjacent to the given vertex
        // For adjacency list, this is simply the list at index 'vertex'
        // Return empty vector if vertex is out of bounds
        return {}; // Placeholder
    }

    // Print the adjacency list
    void printGraph() const override
    {
        // TODO: Print the adjacency list in a readable format
        // Example:
        // 0 -> 1
        // 1 -> 0 -> 2
        // 2 -> 1 -> 3
        // 3 -> 2
    }
};

//-------------------- GRAPH TRAVERSAL ALGORITHMS --------------------
class GraphAlgorithms
{
public:
    // Depth-First Search (DFS) implementation
    static void DFS(const Graph &graph, int startVertex, std::vector<bool> &visited)
    {
        // TODO: Implement DFS
        // 1. Mark startVertex as visited
        // 2. For each unvisited neighbor of startVertex, recursively call DFS

        // Hint: Use the following structure
        /*
        visited[startVertex] = true;
        std::cout << "Visited vertex: " << startVertex << std::endl;

        std::vector<int> neighbors = graph.getNeighbors(startVertex);
        for (int neighbor : neighbors) {
            if (!visited[neighbor]) {
                DFS(graph, neighbor, visited);
            }
        }
        */
    }

    // Iterative DFS using a stack
    static void DFSIterative(const Graph &graph, int startVertex)
    {
        // TODO: Implement iterative DFS using a stack
        // 1. Create a stack and push startVertex
        // 2. Create a visited array initialized to false
        // 3. While stack is not empty:
        //    a. Pop a vertex from stack
        //    b. If not visited, mark as visited and process it
        //    c. Push all unvisited neighbors to stack
    }

    // Breadth-First Search (BFS) implementation
    static void BFS(const Graph &graph, int startVertex)
    {
        // TODO: Implement BFS
        // 1. Create a queue and enqueue startVertex
        // 2. Create a visited array initialized to false
        // 3. Mark startVertex as visited
        // 4. While queue is not empty:
        //    a. Dequeue a vertex
        //    b. Process it
        //    c. Enqueue all unvisited neighbors and mark them as visited
    }

    // Find connected components in an undirected graph
    static int findConnectedComponents(const Graph &graph)
    {
        // TODO: Implement connected components finder
        // 1. Initialize all vertices as unvisited
        // 2. For each unvisited vertex, run DFS and count it as a new component
        // 3. Return the total count of components

        return 0; // Placeholder
    }

    // Check if a graph is bipartite
    static bool isBipartite(const Graph &graph)
    {
        // TODO: Implement bipartite check using BFS
        // 1. Initialize all vertices with no color (-1)
        // 2. Start BFS from any vertex, coloring it with 0
        // 3. For each neighbor, color it with the opposite color (1-color)
        // 4. If any adjacent vertices have the same color, return false
        // 5. If all vertices can be colored without conflicts, return true

        return false; // Placeholder
    }

    // Find shortest path between two vertices (unweighted graph)
    static std::vector<int> findShortestPath(const Graph &graph, int startVertex, int endVertex)
    {
        // TODO: Implement shortest path finder using BFS
        // 1. Run BFS from startVertex
        // 2. Keep track of parent/previous vertex for each visited vertex
        // 3. Once endVertex is reached, reconstruct the path by following parents backwards
        // 4. Return the path (or empty vector if no path exists)

        return {}; // Placeholder
    }

    // Topological sort (for directed acyclic graphs)
    static std::vector<int> topologicalSort(const Graph &graph)
    {
        // TODO: Implement topological sort using DFS
        // 1. Run DFS on each unvisited vertex
        // 2. After exploring all neighbors of a vertex, add it to the front of the result list
        // 3. Return the result list (in reverse order of completion time)

        return {}; // Placeholder
    }
    // Helper function for first DFS pass in Kosaraju's algorithm
    static void kosarajuFirstDFS(const Graph &graph, int vertex, std::vector<bool> &visited,
                                 std::stack<int> &finishOrder)
    {
        // TODO: Implement first DFS pass of Kosaraju's algorithm
        // 1. Mark current vertex as visited
        // 2. Recursively visit all unvisited neighbors
        // 3. After processing all neighbors, push current vertex to finishOrder stack
        // (This creates a stack with vertices ordered by decreasing finish time)
    }

    // Helper function for second DFS pass in Kosaraju's algorithm
    static void kosarajuSecondDFS(const Graph &graph, int vertex, std::vector<bool> &visited,
                                  std::vector<int> &component)
    {
        // TODO: Implement second DFS pass of Kosaraju's algorithm
        // 1. Mark current vertex as visited
        // 2. Add current vertex to the current component
        // 3. Recursively visit all unvisited neighbors
        // (This identifies vertices in the current strongly connected component)
    }

    // Find strongly connected components using Kosaraju's algorithm
    static std::vector<std::vector<int>> findStronglyConnectedComponents(const Graph &graph)
    {
        // TODO: Implement Kosaraju's algorithm for finding SCCs
        // 1. Check if graph is directed (algorithm only works for directed graphs)
        // 2. First DFS pass:
        //    a. For each unvisited vertex, run kosarajuFirstDFS
        //    b. This fills the stack with vertices in order of decreasing finish times
        // 3. Create a reversed graph by reversing all edges
        // 4. Second DFS pass:
        //    a. Process vertices in order from the stack (decreasing finish time)
        //    b. For each unvisited vertex, run kosarajuSecondDFS to find a component
        //    c. Add each component to the result
        // 5. Return the list of strongly connected components

        return {}; // Placeholder
    }
};

//-------------------- TESTING FUNCTION --------------------
void testGraphImplementations()
{
    // Test Adjacency Matrix (Undirected)
    std::cout << "======= Testing Undirected Adjacency Matrix Graph =======\n";
    AdjacencyMatrixGraph matrixGraph(5);

    // Add edges
    matrixGraph.addEdge(0, 1);
    matrixGraph.addEdge(0, 4);
    matrixGraph.addEdge(1, 2);
    matrixGraph.addEdge(1, 3);
    matrixGraph.addEdge(1, 4);
    matrixGraph.addEdge(2, 3);
    matrixGraph.addEdge(3, 4);

    // Print the graph
    std::cout << "Adjacency Matrix:\n";
    matrixGraph.printGraph();

    // Test edge existence
    std::cout << "Edge (0,1): " << (matrixGraph.hasEdge(0, 1) ? "exists" : "doesn't exist") << std::endl;
    std::cout << "Edge (2,4): " << (matrixGraph.hasEdge(2, 4) ? "exists" : "doesn't exist") << std::endl;

    // Test neighbors
    std::cout << "Neighbors of vertex 1: ";
    std::vector<int> neighbors = matrixGraph.getNeighbors(1);
    for (int neighbor : neighbors)
    {
        std::cout << neighbor << " ";
    }
    std::cout << std::endl;

    // Test Adjacency List (Directed)
    std::cout << "\n======= Testing Directed Adjacency List Graph =======\n";
    AdjacencyListGraph listGraph(5, true);

    // Add edges
    listGraph.addEdge(0, 1);
    listGraph.addEdge(0, 4);
    listGraph.addEdge(1, 2);
    listGraph.addEdge(1, 3);
    listGraph.addEdge(1, 4);
    listGraph.addEdge(2, 3);
    listGraph.addEdge(3, 4);

    // Print the graph
    std::cout << "Adjacency List:\n";
    listGraph.printGraph();

    // Test edge existence
    std::cout << "Edge (0,1): " << (listGraph.hasEdge(0, 1) ? "exists" : "doesn't exist") << std::endl;
    std::cout << "Edge (4,0): " << (listGraph.hasEdge(4, 0) ? "exists" : "doesn't exist") << std::endl;

    // Test graph traversal algorithms
    std::cout << "\n======= Testing Graph Algorithms =======\n";

    // DFS
    std::cout << "DFS starting from vertex 0:\n";
    std::vector<bool> visited(5, false);
    GraphAlgorithms::DFS(listGraph, 0, visited);

    // BFS
    std::cout << "\nBFS starting from vertex 0:\n";
    GraphAlgorithms::BFS(listGraph, 0);

    // Connected Components (using undirected graph)
    std::cout << "\nConnected Components in undirected graph: "
              << GraphAlgorithms::findConnectedComponents(matrixGraph) << std::endl;

    // Bipartite Check
    std::cout << "Is the undirected graph bipartite? "
              << (GraphAlgorithms::isBipartite(matrixGraph) ? "Yes" : "No") << std::endl;

    // Shortest Path
    std::cout << "\nShortest path from vertex 0 to 3:\n";
    std::vector<int> path = GraphAlgorithms::findShortestPath(matrixGraph, 0, 3);
    for (int vertex : path)
    {
        std::cout << vertex << " ";
    }
    std::cout << std::endl;

    // Topological Sort (using directed graph)
    std::cout << "\nTopological Sort of the directed graph:\n";
    std::vector<int> topoOrder = GraphAlgorithms::topologicalSort(listGraph);
    for (int vertex : topoOrder)
    {
        std::cout << vertex << " ";
    }
    std::cout << std::endl;
    // Test Strongly Connected Components (using directed graph)
    std::cout << "\n======= Testing Strongly Connected Components =======\n";
    AdjacencyListGraph sccGraph(8, true);

    // Add edges to create SCCs as shown in the PDF example
    sccGraph.addEdge(0, 1);
    sccGraph.addEdge(1, 2);
    sccGraph.addEdge(2, 0);
    sccGraph.addEdge(2, 3);
    sccGraph.addEdge(3, 4);
    sccGraph.addEdge(4, 5);
    sccGraph.addEdge(5, 3);
    sccGraph.addEdge(6, 5);
    sccGraph.addEdge(6, 7);
    sccGraph.addEdge(7, 6);

    std::cout << "Graph for SCC test:\n";
    sccGraph.printGraph();

    std::vector<std::vector<int>> sccs = GraphAlgorithms::findStronglyConnectedComponents(sccGraph);

    std::cout << "Strongly Connected Components:\n";
    for (size_t i = 0; i < sccs.size(); i++)
    {
        std::cout << "Component " << i + 1 << ": ";
        for (int vertex : sccs[i])
        {
            std::cout << vertex << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    testGraphImplementations();
    return 0;
}
