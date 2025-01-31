#pragma once

#include <string>

class a
{
private:
	std::string name;

public:
	//constructor
	a(const std::string& name);
	//deconstructor
	~a();

	//getter for name
	std::string getName() const;

	bool checkDreamFile() const;

	//setter for name
	void setName(std::string& name);
};