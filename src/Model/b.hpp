#pragma once

#include <string>

class b
{
private:
	std::string name;

public:
	//constructor
	b(const std::string& name);
	~b();

	// Getter for name
	std::string getName() const;

	// Setter for name
	void setName(const std::string& name);
};