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

void addNode()
{
    int nim;
    cout << "\nMasukkan Nomor Mahasiswa: ";
    cin >> nim; 

    Node *nodeBaru = new Node;
    nodeBaru->noMhs = nim;
}

}