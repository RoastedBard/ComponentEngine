#include "GameObjectFactory.h"
#include "TransformComponent.h"

GameObjectFactory::GameObjectFactory(void)
{
    vector<shared_ptr<IComponent>> vec;
    _componentsCache.push_back(vec);
    _componentsCache.back().push_back(make_shared<TransformComponent>());
}


GameObjectFactory::~GameObjectFactory(void)
{
}

void GameObjectFactory::addGameObject(int type)
{
    switch(type)
    {
        case GAMEOBJECT_PLAYER:
        {        
            GameObject go;
            _gameObjectCache.push_back(go);

            
            break;
        }

        case GAMEOBJECT_ENEMY:
        break;
    }
}
