#include <iostream>

using namespace std;

//void reverse_array(int* arr, int size) {
//    //-- Write your code below this line 
//    int *array;
//    array = new int[size];
//    for (int i{size-1};i<0;i--){
//        for(int j{0};j<size;j++){
//            *(array+j)=*(arr+i);
//        }
//    }
//    for(int i{0};i<size;i++){
//        *(arr+i)=*(array+i);
//    }
//    //-- Write your code above this line
//}
//
//int main(){
//    int arr[]{1,2,3};
//    reverse_array(arr,3);
//    for(auto i: arr){
//        cout<< i << " ";
//    }
//    return 0;
//}

// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.




//#include <string>
//
//string reverse_string(const string &str) {
//    string reversed;
//    // Write your code below this line 
//    const char *start = str.c_str();
//    const char *end = str.c_str() + str.size() - 1;
//    while (end>=start){
//        reversed.push_back(*end);
//        end--;
//    }
//    // Write your code abocve this line
//    return reversed;
//}
//
//int main(){
//    string a{"abc"};
//    string b = reverse_string(a);
//    cout<< b<< endl;
//    return 0;
//}