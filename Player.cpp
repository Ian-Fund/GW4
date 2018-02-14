//
// Created by mathbot on 2/13/18.
//

#include "Player.h"

Player::Player(){
    age = 0;
    number = 0;
    minutes = 0.0;
}
Player::~Player(){

}
Player::Player(int age, int number){
    this->age = age;
    this->number = number;
    minutes = 0;

}
int Player::getAge(){
    return  age;
}
void Player::setAge(int age){
    this->age = age;
}
int Player::getNumber(){
    return  number;
}
void Player::setNumber(int number){
    this->number = number;
}