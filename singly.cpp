#include <iostream>
using namespace std;

class Node 
{
    public:
        int noMhs;
        Node *next;
};

class Linkedlist 
{
    Node *START;

public:
     Linkedlist()
     {
        START = NULL;
     }
}