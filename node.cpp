//
// Created by mathbot on 2/14/18.
//

#include "node.h"



node::node(int age, int number){
    Player(age, number);
    status = 'B';
    next = 0;
    previous = 0;
}
node::~node(){
    delete  next, previous;
}