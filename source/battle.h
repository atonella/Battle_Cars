// ***************************************************************************
// level
// ***************************************************************************

#pragma once
#include "car.h"
#include "player.h"
#include "utils/controller.h"
#include "utils/vector.h"
#include <vectrex.h>

// ---------------------------------------------------------------------------

// battle arena size: 200 x 200 (y,x)
const struct packet_t battle_arena[]
	= {
		  // y | x
		  { MOVE, { 80, -100 } },
		  // 80 | -100
		  // upper boarder
		  { DRAW, { 0, 100 } },
		  { DRAW, { 0, 100 } },
		  // 80 | 100
		  // right boarder
		  { DRAW, { -100, 0 } },
		  { DRAW, { -100, 0 } },
		  // -120 | 100
		  // bottom boarder
		  { DRAW, { 0, -100 } },
		  { DRAW, { 0, -100 } },
		  // -120 | -100
		  // left boarder
		  { DRAW, { 100, 0 } },
		  { DRAW, { 100, 0 } },
		  // 80 | -100
		  { MOVE, { -80, 100 } },
		  VL_END
	  };
// ---------------------------------------------------------------------------

enum battle_status
{
	BATTLE_PLAY,
	BATTLE_PAUSE,
	BATTLE_FINISHED,
};

// ---------------------------------------------------------------------------

struct battle_t
{
	enum battle_status status;
};

// ---------------------------------------------------------------------------

extern struct battle_t current_battle;

// ---------------------------------------------------------------------------

void battle_init(void);
void battle_play(void);

// ***************************************************************************
// end of file
// ***************************************************************************
