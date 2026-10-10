#include "Exercise_3.hpp"
#include <iostream>

bool Palindrome(string Word1, string Word2){
    if(Word1.length() == Word2.length()){
        int j = Word1.length() - 1;
        for(int i=0;i<Word1.length();i++){
            if(Word1[i] == Word2[j]){
                j--;
            } else {
                return false;
            }
        }
        return true;
    } else {
        return false;
    }    
}

void DetachPal(string Word1, string Word2, Node *Head){
    
}

int main(){
    Node *Head;

    cout << "Press Enter to create a Linked List ( FIFO ) of 25 elements " << endl;
    getchar();
    CreatingList(Head,25);

    


}