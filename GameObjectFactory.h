#ifndef _GAMEOBJECTFACTORY_H_
#define _GAMEOBJECTFACTORY_H_

#include <vector>
#include <memory>

#include "IComponent.h"
#include "GameObject.h"
#include "Enums.h"

using namespace std;

class GameObjectFactory
{
public:
    GameObjectFactory(void);
    ~GameObjectFactory(void);

public:
    void addGameObject(int type);

private:
    vector<vector<shared_ptr<IComponent>>> _componentsCache;
    vector<GameObject> _gameObjectCache;
};

#endif