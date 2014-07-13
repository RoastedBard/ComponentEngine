#include "GameObject.h"
#include <iostream>

GameObject::GameObject()
{
}

GameObject::~GameObject()
{
    cout<<"~Destroying GameObject with adress: "<<this<<endl;
}

shared_ptr<IComponent> GameObject::getComponent(unsigned id)
{
    for(size_t i = 0; i < _componentArray.size(); ++i)
    {
        if(_componentArray[i]->getId() == id)
            return _componentArray[i];
    }

    return nullptr;
}

void GameObject::addComponent(shared_ptr<IComponent> component)
{
    //component->setOwner(this);
    
    _componentArray.push_back(component);
    _componentArray.back()->setOwner(this);
}

void GameObject::updateComponents()
{
    for(size_t i = 0; i < _componentArray.size(); ++i)
    {
        _componentArray[i]->update();
    }
}

