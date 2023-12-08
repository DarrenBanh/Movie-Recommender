#include "../header/Tests.h"

using namespace std;

Tests::Tests() {}
Tests::~Tests() {}

//Movie
string Tests::setYearTest() {
    Movie *m = new Movie();

    m->setYear(1998);

    delete m;
    return "Covered: setYear();";
}

string Tests::setNumOfVotesTest() {
    Movie *m = new Movie();

    m->setNumOfVotes(108734);

    delete m;
    return "Covered: setNumOfVotes();";
}

string Tests::setDurationTest() {
    Movie *m = new Movie();

    m->setDuration(120);

    delete m;
    return "Covered: setDuration();";
}

string Tests::setRatingTest() {
    Movie *m = new Movie();

    m->setRating(7.2);

    delete m;
    return "Covered: setRating();";
}

string Tests::setTitleTest() {
    Movie *m = new Movie();

    m->setTitle("The Godfather");

    delete m;
    return "Covered: setTitle();";
}

string Tests::setProductionTest() {
    Movie *m = new Movie();
    
    m->setProduction("Blue Castle Studios");

    delete m;
    return "Covered: setProduction();";
}

string Tests::setMovieIDTest() {
    Movie *m = new Movie();

    m->setMovieID("A1203");

    delete m;
    return "Covered: setMovieID();";
}

string Tests::setGenresTest() {
    Movie *m = new Movie();
    vector<string> genres;

    genres.push_back("Action");
    genres.push_back("Mystery");
    genres.push_back("Horror");

    m->setGenres(genres);

    delete m;
    return "Covered: setGenres();";
}

string Tests::setDirectorsTest() {
    Movie *m = new Movie();
    vector<string> directors;

    directors.push_back("Steven Spielberg");
    directors.push_back("Anthony Russo");

    m->setDirectors(directors);

    delete m;
    return "Covered: setDirectors();";
}

string Tests::setWritersTest() {
    Movie *m = new Movie();
    vector<string> writers;

    writers.push_back("Steven King");
    writers.push_back("Aaron Sorkin");

    m->setWriters(writers);

    delete m;
    return "Covered: setWriters();";
}

string Tests::setActorsTest() {
    Movie *m = new Movie();
    vector<string> actors;

    actors.push_back("Chris Evans");
    actors.push_back("Chris Pratt");

    m->setActors(actors);

    delete m;
    return "Covered: setActors();";
}

string Tests::setDescriptionsTest() {
    Movie *m = new Movie();
    vector<string> description;

    description.push_back("This is an example description for some movie A");

    m->setDescriptions(description);

    delete m;
    return "Covered: setDescriptions();";
}

string Tests::getYearTest() const {
    Movie *m = new Movie();

    m->getYear();

    delete m;
    return "Covered: getYear();";
}

string Tests::getNumOfVotesTest() const {
    Movie *m = new Movie();

    m->getNumOfVotes();

    delete m;
    return "Covered: getNumOfVotes();";
}

string Tests::getDurationTest() const {
    Movie *m = new Movie();

    m->getDuration();

    delete m;
    return "Covered: getDuration();";
}

string Tests::getRatingTest() const {
    Movie *m = new Movie();

    m->getRating();

    delete m;
    return "Covered: getRating();";
}

string Tests::getTitleTest() const {
    Movie *m = new Movie();

    m->getTitle();

    delete m;
    return "Covered: getTitle();";
}

string Tests::getProductionTest() const {
    Movie *m = new Movie();

    m->getProduction();

    delete m;
    return "Covered: getProduction();";
}

string Tests::getMovieIDTest() const {
    Movie *m = new Movie();

    m->getMovieID();

    delete m;
    return "Covered: getMovieID();";
}

string Tests::getGenresTest() const {
    Movie *m = new Movie();

    vector<string> genres;

    genres.push_back("Action");
    genres.push_back("Adventure");

    m->setGenres(genres);

    m->getGenres();

    delete m;
    return "Covered: getGenres();";
}

string Tests::getDirectorsTest() const {
    Movie *m = new Movie();

    vector<string> directors;

    directors.push_back("Joe Russo");
    directors.push_back("Steven Spielberg");

    m->setDirectors(directors);

    m->getDirectors();

    delete m;
    return "Covered: getDirectors();";
}

