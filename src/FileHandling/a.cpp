#include "a.hpp"
#include <filesystem>

a::a(const std::string& name) : name(name)
{

}

a::~a()
{

}

void a::setName(std::string& name)
{
	this->name = name;
}

bool a::checkDreamFile() const
{
	return std::filesystem::exists("assets/dream.xml");
}

std::string a::getName() const
{
	return name;
}