#include <iostream>

using namespace std;

int *apply_all(int*, int, int*, int);
void print(int*,int);

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;
    print(results, results_size);
    
    cout << endl;
    
    delete [] results;

    return 0;
}

int *apply_all(int *arr1, int size1, int *arr2, int size2){
    const int x{size1*size2};
    int *new_arr_ptr{};
    new_arr_ptr = new int[x];
    int p{0};
    for (int i{0}; i<size1; i++){
        for(int j{0}; j<size2; j++){
            *(new_arr_ptr+p)=(arr1[i]*arr2[j]);
            p++;
        }
    }
    return new_arr_ptr;
}

void print(int *arr,int size){
    cout << "[" ;
    for (int i{0}; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}