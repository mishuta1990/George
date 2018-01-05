#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

#include "Coordinate.h"
#include "Template.h"

using namespace std;

typedef enum { NON_WINNER = 0, WINNER = 1} status ;
typedef enum { REGULAR = 0, FAST = 1, SLOW = 2, LIMITED = 3, STRONG = 4 } playerType ;

/**
 * Player class role is to hold all the data and operations (function) of a single player.
 */
class Player
{
private:
    Coordinate coordinate;
    const string name;
    status currentStatus;
    
public:
    
    // #################### Class methods ####################
    
    //constructor
	Player(const Coordinate& newCoordinate, const std::string& newName)
	: coordinate(newCoordinate), name(newName), currentStatus(NON_WINNER){}


    //destructor
	~Player();
	
	virtual void movePlayer(Template *newTemplate, const int diceNum);

    /**
     * function that prints player location
	@param: cell is an integer that provides the number of the cell
     */
    inline void print(const int cell)
    {
        cout << "Player: " << this->name << "is at: " << cell << endl;
        
    }

};

#endif
