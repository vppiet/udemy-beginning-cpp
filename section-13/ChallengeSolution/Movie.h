#ifndef MOVIE_H
#define MOVIE_H

#include <string>

class Movie {
    std::string name;
    std::string rating;
    int watched;

public:
    Movie(const std::string &name, const std::string &rating, int watched);

    Movie(const Movie &source);

    ~Movie();

    std::string get_name() const;

    std::string get_rating() const;

    int get_watched() const;

    void increment_watched();

    void display() const;
};

#endif //MOVIE_H
