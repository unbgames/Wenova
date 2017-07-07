#ifndef BATTLEEND_H
#define BATTLEEND_H

#define N_SPRITES 19

#include "State.h"
#include "Sprite.h"

#include <string>
#include <vector>

using std::string;
using std::vector;

class BattleEnd : public GameObject{
	public:
		BattleEnd(int id_winner);

		void update(float delta);
		void render();

		bool is_dead();

		void notify_collision(GameObject & object);

	private:
		vector <Sprite> sprite;

		int current_sprite;
};

#endif
