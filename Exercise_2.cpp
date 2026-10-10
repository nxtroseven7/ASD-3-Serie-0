#include <cstdint>
#include <iostream>

using namespace std;
int main(){
    int N;
    uint8_t i;
    
    cout << "Enter the number of elements you want to put in the array :" << endl;

    do{
        cin >> N;
    }while(N < 0 || N > 100);

    uint8_t T[100];
    for(i=0;i<N;i++){
        cout << "Enter the value of the element number " << i << endl;
        cin >> T[i];
    }

    i = 0;
    uint8_t j = 0;
    
    while(j!=N){
        if(T[j] == 0){
            j++;
        } else {
            T[i] = T[j];
            i++;
            j++;
            }
        }
    N = i;

    cout << "The new array is : " << endl;
    for(i=0;i<N;i++){
        cout << T[i] ;
    }
    return 0;
}