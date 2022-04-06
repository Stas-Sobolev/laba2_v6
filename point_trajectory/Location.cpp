#include "Location.h"

std::string Location::description() const
{
    return std::string();
}

std::vector<std::string> Location::tick()
{
    return std::vector<std::string>();
}

void Location::set_width(coordinate_ widh)
{
}

void Location::set_height(coordinate_ height)
{
}

void Location::set_gravity(acceleration_ gravity)
{
}

coordinate_ Location::get_width()
{
    return coordinate_();
}

coordinate_ Location::get_height()
{
    return coordinate_();
}

acceleration_ Location::get_graity()
{
    return acceleration_();
}

void Location::add_sprite(Sprites*)
{
}
