#include "MovementComponent.h"
#include "Enums.h"
#include <iostream>

MovementComponent::MovementComponent(void)
{
    _id = COMPONENT_MOVEMENT;
    velX = 0;
    velY = 0;
}


MovementComponent::~MovementComponent(void)
{
    cout<<"~Destroying MovementComponent\n";
}

void MovementComponent::update()
{
    cout<<"MovementComponent updating\n";
}