#pragma once

#include "input.h"
#include "position.h"

#define DEFAULT_HEALTH 100
#define MAX_HEALTH 128

struct player_t
{
	unsigned int player_id;
	unsigned int is_human;
	unsigned int health;
	struct position_t position;
	int acceleration;
	struct input_t input;
	// score
	// status
	// coordinate y,x (union?)
	// struct battlecar_t battlecar;
	// struct input_t (*get_input)(struct player_t*); // TODO: ptr?
	void (*get_input)(struct player_t*); // TODO: ptr?
};

void move_player(struct player_t* player);
int check_for_car_collision(const struct player_t* car1, const struct player_t* car2);