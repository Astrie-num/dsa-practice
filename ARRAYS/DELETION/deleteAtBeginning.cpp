#include<iostream>
using namespace std;


int main(){
    int array[10], size, i;

    cin >> size;
    if(size > 10){
        cout << "Overflow";
        return 1;
    }
    else{
        for(i = 0; i < size; i++){
        cin >> array[i];
    }

    for(i = 0; i < size-1; i++){
        array[i] = array[i+1];
    }
    size--;
    }

    for(i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    return 0;
}