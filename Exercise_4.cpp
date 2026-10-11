#include "Exercise_3.hpp"
#include <iostream>

bool Palindrome(string Word1){
    string Word2 = Word1;
    int j = Word1.length() - 1;

    for(int i=0;i<Word1.length();i++,j--){
            if(Word1[i] != Word2[j]){
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
    Node *V = Head->next;
    while(V != nullptr){
        check = Palindrome(V->Word);
        if(check == true){
            Q->next = V->next;
            V->next = nullptr;
            return V;
        }
        Q = V;
        V = V->next;
    }
    return nullptr;
    
}

int main(){
    Node *Head;
    Node *Pal;
    cout << "Press Enter to create a Linked List ( FIFO ) of 25 elements " << endl;
    getchar();
    CreatingList(Head,25);
    Pal = DetachPal(Head);
    


}