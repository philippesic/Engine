#include <string>
using namespace std;

class Player {

private:

    string player;

public:

    Player() {
        this->player = "[][][][][]\n[][][][][]\n[][][][][]\n[][][][][]\n[][][][][]\n";
    }

    string getSprite() {
        return player;
    }
};