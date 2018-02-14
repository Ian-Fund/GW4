//
// Created by mathbot on 2/13/18.
//

#include "benchPlayer.h"


void benchPlayer::addPlayer(node *player, bool something){
    if( something ){
        node *temp=tail;
        tail = player;
        tail ->next = 0;
        tail->previous = temp;
        temp ->next = player;
    }
    else{
        node *temp = head;
        head = player;
        head->previous = 0;
        head->next = temp;
        temp ->previous = head;
    }
}
node *benchPlayer::removePlayer(bool something){
    node *temp;
    if(something){
        temp = tail->previous;
        tail ->previous = temp ->previous;
        temp -> previous->next = tail;
        temp ->next = 0;
        temp ->previous = 0;

    }
    else {
        temp = head ->next;
        head -> next = temp ->next;
        temp ->next ->previous = head;
        temp ->next = 0;
        temp ->previous = 0;
    }
    return temp;
}