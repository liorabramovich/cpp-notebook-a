#include "Direction.hpp"
#include "Notebook.hpp"
#include <string>
#include <iostream>
using namespace std;

namespace ariel 
{
        Notebook::Notebook() { }

         void Notebook::write(int page, int row, int column, Direction direction, string text)
         {
             cout << "test" << endl;
         }
         string Notebook::read(int page, int row, int column, Direction direction, int length)
         {
             return "test";
         }
         void Notebook::erase(int page, int row, int column, Direction direction, int length)
         {
             cout << "test" << endl;
         }
         void Notebook::show(int page) 
         {
             cout << "test" << endl;
         }   
}