#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = NULL;

bool isEmpty() {
    return top == NULL;
}

void push(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

int pop() {
    if (isEmpty()) return -1;

    Node* temp = top;
    int value = temp->data;
    top = top->next;
    delete temp;
    return value;
}

void dfs(int startNode, int n, int graph[5][5]) {
    bool visited[5] = {false}; 

    push(startNode);
    visited[startNode] = true; 

    cout << "Hasil Penelusuran DFS: ";

    while (!isEmpty()) {
        int curr = pop();
        cout << curr << " -> ";

        for (int i = n - 1; i >= 0; i--) {
            if (graph[curr][i] == 1 && !visited[i]) {
                push(i);
                visited[i] = true; 
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

    dfs(0, n, graph);
    return 0;
}