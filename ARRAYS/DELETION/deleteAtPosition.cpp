#include<iostream>
using namespace std;


int main(){
    int array[10], size, i, pos;

    cin >> size;
    if(size > 10){
        cout << "Overflow";
        return 1;
    }

    else{
        cout << "Enter elements in the array" << endl;
        for(i = 0; i < size; i++){
            cin >> array[i];
        }

        cout << "Enter position" << endl;
        cin >> pos;

        if(pos <= 0 || pos > size){
            cout << "Invalid position";
        }

        for(i = pos-1; i < size-1; i++){
            array[i] = array[i+1];
        }
        size--;

        for(i = 0; i < size; i++){
            cout << array[i] << " ";
        }

    }
}