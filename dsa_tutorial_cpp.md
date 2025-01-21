# Data Structures and Algorithms (DSA) Tutorial in C++

## Introduction
Data Structures and Algorithms (DSA) are fundamental concepts in computer science that help in organizing and processing data efficiently. This tutorial will cover various data structures and algorithms using C++.

## Table of Contents
1. [Arrays](#arrays)
2. [Linked Lists](#linked-lists)
3. [Stacks](#stacks)
4. [Queues](#queues)
5. [Trees](#trees)
6. [Graphs](#graphs)
7. [Sorting Algorithms](#sorting-algorithms)
8. [Searching Algorithms](#searching-algorithms)

## Arrays
Arrays are a collection of elements identified by index or key. They are used to store multiple values in a single variable.

### Example
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
```

## Linked Lists
A linked list is a linear data structure where elements are stored in nodes, and each node points to the next node.

### Example
```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

void printList(Node* n) {
    while (n != nullptr) {
        cout << n->data << " ";
        n = n->next;
    }
}

int main() {
    Node* head = new Node();
    head->data = 1;
    head->next = new Node();
    head->next->data = 2;
    head->next->next = nullptr;

    printList(head);
    return 0;
}
```

## Stacks
A stack is a linear data structure that follows the Last In First Out (LIFO) principle.

### Example
```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Top element: " << s.top() << endl; // Output: 3
    s.pop();
    cout << "Top element after pop: " << s.top() << endl; // Output: 2
    return 0;
}
```

## Queues
A queue is a linear data structure that follows the First In First Out (FIFO) principle.

### Example
```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Front element: " << q.front() << endl; // Output: 1
    q.pop();
    cout << "Front element after pop: " << q.front() << endl; // Output: 2
    return 0;
}
```

## Trees
A tree is a hierarchical data structure consisting of nodes, with a single node as the root.

### Example
```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
};

void inorder(Node* root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = new Node();
    root->data = 1;
    root->left = new Node();
    root->left->data = 2;
    root->right = new Node();
    root->right->data = 3;

    inorder(root); // Output: 2 1 3
    return 0;
}
```

## Graphs
Graphs are a collection of nodes connected by edges. They can be directed or undirected.

### Example
```cpp
#include <iostream>
#include <vector>
using namespace std;

class Graph {
public:
    int V; // Number of vertices
    vector<vector<int>> adj; // Adjacency list

    Graph(int V) {
        this->V = V;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    return 0;
}
```

## Sorting Algorithms
Sorting algorithms are used to arrange elements in a specific order.

### Example: Bubble Sort
```cpp
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
```

## Searching Algorithms
Searching algorithms are used to find an element in a data structure.

### Example: Linear Search
```cpp
#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Target found
        }
    }
    return -1; // Target not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 3;
    int result = linearSearch(arr, 5, target);
    if (result != -1) {
        cout << "Element found at index: " << result << endl; // Output: 2
    } else {
        cout << "Element not found." << endl;
    }
    return 0;
}
```

## Conclusion
This tutorial provides a basic overview of Data Structures and Algorithms using C++. You can expand on these concepts by implementing more complex data structures and algorithms, as well as solving problems to strengthen your understanding.
