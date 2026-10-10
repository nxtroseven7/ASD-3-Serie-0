#include <iostream>

using namespace std;

struct Node{
    int Data;
    string Word;
    struct Node *next;
};

bool HeadNull(Node* Head) {

    if (Head == nullptr) {
        cout << "The list doesnt exist ( No head)!" << endl;
        return true;
    }
    return false;
}

void ShowList(Node *Head){
    if(HeadNull(Head)){
        return;
    }
    Node *Q;
    Q = Head;
    while(Q != nullptr){
        cout << Q->Data << " ";
        Q = Q->next;
    }

}
void modifList1(Node *Head){
    if(HeadNull(Head)){
        return;
    }
    while(Head != nullptr){
        Head->Data = 2 * Head->Data;
        Head = Head->next;
    }
}


void modifList2(Node *&Head){
    if(HeadNull(Head)){
        return;
    }
    while(Head != nullptr){
        Head->Data = 2 * Head->Data;
        Head = Head->next;
    }
}

void modifList3(Node *Head){
    if(HeadNull(Head)){
        return;
    }
    Node *V;
    V = Head;
    while(V != nullptr){
        V->Data = 2 * V->Data;
        V = V->next;
    }
}

void NextList1(Node *Head){
    if(HeadNull(Head)){
        return;
    }
    if(Head != nullptr){
        Node *V;
        V = Head;
        Head = Head->next;
        delete V;
    }

}

void NextList2(Node *&Head){
    if(HeadNull(Head)){
        return;
    }
    if(Head != nullptr){
        Node *V;
        V = Head;
        Head = Head->next;
        delete V;
    }
}

void CreatingList(Node *&Head,unsigned int N){
    Node *Q = nullptr;
    Node *P;

    Head = nullptr;
    for(unsigned int i=0;i<N;i++){
        P = new Node;
        cout << "Enter the value of the node number " << i << endl;
        cin >> P->Data;
        cout << "Enter the word of the node number " << i << endl;
        cin >> P->Word;
        P->next = nullptr;
        if(Head == nullptr){
            Head = P;
            Q = P;
        } else {
            Q->next = P;
            Q = P;     
        }

    }
    cout << "List Created!" << endl;

}