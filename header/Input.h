#pragma once
#include <iostream>
#include <cstdlib>
#include "Output.h"

using namespace std;

class Input : public Output {
 public:

   Input();
   ~Input();
   char getMenu();
   char getSearch();
   string getSimilar();
   vector<string> getFilter();
   vector<char> getQuiz();
  
 private:

   char choice;
   string similarIn;
   vector<string> filterIn;
   vector<char> questionIn;
   Input operator=(const Output&) = delete;

};