#ifndef PLAYERDB_H_
#define PLAYERDB_H_

#include <vector>
#include <string>
#include "Player.h"
#include "Template.h"

using std::vector;
using std::string;

typedef vector<Player*> PlayerVec;
typedef vector<Player*>::iterator PlayerVec_it;
typedef vector<Player*>::const_iterator PlayerVec_cit;


class PlayerDB
{
private:
	PlayerVec players;
	Template *myTemplate;

	PlayerDB& operator=(const PlayerDB& new_PlayerDB); // the idea is to prevent an assignment operator from the user.

	PlayerDB(const PlayerDB& new_PlayerDB); // copy constructor: placed in private to prevent copying objects from the user.

public:
	PlayerDB(Template *new_template):myTemplate(new_template) {} // constructor for playerDB that gets a template

	~PlayerDB(); // destructor
	
};




#endif /* PLAYERDB_H_ */