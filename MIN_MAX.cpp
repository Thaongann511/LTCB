#include <iostream>
#include <cassert>
using namespace std;

int maxElement(const int* array, size_t size){
    assert(array != NULL);
    assert(size >= 1);
    int max = array[0];
    for (size_t i = 1; i < size; ++i) {
        if (max < array[i]) { 
            max = array[i];
        }
    }
    return max;
}

int minElement(const int* array, size_t size){
    
    assert(array != NULL);
    assert(size >= 1);

 
    int min = array[0];


    for (size_t i = 1; i < size; ++i) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}


void input_array(int array[], int length){
   
    for (short i = 0; i < length; i++) cin >> array[i];
}


int main(){
    int array[100], n;
    cout << ">>Nhap so phan tu: ";
    cin >>  n;
 
    cout << ">>Nhap phan tu:\n";
    input_array(array,n);

    int max = maxElement(array,n);
    cout << "max= "<< max << endl;

    int min = minElement(array,n);
    cout << "min= " << min <<endl;

}
