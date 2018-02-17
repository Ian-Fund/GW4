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
void benchPlayer::addPlayer(node *player) { //this doesn't ever fill the bench up?
    node *cur;
    node *tailcur;
    node *newNode;
    bool found;

    newNode = player;
    if(head == 0){
        head = player;
        tail = player;
        player->next = 0;
        player->previous = 0;
    }
    else{
        cur = head;
        while (cur ->next != 0 ){
            tailcur = cur;
            cur = cur->next;
        }
        cur->next = player;
        player->previous = cur;
        player->next = 0;
        tail = player;
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

//node *benchPlayer::removePlayer(bool something){
//    node *temp;
//    if(something){
//        temp = tail->previous;
//        tail ->previous = temp ->previous;
//        temp -> previous->next = tail;
//        temp ->next = 0;
//        temp ->previous = 0;
//
//    }
//    else {
//        temp = head ->next;
//        head -> next = temp ->next;
//        temp ->next ->previous = head;
//        temp ->next = 0;
//        temp ->previous = 0;
//    }
//    return temp;
//}

node *benchPlayer:: deletePlayer(){
    node *temp;
    temp = head;
    head = head->next;
    return temp;

}
