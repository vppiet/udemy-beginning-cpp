#include "Movie.h"
#include <iostream>

Movie::Movie(const std::string &name, const std::string &rating, const int watched)
    : name(name), rating(rating), watched(watched) {
}

Movie::Movie(const Movie &source)
    : Movie{source.name, source.rating, source.watched} {
}

Movie::~Movie() = default;

std::string Movie::get_name() const {
    return name;
}

std::string Movie::get_rating() const {
    return rating;
}

int Movie::get_watched() const {
    return watched;
}

void Movie::increment_watched() {
    ++watched;
}

void Movie::display() const {
    std::cout << name << ", " << rating << ", " << watched << std::endl;
}
