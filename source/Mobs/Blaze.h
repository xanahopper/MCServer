
#pragma once

#include "AggressiveMonster.h"





class cBlaze :
	public cAggressiveMonster
{
	typedef cAggressiveMonster super;
	
public:
	cBlaze(void);

	CLASS_PROTODEF(cBlaze);
	
	virtual void GetDrops(cItems & a_Drops, cPawn * a_Killer = NULL) override;
} ;




