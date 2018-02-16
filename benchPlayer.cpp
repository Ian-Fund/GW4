//
// Created by mathbot on 2/13/18.
//

#include "benchPlayer.h"

void benchPlayer::print() {
    node *temp = head;
    while(temp !=0){
        cout<<temp->player.number<<" "<<temp->player.age<<endl;
        temp = temp->next;
    }
}
void benchPlayer::addPlayer(node *player, bool something){ //this doesn't ever fill the bench up?
    if( something ){
        node *temp=tail;
        tail = player;
        tail ->next = 0;
        tail->previous = temp;
        temp ->next = player;
        player->status ='B';
    }
    else{
        node *temp = head;
        head = player;
        head->previous = 0;
        head->next = temp;
        temp ->previous = head;
        player->status ='B';
    }
}
void benchPlayer::fillBench(node *player){ // add at end of bench
    node *cu = head;
    node *temp = player;
    temp->next=0;
    if(head == 0){
        temp->previous = 0;
        head = temp;
        return;
    }
    else{
        while (cu->next != 0){
            cu = cu->next;
        }
        temp ->previous = cu;
        cu->next = temp;
    }
  tail = player;
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