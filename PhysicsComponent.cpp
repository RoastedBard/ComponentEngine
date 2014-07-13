#include "PhysicsComponent.h"
#include "Enums.h"
#include "TransformComponent.h"
#include "GameObject.h"
#include <iostream>

PhysicsComponent::PhysicsComponent(void)
{
    _id = COMPONENT_PHYSICS;
}


PhysicsComponent::~PhysicsComponent(void)
{
    cout<<"~Destroying PhysicsComponent\n";
}

void PhysicsComponent::update()
{
    cout<<"PhysicsComponent updating\n";

    shared_ptr<TransformComponent> trComp = static_pointer_cast<TransformComponent>(_owner->getComponent(COMPONENT_TRANSFORM));

    trComp->x += 3;
    trComp->y += 3;
}