string Tests::getWritersTest() const {
    Movie *m = new Movie();

    vector<string> writers;

    writers.push_back("Steven King");
    writers.push_back("Aaron Sorking");

    m->setWriters(writers);

    m->getWriters();

    delete m;
    return "Covered: getWriters();";
}

string Tests::getActorsTest() const {
    Movie *m = new Movie();

    vector<string> actors;
        
    actors.push_back("Chris Pratt");
    actors.push_back("Adam Sandler");

    m->setActors(actors);

    m->getActors();

    delete m;
    return "Covered: getActors();";
}

string Tests::getDescriptionsTest() const {
    Movie *m = new Movie();

    vector<string> description;

    description.push_back("This is an example description for the Movie B");

    m->setDescriptions(description);

    m->getDescriptions();

    delete m;
    return "Covered: getDescriptions();";
}


// //Output
// string Test::outputMenuTest() {}
// string Test::questionOut1Test() {}
// string Test::questionOut2Test() {}
// string Test::questionOut3Test() {}
// string Test::questionOut4Test() {}
// string Test::questionOut5Test() {}
// string Test::searchChoiceOutTest() {}
// string Test::similarOutTest() {}
// string Test::filterOutGenreTest() {}
// string Test::filterOutYearTest() {}
// string Test::filterOutDurationTest() {}
// string Test::filterOutRatingTest() {}
// string Test::filterOutPopularityTest() {}


// //Sort
string Tests::sortCSVTest() {
    Sort *s = new Sort();

    vector<Movie> sortedList;
    sortedList = s->sortCSV();

    delete s;
    return "Covered: sortCSV();";
}


// //Quiz
// vector<Movie> Test::quizAlgoTest(vector<Movie> &) {}
// vector<string> Test::getQuizTest() {}
// string Test::q1PointsTest(vector<Movie> &, string choice) {}
// string Test::q2PointsTest(vector<Movie> &, string choice) {}
// string Test::q3PointsTest(vector<Movie> &, string choice) {}
// string Test::q4PointsTest(vector<Movie> &, string choice) {}
// string Test::q5PointsTest(vector<Movie> &, string choice) {}


//Search
string Tests::getPointsTest() {
    Search* s = new Search();
    s->getPoints();

    delete s;
    return "Covered: getPoints()";
}

string Tests::similarAlgoTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    string similar = "Whiplash";

    Search* se = new Search();
    se->similarAlgo(movieVector, similar);

    delete s;
    delete se;
    return "Covered: similarAlgo()";
}

string Tests::filterAlgoTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> filterVector = {"Action", "a", "a", "a", "a"};

    Search* se = new Search();
    se->filterAlgo(movieVector, filterVector);

    delete s;
    delete se;
    return "Covered: filterAlgo()";
}

string Tests::searchSimilarPointsTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    string similar = "Whiplash";

    Search* se = new Search();
    se->searchSimilarPoints(similar, movieVector);

    delete s;
    delete se;
    return "Covered: searchSimilarPoints()";
}

string Tests::genreFilterPointsTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> filterVector = {"Action", "a", "a", "a", "a"};

    Search* se = new Search();
    se->genreFilterPoints(movieVector, filterVector);

    delete s;
    delete se;
    return "Covered: genreFilterPoints()";
}

string Tests::yearFilterPointsTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> filterVector1 = {"Action", "a", "a", "a", "a"};
    vector<string> filterVector2 = {"Action", "b", "a", "a", "a"};
    vector<string> filterVector3 = {"Action", "c", "a", "a", "a"};
    vector<string> filterVector4 = {"Action", "d", "a", "a", "a"};
    vector<string> filterVector5 = {"Action", "e", "a", "a", "a"};

    Search* se = new Search();
    se->yearFilterPoints(movieVector, filterVector1);
    se->yearFilterPoints(movieVector, filterVector2);
    se->yearFilterPoints(movieVector, filterVector3);
    se->yearFilterPoints(movieVector, filterVector4);
    se->yearFilterPoints(movieVector, filterVector5);

    delete s;
    delete se;
    return "Covered: yearFilterPoints()";
}

