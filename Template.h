#ifndef TEMPLATE_H_
#define TEMPLATE_H_

#include <iostream>
#include <string>

typedef int size_type;
typedef int** grid_type;
hhhh
class Template
{
private:
	grid_type ppGrid;
	size_type size_h;
	size_type size_w;

	Template& operator=(const Template& newTemplate);
	// assignment operator.... placed in private to prevent assignment between two objects.

	Template(const Template &newTemplate);
	// copy constructor.... placed in private to prevent from the user to create new template with another template.

public:

	Template(); // default constructor
	~Template(); // destructor
	
};



#endif /* TEMPLATE_H_ */