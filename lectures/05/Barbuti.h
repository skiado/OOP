#include <string>
#include "Player.h"

class Barbuti{
	private:
		Player p1,p2;
		int active;
		int is_win(int r);
		int is_loose(int r);
	public:
		Barbuti();
		int play();
		int get_rolls();
		int get_win(int n_player);
		int get_loose(int n_player);
		string active_player();
		string player_name(int n_player);
};
