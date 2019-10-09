#include "Map.hpp"
#include "Location.hpp"
using namespace std;
#include <iostream>
#include <fstream>

Map::Map()
{
}

void Map::read_map(string fileName)
{
  {
    string line;
    ifstream myfile(fileName);
    if (myfile.is_open())
    {
      getline(myfile, line);
      int no_of_locations = stoi(line);

      Location locations_to_read[no_of_locations];
      while (getline(myfile, line))
      {
        cout << line << '\n';
      }
      myfile.close();
    }
  }
}
