#include <iostream>
#include "Movie.h"


Movie::Movie() 
    : name(""), rating(""), watched(0)  {
}

Movie::Movie(std::string name_, std::string rating_, int watched_) 
    : name(name_), rating(rating_), watched(watched_)  {
}

Movie::Movie(const Movie &source) 
    : Movie{source.name, source.rating, source.watched} {
}

Movie::~Movie() {
}


void Movie::display() const {
    std::cout << name << ", " << rating <<  ", " << watched  <<   std::endl;
}
