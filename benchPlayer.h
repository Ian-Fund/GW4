//
// Created by mathbot on 2/13/18.
//

#ifndef GW4_BENCHPLAYER_H
#define GW4_BENCHPLAYER_H


 //doubly linked list
#include "Player.h"
#include "node.h"

class benchPlayer  {
    node *head;
    node *tail;
    void addPlayer(node *player, bool something);
    node *removePlayer(bool something);



};



#endif //GW4_BENCHPLAYER_H
