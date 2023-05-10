#include "./Void.hpp"

int main() {
    Scene *pScene = new Scene();
    pScene->drawPlayer(0, 0); 
    pScene->drawScene();
    delete pScene;
    return 0;
}