//
// Created by mathbot on 2/13/18.
//

#include "courtPlayer.h"

void courtPlayer::addPlayer(node *player) {
    node *temp=player;
//    if(head == 0){
//        head = player;
//        player->next = player;
//        player->status ='C';
//        tail=player;
//    }
//    else{
//        //tail = getTail(); I don't think I need the getTail?
//        tail ->next = player;
//        player->next = head;
//        player->status ='C';
//        tail=player;
//    }

    //sort selection
    if(head==0){
        head = temp;
        temp->next = head;
        temp->previous = head;
        return;
    }
    else {
        node* cu=head;
        while(cu->next != head) {
            cu = cu->next;
        }
        cu->next = temp;
        temp->next = head;
        head->previous = temp;
        temp->previous = cu;
    }
}

    //sort here
    //selection sort for player number

void courtPlayer::sort_playernumber(int PlayerNumber) {
    int temp;
    node *previous, *cu;
    //*q and *r//cu = current
    previous = head;
    for (int i = 0; i < PlayerNumber - 1; i++) {
        cu = previous;
        for (int j = i + 1; j < PlayerNumber; j++) {
            if (previous->player.number > cu->player.number) {
                //need to define these in player.cpp = head.getNumber, head.getNumber
                temp = previous->player.number;
                previous->player.number = cu->player.number;
                cu->player.number = temp; }
            cu = cu->next; }
        previous= previous->next;
    }

}

//    node* cur = head;
//    node* last = head;
//    if(temp->player.number < head->player.number){
//        temp->next  = head;
//        temp->previous = head->previous;
//        head->previous = temp;
//        head = temp;
////        while(cur->next!=head){
////            cur = cur->next;
////        }
////        cur->next = temp;
////        head = temp;
//        return;
//    }
//    else {
//        cur = cur->next;
//        while (temp->player.number > cur->player.number && cur->next != head) {
//            cur = cur->next; // pointing to the next one
//        }
//
//        if(temp->player.number < cur->player.number) {
//            temp->next=cur;
//            temp->previous = cur->previous;
//            cur->previous->next = temp;
//            cur->previous = temp;
//        }
//        if(cur->next == head) {
//            temp->next = cur->next;
//            temp->previous = cur;
//            cur->next = temp;
//            head->previous = temp;
//        }

//        temp->next = cur;
//        last->next = temp;




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
node *courtPlayer::removePlayer(node *oldest) {
    node *cur = oldest;
    while  (cur-> next != oldest){
        cur = cur->next;
    }
    node* temp = cur->next;
    cur->next = cur->next->next;
    return temp;



}

void courtPlayer::print() {
    node *temp = head;
    for (int i = 0; i < 5; ++i) {
        cout<<temp->player.number<<" "<<temp->player.age<<endl;
        temp = temp->next;
    }
}