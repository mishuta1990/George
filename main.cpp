#include <cstdlib>
#include <iostream>

#include "Interface.h"
#include "PlayerDB.h"
#include "Template.h"

int main(int argc, char *argv[])
{
    Template* myTemplate = new Template();
    PlayerDB* myPlayers = new PlayerDB(myTemplate);
    Interface control(myPlayers);
    
    control.StartControl(myTemplate);
      
    delete myPlayers;
    delete myTemplate;
    
    return EXIT_SUCCESS;
}