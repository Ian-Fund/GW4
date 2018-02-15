//
// Created by mathbot on 2/13/18.
//

#include "courtPlayer.h"

void courtPlayer::addPlayer(node *player) {
    node *temp=player;
    if(head == 0){
        head = player;
        player->next = 0;
    }
    else{
        tail = getTail();
        tail ->next = player;
        player->next = head;
    }


}

node* courtPlayer::findOldest() {
    node *cu = head;
    node *oldest = cu;
    int max = cu->player.age;
    for (int i = 0; i < 5; ++i) {
        if (cu->player.age > max){
            max = cu->player.age;
            oldest = cu;

        }
        cu = cu->next;


    }
    return oldest;
}
//node *theOldestPlayer = findOldest();

float courtPlayer::findTime(node *oldest) {
    float time = (oldest->player.age)*0.1;
    return  time;
}


//findTime(theOldestPlayer);

void courtPlayer::addTime(float time) {
    node *cu = head;
    for (int i = 0; i < 5; ++i) {
        cu->player.minutes = cu->player.minutes + time;
        cu = cu->next;

    }
}
// oldest = findOldest();
//removePlayer(oldest);
void courtPlayer::removePlayer(node *oldest) {
    free(oldest->player);


}