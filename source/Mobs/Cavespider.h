
#pragma once

#include "AggressiveMonster.h"





class cCavespider :
	public cAggressiveMonster
{
	typedef cAggressiveMonster super;
	
public:
	cCavespider(void);

	CLASS_PROTODEF(cCaveSpider);

	virtual void Tick(float a_Dt) override;
	virtual void GetDrops(cItems & a_Drops, cPawn * a_Killer = NULL) override;
} ;




