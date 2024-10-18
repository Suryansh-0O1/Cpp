#include <iostream>
#include "Movies.h"

Movies::Movies() {}

Movies::~Movies() {}

bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for (auto i : movies){
        if (i.get_name()==name){
            return false;
        }    
    }
    Movie n(name,rating,watched);
    movies.push_back(n);
    return true;
}

bool Movies::increment_watched(std::string name) {
   for (auto &i : movies){
        if (i.get_name()==name){
            i.increment_watch();
            return true;
        }
    }
   return false;
}

void Movies::display() const {
    if (movies.empty()){
        std::cout << "Sorry, No Movies Available." << std::endl << std::endl; 
    }else{
       std::cout << std::endl << std::endl;
       std::cout << "================================================" << std::endl;    
       for (auto i: movies){
           i.display();
       }
       std::cout << "================================================" << std::endl;
       std::cout << std::endl << std::endl;
    }   
}