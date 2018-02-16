#include <iostream>
using namespace std;
#include "Player.h"
#include "node.h"
#include "benchPlayer.h"
#include "courtPlayer.h"
#include <ctime>

void minutes_sort(Player arr[]);
void print_age(Player arr[]);
void print_minutes(Player arr[]);
void age_sort(Player arr[]);
int main() {
    srand(time(NULL));
    Player lockerRoom[12];
    float totalTime;
    benchPlayer bench;
    courtPlayer court;
    for (int i = 0; i < 12; ++i) {
        lockerRoom[i] = Player(rand() % 25 + 20, i + 1); // this creates 12 players, and puts them in lockerRoom. I need to get them in nodes from here
    }


    int players_standing=12;
    while(players_standing > 0) {
        int node_to_use = rand() % players_standing;
        node* player = new node(lockerRoom[node_to_use].age,lockerRoom[node_to_use].number);

        bench.fillBench(player);  // does this work?

        for(int i=node_to_use;i<players_standing-1;i++){
            lockerRoom[i] = lockerRoom[i+1];
        }
        players_standing--;
    }
    //bench.print();
    for (int j = 0; j < 5; ++j) {
        court.addPlayer(bench.removePlayer(true));

    }
    cout<<endl;
    court.print();
    node *oldest =court.findOldest();
    float oldestTime = court.findTime(oldest);
    cout<<oldestTime;

    node *beingRemovedFromCourt;
    bool something = true;
    while(totalTime < 48) {
        if (oldestTime > 48 - totalTime) {
            cout<< 48-totalTime<<endl;
            court.addTime(48 - totalTime);
            totalTime += 48 - totalTime;
        }
        else {
            totalTime += oldestTime;
            court.addTime(oldestTime);
            beingRemovedFromCourt = court.removePlayer(oldest);
            cout<<court.removePlayer(oldest)->player.age;
            court.addPlayer(bench.removePlayer(something));
            bench.addPlayer(beingRemovedFromCourt,something);
            something = !something;
        }

        node *oldest = court.findOldest();
        oldestTime = court.findTime(oldest);
    }

//    for (int k = 0; k < 5; ++k) {
//        node *oldest = court.findOldest();
//        bench.addPlayer(court.removePlayer(oldest),something);
//
//    }
  //  node *end = bench.head;
//    for (int l = 0; l < 12; ++l) {
//        lockerRoom[l] = end->player;
//        end = end->next;
//    }
//    minutes_sort(lockerRoom);
//    print_minutes(lockerRoom);
    //print age
    //sort number
    //print number
    //print all
    return 0;

}
void print_age(Player arr[]){
    for (int i = 0; i < 12; i++)
        cout << arr[i].age << " " ;
}


void print_minutes(Player arr[]){
    for (int i = 0; i < 12; i++)
        cout << arr[i].minutes << " " ;
}

//Number of minutes played - report 1
//desc.
void minutes_sort(Player arr[]){ //int n = size of the array
    for(int i = 12; i > 0; i--){
        int minIndex = i;
        for (int j = i; j > 0; j--){
            if(arr[j].minutes > arr[minIndex].minutes){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    //SYNTAX - ENDL
    //print_minutes(arr); Move this into main
}

//Age of minutes played - report 2
//asc.
void age_sort(Player arr[]) { //int n = size of the array
    for (int i = 12; i < 0; i++) {
        int minIndex = i; //index
        for (int j = i; j > 0; j++) {
            if (arr[j].age < arr[minIndex].age) { //POSITION FOR IT TO LOOK AT, ACTUAL FUNCTION
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }

}