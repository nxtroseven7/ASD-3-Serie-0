#include "Exercise_3.hpp"
#include <iostream>
#include <new>

bool Palindrome(string Word1){
    int j = Word1.length() - 1;

    for(int i=0;i<Word1.length();i++,j--){
            if(Word1[i] != Word1[j]){
                return false;
            }
        }
        return true;
}

Node *DetachPal(Node *Head){
    if(HeadNull(Head)){
        return Head;
    }

    bool check;
    Node *Q = Head;
    Node *V = Head;
    while(V != nullptr){
        check = Palindrome(V->Word);
        if(check == true){
            if(Q == V){
                Head = V->next;
                V->next = nullptr;
                return V;
            } else {
                Q->next = V->next;
                V->next = nullptr;
                return V;
            }
        }
        Q = V;
        V = V->next;
    }
    return nullptr;
}

void ListPal(Node *&Head, Node *&NewHead){
    NewHead = nullptr;
    Node *P = DetachPal(Head);

    while(P != nullptr){
        P->next = NewHead;
        NewHead = P;
        P = DetachPal(Head);
    }
    
}

int main(){
    Node *Head =nullptr;
    Node *Pal = nullptr;
    Node *SecondList = nullptr;
    
    cout << "Press Enter to create a Linked List ( FIFO ) of 25 elements " << endl;
    getchar();
    CreatingList(Head,25);
    ListPal(Head, SecondList);

    Node *Q = Head;

    while(Q != nullptr){
        cout << Q->Data << Q->Word << " /" ;
        Q = Q->next;
    }

    Q = SecondList;

    while(Q != nullptr){
        cout << Q->Data << Q->Word << " /" ;
        Q = Q->next;
    } 

    return 0;
}