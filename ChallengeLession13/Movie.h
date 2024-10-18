#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
private:
    std::string name;   
    std::string rating;   
    int watched;          
public:
    
    Movie();
    
    Movie(std::string name_, std::string rating_, int watched_);
    
    Movie(const Movie &source); 
    
    ~Movie();
    
    
    void set_name(std::string name_) {name = name_; }
    std::string get_name() const { return name; }
    
    void set_rating(std::string rating_) {rating = rating_; }
    std::string get_rating() const { return rating; }
    
    void set_watched(int watched_) {watched = watched_; }
    int get_watched() const { return watched; }
    
    void increment_watch() { watched+=1; }
    
    void display() const;
};

#endif // _MOVIE_H_
