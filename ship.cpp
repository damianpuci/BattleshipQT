#include "ship.h"

Ship::Ship(shipTypeEnum shipType) :
    shipType(shipType),
    shipFields(nullptr)
{
    this->shipFields=new Field[shipType];
    //zmiana w kodzie
}
