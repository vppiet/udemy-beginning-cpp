#include "Movies.h"
#include <iostream>

Movies::Movies() = default;

Movies::~Movies() = default;

bool Movies::add_movie(const std::string &name, const std::string &rating, int watched) {
    for (const Movie &m: movies) {
        if (m.get_name() == name) {
            return false;
        }
    }

    movies.emplace_back(name, rating, watched);
    return true;
}

bool Movies::increment_watched(const std::string &name) {
    for (Movie &m: movies) {
        if (m.get_name() == name) {
            m.increment_watched();
            return true;
        }
    }

    return false;
}

void Movies::display() const {
    if (movies.empty()) {
        std::cout << "Sorry, no movies to display" << std::endl;
    } else {
        std::cout << "=================================" << std::endl;
        for (const Movie &m: movies) {
            m.display();
        }
        std::cout << "=================================" << std::endl;
    }
}
