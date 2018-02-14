//
// Created by mathbot on 2/14/18.
//

#ifndef GW4_NODE_H
#define GW4_NODE_H

#include "Player.h"
class node {
public:
    char status;
    Player player;
    node *next;
    node *previous;
    //node();
    node(int age, int number);
    ~node();

};


#endif //GW4_NODE_H
