#ifndef INTERFACE_H
#define INTERFACE_H

#include <iostream>
#include <string>

#include "Template.h"
#include "PlayerDB.h"

/**
 * Interface class role is to interface between the user, the template and playerDBmodule.
 * Receive inputs from user and according to the command, calls the suitable functions from the suitable module
 */
class Interface
{
private:
    PlayerDB* myPlayers;
    
    const Interface& operator=(const Interface& playersControl); //Assignment operator
    Interface(const Interface& playersControl); //Copy constructor

public:
    //Constructors
    Interface(PlayerDB* pNew_Players): myPlayers(pNew_Players){}
    
    //Destructor
    ~Interface(){}
    
    /**
     * function that gets input from the user and calls the suitable function accordingly
     * @param map: Template object representing the template
     */
    void StartControl(Template* myTemplate);
};

#endif
