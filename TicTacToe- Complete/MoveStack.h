#pragma once
//The move stack specification file.  It stores the history of the moves
// currently in effect

// Represents a players move by storing the
// x,y coordinates
// Added constructor functions to this struct to simplify the code

#include <iostream>
#include <string>

struct Move {
    int x;
    int y;
    Move() { x = 0; y = 0; }
    Move(int a, int b) { x = a, y = b; }
};

class MoveStack {
private:
    struct Node {
        int a;
        int b;
        int data[3][3];
        Node* next;
    };
    Node* head;
    Move move;


public:
    MoveStack();
    ~MoveStack();
    int getSize();
    Move top();
    void push(Move move);
    void pop();
};