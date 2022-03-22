#include <string>
#include "Direction.hpp"
using namespace std;

namespace ariel 
{
    class Notebook 
    {
        public:
            Notebook();
            void write(int page, int row, int column, Direction direction, string text);
            string read(int page, int row, int column, Direction direction, int length);
            void erase(int page, int row, int column, Direction direction, int length);
            void show(int page);
    };
}