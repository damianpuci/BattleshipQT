#ifndef FIELD_H
#define FIELD_H


enum fieldStateEnum
{
    WATER,
    SHIP,
    SUNKEN
};

class Field
{
    int xPosition;
    int yPosition;
    fieldStateEnum fieldState;

public:
    Field();
    Field(int x, int y);
    void changeFieldState(fieldStateEnum state);
    fieldStateEnum getFieldState();
};

#endif // FIELD_H
