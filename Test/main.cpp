#include <iostream>

using namespace std;

int main()
{
    int *arr_ptr{nullptr};
    int x;
    cin>>x;
    arr_ptr= new int[x];
    for (int i{0}; i<x; i++){
        int x{};
        cin >> x;
        *(arr_ptr + i) = x;
    }
    
    for (int i{0}; i<x; i++){
        cout << *(arr_ptr+i) << " ";
    }
    
    delete [] arr_ptr;
    
    return 0;
}
