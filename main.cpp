
#include "pokedex.h"
#include <cassert>
#include <fstream>
#include <iostream>
#include <sstream>
#include <stdexcept>

using namespace std;

void test1() {
  // Pokedex pdx;
  // stringstream strs;
  // // NOLINTNEXTLINE - would normally use empty
  // assert(pdx.size() == 0);
  // assert(pdx.empty());
  // strs << pdx;
  // assert(strs.str() == "[]");
  // cout << "test1 complete" << endl;
}

void test2() {
  // Pokedex pdx;
  // stringstream strs;
  // pdx.insert("Pikachu");
  // assert(pdx.size() == 1);
  // assert(!pdx.empty());
  // assert(pdx.at(0) == "Pikachu");
  // assert(pdx.front() == pdx.back());
  // strs.str("");
  // strs << pdx;
  // assert(strs.str() == "[Pikachu]");
  // cout << "test2 complete" << endl;
}

void test3() {
  // Pokedex pdx;
  // stringstream strs;
  // pdx.insert("Pikachu");
  // pdx.insert("Charmander");
  // assert(pdx.size() == 2);
  // assert(pdx.at(0) == pdx.front());
  // assert(pdx.at(1) == pdx.back());
  // strs.str("");
  // strs << pdx;
  // assert(strs.str() == "[Charmander, Pikachu]");

  // pdx.erase(0);
  // assert(pdx.front() == pdx.back());
  // strs.str("");
  // strs << pdx;
  // assert(strs.str() == "[Pikachu]");
  // cout << "test3 complete" << endl;
}

void test4() {
  // Pokedex pdx;
  // stringstream strs;
  // pdx.insert("Charmander");
  // pdx.insert("Pikachu");
  // pdx.insert("Bulbasaur");
  // strs << pdx;
  // assert(strs.str() == "[Bulbasaur, Charmander, Pikachu]");
  // pdx.erase(1);
  // strs.str("");
  // strs << pdx;
  // assert(strs.str() == "[Bulbasaur, Pikachu]");
  // cout << "test4 complete" << endl;
}

void test5() {
  // Pokedex pdx;
  // // should print error messages
  // pdx.front();
  // pdx.back();
  // pdx.at(3);
  // pdx.at(-9);
  // pdx.erase(5);
  // pdx.erase(-10);
  // pdx.pop_back();
  // assert(pdx.size() == 0);
  // pdx.insert("Charmander");
  // pdx.at(6);
  // pdx.erase(2);
  // assert(pdx.size() == 1);
  // pdx.erase(0);
  // assert(pdx.size() == 0);
  // cout << "test5 complete" << endl;
}

int main() {
  test1();
  test2();
  test3();
  test4();
  test5();
  cout << "Done." << endl;
}
