#include "b.hpp"

b::b(const std::string& name) : name(name)
{

}

b::~b()
{

}

std::string b::getName() const
{
	return name;
}

void b::setName(const std::string& name)
{
	this->name = name;
}