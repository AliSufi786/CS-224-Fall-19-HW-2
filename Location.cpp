#include "Location.hpp"
#include "Road.hpp"
#include <string>

Location::Location(string name, string special) : m_name(name), m_special(special)
{
}
Location::Location(string name) : m_name(name)
{
}

void Location::set_special(string special)
{
    m_special = special;
}

void Location::remove_special(string special)
{
    special = "";
}

void Location::set_north(Location *north, int no_of_days)
{
    m_north = new Road(this, north, no_of_days);
}

void Location::set_south(Location *south, int no_of_days)
{
    m_south = new Road(this, south, no_of_days);
}

void Location::set_east(Location *east, int no_of_days)
{
    m_east = new Road(this, east, no_of_days);
}

void Location::set_west(Location *west, int no_of_days)
{
    m_west = new Road(this, west, no_of_days);
}
