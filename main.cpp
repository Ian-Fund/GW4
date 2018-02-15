#include <iostream>
using namespace std;
#include "Player.h"
struct lockerRoom{
    int number;
    int age;
    float minutes;
};

int main() {
    lockerRoom lock [11];
    for(int i=0; i <12; i++){
        lock[i].number = i + 1;
        lock[i].age = rand()%25 + 20; //random player selected - between the age of 25 - 45
        lock[i].minutes = 0.0;
        cout << "Player number " << lock[i].number << "   Age" << lock[i].age << "   Minutes played" << lock[i].minutes <<endl;
    }
    return 0;
    //while loop - stop at 48 minutes played
}
void print_age(Player arr[]){
    for (int i = 0; i < 12; i++)
        cout << arr[i].age << " " ;
}

//void print_all(Player arr[]){
//    for (int i = 0; i < 12; i++)
//        cout << arr[i].all << " " ;
//}

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
   print_minutes(arr);
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
    print_age(arr);
}
