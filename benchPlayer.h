//
// Created by mathbot on 2/13/18.
//

#ifndef GW4_BENCHPLAYER_H
#define GW4_BENCHPLAYER_H


 //doubly linked list
#include "Player.h"
#include "node.h"

class benchPlayer  {
public:
    node *head=0;
    node *tail=0;
    void addPlayer(node *player, bool something);
    node *removePlayer(bool something);
    void fillBench(node *player);
    void print();



};



#endif //GW4_BENCHPLAYER_H
