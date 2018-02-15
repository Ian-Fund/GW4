//
// Created by mathbot on 2/13/18.
//

#ifndef GW4_COURTPLAYER_H
#define GW4_COURTPLAYER_H

#include "Player.h"
#include "node.h"
#include <stdio.h>
#include <iostream>


//circular list?
class courtPlayer : public Player{
public:
    node *head;
    node *tail;
    string status;
    void addPlayer(node *player);
    void removePlayer(node *player); // previous/next on removed players might use Player *player instead
    node *search(int age);
    node *findOldest();
    float findTime(node *oldest);
    void addTime(float time);


};


#endif //GW4_COURTPLAYER_H
