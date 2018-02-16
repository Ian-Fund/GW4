//
// Created by mathbot on 2/14/18.
//

#include "node.h"



node::node(int age, int number){
    player.setAge(age);
    player.setNumber(number);
    status = 'B';
    next = 0;
    previous = 0; // these don't seem right? or is it right becacuse it's not in a list yet?
}

node::~node(){
    delete  next, previous;
}