#include <iostream>
#include <sstream>
#include <vector>
#include <math.h>
#include <memory>

#include "IComponent.h"
#include "TransformComponent.h"
#include "MovementComponent.h"
#include "PhysicsComponent.h"
#include "GameObject.h"

using namespace std;

int main()
{
    GameObject _gameObject;

    shared_ptr<TransformComponent> _aClass(new TransformComponent());
    shared_ptr<MovementComponent> _bClass(new MovementComponent());
    shared_ptr<PhysicsComponent> _cClass(new PhysicsComponent());

    _gameObject.addComponent(_cClass);
    _gameObject.addComponent(_aClass);
    _gameObject.addComponent(_bClass);
    
    //_gameObject.addComponent(make_shared<PhysicsComponent>());
    //_gameObject.addComponent(make_shared<TransformComponent>());
    //_gameObject.addComponent(make_shared<MovementComponent>());

    _gameObject.updateComponents();

    return 0;
}