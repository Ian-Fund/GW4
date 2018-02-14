//
// Created by mathbot on 2/13/18.
//

#ifndef GW4_PLAYER_H
#define GW4_PLAYER_H


#include <iostream>
#include <iostream>
using namespace std;

class Player{
public:
    float minutes;
    Player();
    ~Player();
    Player(int age, int number);
    int getAge();
    void setAge(int age);
    int getNumber();
    void setNumber(int number);
protected:
    int number;
    int age;

};


#endif //GW4_PLAYER_H
