#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    string input{},en_dc{},output{};
    
    
    cout << "Enter your message: ";
    getline(cin, input);
    cout << "\nDo you want to Encript or Decript:(E/D): ";
    cin >> en_dc;
    
    if (en_dc == "E" or en_dc == "e"){
        for (auto i: input){
            size_t position{alphabet.find(i)};
            if (position!=string::npos)
                output+=key[position];
            else
                output+=i;
        }
    }else if (en_dc == "D" or en_dc == "d"){
        for (auto i: input){
            size_t position{key.find(i)};
            if (position!=string::npos)
                output+=alphabet[position];
            else
                output+=i;
        }
    }
    
    cout << "\nYour code is: " << output;
    cout << endl;
    return 0;
}
