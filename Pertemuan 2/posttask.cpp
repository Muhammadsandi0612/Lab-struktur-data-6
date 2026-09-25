#include <iostream>
using namespace std;

struct node {
    int value;
    node *next;
};

 
node *top = NULL;

// PUSH
void push(int n) {
    node *baru = new node;

    baru->value = n;
    baru->next = top;
    top = baru;

    cout << "Push " << n << " berhasil\n";
}

void pop() {
    if (top == NULL) {
        cout << "Stack kosong!\n";
        return;
    }

    node *temp = top;

    cout << "Pop " << temp->value << endl;

    top = top->next;
    delete temp;
}
void displayStack() {
    node *temp = top;

    cout << "Stack : ";

    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

node *front = NULL;
node *rear = NULL;


void enqueue(int n) {
    node *baru = new node;

    baru->value = n;
    baru->next = NULL;

    if (front == NULL) {
        front = baru;
        rear = baru;
    }
    else {
        rear->next = baru;
        rear = baru;
    }

    cout << "Enqueue " << n << " berhasil\n";
}

void dequeue() {
    if (front == NULL) {
        cout << "Queue kosong!\n";
        return;
    }

    node *temp = front;

    cout << "Dequeue " << temp->value << endl;

    front = front->next;

    if (front == NULL)
        rear = NULL;

    delete temp;
}

void displayQueue() {
    node *temp = front;

    cout << "Queue : ";

    while (temp != NULL) {
        cout << temp->value << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main() {

 system("cls");
  cout << "STACK\n";

 push(10);
 displayStack();

 push(20);
 displayStack();

 push(30);
 displayStack();
  cout << endl;

 pop();
 displayStack();

 pop();
 displayStack();
  cout << "\n";
  cout << "QUEUE\n";

 enqueue(10);
 displayQueue();

 enqueue(20);
 displayQueue();

 enqueue(30);
 displayQueue();
  cout << endl;

 dequeue();
 displayQueue();

 dequeue();
 displayQueue();

return 0;
}