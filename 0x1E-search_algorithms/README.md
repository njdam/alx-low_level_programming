# C - Search Algorithms

[Search algorithms]() are a fundamental concept in computer science and are used to find specific items, data, or solutions within a dataset or a problem space. There are various types of search algorithms, each with its own characteristics and use cases. Here are some common search algorithms:

1. [Linear Search:]() This is the simplest search algorithm. It goes through each element in a list or array one by one until it finds the desired item or reaches the end. Linear search has a time complexity of `O(n)`, where `n` is the number of items in the dataset.

2. [Binary Search:]() Binary search is used for sorted arrays. It repeatedly divides the search interval in half, eliminating half of the remaining elements at each step until the target item is found or determined to be absent. Binary search has a time complexity of `O(log n)`, which is much faster than linear search for large datasets.

3. [Depth-First Search (DFS):]() DFS is an algorithm for traversing or searching tree or graph structures. It explores as far as possible along each branch before backtracking. It's often used in maze solving, pathfinding, and graph traversal problems.

4. [Breadth-First Search (BFS):]() BFS explores all the vertices at the current level before moving to the next level in a graph. It's commonly used to find the shortest path in an unweighted graph.

5. [A Search\*:]() `A*` is an informed search algorithm that uses heuristics to estimate the cost from the current state to the goal state. It combines elements of both BFS and Dijkstra's algorithm and is often used in pathfinding and route planning.

6. [Dijkstra's Algorithm:]() Dijkstra's algorithm is used to find the shortest path in a weighted graph. It maintains a priority queue of nodes and explores the nodes with the lowest cumulative cost first.

7. [Greedy Search:]() Greedy algorithms make locally optimal choices at each step with the hope of finding a global optimum. However, they may not always produce the best solution.

8. [Hashing:]() Hashing is a technique used to quickly locate a data record in a database or index. It uses a hash function to convert a key into an index, making it useful for fast retrieval of data.

9. [Pattern Search Algorithms:]() These are used to search for a specific pattern within a text or string. Examples include the Knuth-Morris-Pratt (KMP) algorithm and the Boyer-Moore algorithm.

10. [Exhaustive Search:]() This involves systematically examining all possible combinations or solutions in a problem space. It guarantees finding the best solution but may be impractical for large problem spaces.

[Note That:]() The choice of search algorithm depends on the specific problem you are trying to solve, the nature of the data, and the efficiency requirements. Different algorithms have different time and space complexities, so selecting the right one is crucial for optimizing the search process.
