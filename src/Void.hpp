#include <iostream>
#include "./Player.hpp"
using namespace std;

class Scene {
    private:
        Player player;
        string coords[100][100];
        int x, y;
    
    public:

        Scene() {
            for(int i = 0; i < 100; i++) {
                for (int x = 0; x < 100; x++) {
                    coords[i][x] = " ";
                }
            }
        }

        void drawPlayer(int x, int y) {
            coords[x][y] = player.getSprite();
        }

        void drawScene() {
            for(int i = 0; i < 100; i++) {
                for (int x = 0; x < 100; x++) {
                    cout << coords[i][x];
                }
                cout << endl;
            }
        }
    };