string Tests::durationFilterPointsTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> filterVector1 = {"Action", "a", "a", "a", "a"};
    vector<string> filterVector2 = {"Action", "a", "b", "a", "a"};
    vector<string> filterVector3 = {"Action", "a", "c", "a", "a"};
    vector<string> filterVector4 = {"Action", "a", "d", "a", "a"};
    vector<string> filterVector5 = {"Action", "a", "e", "a", "a"};
    vector<string> filterVector6 = {"Action", "a", "f", "a", "a"};

    Search* se = new Search();
    se->durationFilterPoints(movieVector, filterVector1);
    se->durationFilterPoints(movieVector, filterVector2);
    se->durationFilterPoints(movieVector, filterVector3);
    se->durationFilterPoints(movieVector, filterVector4);
    se->durationFilterPoints(movieVector, filterVector5);
    se->durationFilterPoints(movieVector, filterVector6);

    delete s;
    delete se;
    return "Covered: durationFilterPoints()";
}

string Tests::ratingFilterPointsTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> filterVector1 = {"Action", "a", "a", "a", "a"};
    vector<string> filterVector2 = {"Action", "a", "a", "b", "a"};
    vector<string> filterVector3 = {"Action", "a", "a", "c", "a"};
    vector<string> filterVector4 = {"Action", "a", "a", "d", "a"};
    vector<string> filterVector5 = {"Action", "a", "a", "e", "a"};
    vector<string> filterVector6 = {"Action", "a", "a", "f", "a"};
    vector<string> filterVector7 = {"Action", "a", "a", "g", "a"};

    Search* se = new Search();
    se->ratingFilterPoints(movieVector, filterVector1);
    se->ratingFilterPoints(movieVector, filterVector2);
    se->ratingFilterPoints(movieVector, filterVector3);
    se->ratingFilterPoints(movieVector, filterVector4);
    se->ratingFilterPoints(movieVector, filterVector5);
    se->ratingFilterPoints(movieVector, filterVector6);
    se->ratingFilterPoints(movieVector, filterVector7);

    delete s;
    delete se;
    return "Covered: ratingFilterPoints()";
}

string Tests::voteFilterPointsTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();
    vector<string> filterVector1 = {"Action", "a", "a", "a", "a"};
    vector<string> filterVector2 = {"Action", "a", "a", "a", "b"};
    vector<string> filterVector3 = {"Action", "a", "a", "a", "c"};
    vector<string> filterVector4 = {"Action", "a", "a", "a", "d"};
    vector<string> filterVector5 = {"Action", "a", "a", "a", "e"};

    Search* se = new Search();
    se->voteFilterPoints(movieVector, filterVector1);
    se->voteFilterPoints(movieVector, filterVector2);
    se->voteFilterPoints(movieVector, filterVector3);
    se->voteFilterPoints(movieVector, filterVector4);
    se->voteFilterPoints(movieVector, filterVector5);

    delete s;
    delete se;
    return "Covered: voteFilterPoints()";
}


//Random
// Movie Test::randomAlgoTest(vector <Movie>& sortedList) {}


// //Result
// string Test::quizResultTest(vector <Movie>&) {}
// string Test::similarResultTest(vector <Movie>&, string) {}
// string Test::filterResultTest(vector <Movie>&, vector <string>&) {}
// string Test::randomResultTest(Movie) {}


//Input
string Tests::getMenuTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();

    Input* in = new Input();
    in->getMenu(movieVector);

    delete s;
    delete in;
    return "Covered: getMenu()";
}

string Tests::getSearchTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();

    Input* in = new Input();
    in->getSearch(movieVector);

    delete s;
    delete in;
    return "Covered: getSearch()";
}

string Tests::getSimilarTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();

    Input* in = new Input();
    in->getSimilar();

    delete s;
    delete in;
    return "Covered: getSimilar()";
}

string Tests::getFilterTest() {
    Sort* s = new Sort();
    vector<Movie> movieVector;
    movieVector = s->sortCSV();

    Input* in = new Input();
    in->getFilter();

    delete s;
    delete in;
    return "Covered: getFilter()";
}