#pragma once
#include <iostream>
#include <cstdlib>
#include "Movie.h"

using namespace std;

class Sort : public Movie {
 public:

    Sort();
    ~Sort();
    vector<Movie> sortCSV();
  
 private:

    string title;
    int year;
    vector<string> genres;
    double rating;
    int numOfVotes;
    Movie operator=(const Output&) = delete;

};