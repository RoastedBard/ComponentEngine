#include "TransformComponent.h"
#include "Enums.h"
#include <iostream>

TransformComponent::TransformComponent(void)
{
    _id = COMPONENT_TRANSFORM;
    x = 0;
    y = 0;
}

TransformComponent::~TransformComponent(void)
{
    cout<<"~Destroying TransformComponent\n";
}

void TransformComponent::update()
{
    cout<<"TransformComponent updating\n";

    cout<<"TransformComponent: trComp.x = "<<x<<endl;
    cout<<"TransformComponent: trComp.y = "<<y<<endl;
}