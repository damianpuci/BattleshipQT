#include "field.h"



Field::Field()
{
    this->xPosition=0;
    this->yPosition=0;
    this->fieldState=WATER;
}


Field::Field(int x, int y)
{
    this->xPosition=x;
    this->yPosition=y;
    this->fieldState=WATER;
}
