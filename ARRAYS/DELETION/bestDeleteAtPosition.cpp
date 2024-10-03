#include<iostream>
using namespace std;

int main(){
    int array[10], size, i, pos;

    cin >> size;
    if(size > 10){
        cout << "Overflow";
    }

    else{
        for(i = 0; i < size; i++){
            cin >> array[i];
        }

        cout << "Enter position : ";
        cin >> pos;

        array[pos-1] = array[size-1];
        size--;
    }

    for(i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}