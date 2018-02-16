//
// Created by mathbot on 2/13/18.
//

#ifndef GW4_COURTPLAYER_H
#define GW4_COURTPLAYER_H

#include "Player.h"
#include "node.h"
#include <stdio.h>
#include <iostream>


class courtPlayer : public Player{
public:
    node *head=0;
    node *tail=0;
    string status;
    void addPlayer(node *player);
    node *removePlayer(node *player); // previous/next on removed players might use Player *player instead
    node *findOldest();
    float findTime(node *oldest);
    void addTime(float time);
    void print();


};


#endif //GW4_COURTPLAYER_H
