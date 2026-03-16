#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = NULL;
Node* rear = NULL;

bool isEmpty() {
    return front == NULL;
}

void enqueue(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL) {
        front = rear = newNode;
        return;
    }
    rear->next = newNode;
    rear = newNode;
}

int dequeue() {
    if (isEmpty()) return -1;

    Node* temp = front;
    int data = temp->data;
    
    front = front->next;
    if (front == NULL) rear = NULL;
    
    delete temp;
    return data;
}

void bfs(int startNode, int n, int graph[5][5]) {
    bool visited[5] = {false}; 

    enqueue(startNode);
    visited[startNode] = true;

    cout << "Hasil Penelusuran BFS: ";

    while (!isEmpty()) {
        int curr = dequeue();
        cout << curr << " -> ";

        for (int i = 0; i < n; i++) {
            if (graph[curr][i] == 1 && !visited[i]) {
                visited[i] = true;
                enqueue(i);
            }
        }
    }
    cout << "NULL" << endl;
}

int main() {
    int n = 5; 
    int graph[5][5] = {
        {0, 1, 0, 0, 1}, 
        {1, 0, 1, 1, 0}, 
        {0, 1, 0, 1, 1}, 
        {0, 1, 1, 0, 1}, 
        {1, 0, 1, 1, 0}  
    };

    bfs(0, n, graph); 

    return 0;
}