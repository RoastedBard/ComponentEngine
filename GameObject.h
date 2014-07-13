#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_

#include <vector>

#include "IComponent.h"

using namespace std;

class GameObject
{
public:
    GameObject();
    ~GameObject();

public:
    shared_ptr<IComponent> getComponent(unsigned id);
    void addComponent(shared_ptr<IComponent> component);
    void updateComponents();

private:
    vector<shared_ptr<IComponent>> _componentArray;
};

#endif