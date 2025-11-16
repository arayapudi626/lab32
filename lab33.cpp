#include <iostream>
#include <cstdlib>
#include <ctime>
#include <deque>
#include "Car.h"
using namespace std;

const int CAR = 2;
const int LANES = 4;

void printLane(deque<Car>& lane){
    if(lane.empty()){
        cout << "empty\n";
        return;
    }
    for (int i = 0; i < lane.size(); i++){
        lane[i].print();
        }
    }


int main(){
//milestone 1:
srand(time(0));
//array of deque: milestone 2
deque<Car> lanes[LANES];

//milestone 3: 
for (int i = 0; i < LANES; i++){
    for (int j = 0; j < CAR; j++){
        lanes[i].push_back(Car());
    }
}

cout << "Initial queue: " << endl;
for (int i = 0; i < LANES; i++){
    cout << "Lane" << (i+1) <<": ";
    printLane(lanes[i]);
}
cout << endl;

//Milestone 4:
for (int t = 1; t <= 20; t++){
    cout <<"Time: " << t << endl;

    for (int i = 0; i < LANES; i++){
        if (lanes[i].empty()) { //50/50 chance new car joins
            if (rand() % 2 == 1) {
                Car c;
                cout << "Lane: " << (i+1) << " Joined lane: ";
                c.print();
                lanes[i].push_back(c);
            }
        }
        else {
            int r = rand() % 100;

            if (r < 46){
                cout << "Lane: " << (i+1) << " Paid: ";
                lanes[i].front().print();
                lanes[i].pop_front();
            }

            else if(r < 46+39) {
                Car c;
                cout << "Lane: " << (i+1) << " Joined: ";
                c.print();
                lanes[i].pop_back();
            }
            else {
                
            }

        }
        }
    }









}


while(!tollBooth.empty()){
    int random = rand() % 100;

    if (random < 55){
        cout << "Time: " << time << " Operation: Car paid: ";
        tollBooth.front().print();
        tollBooth.pop_front();
    }
    else{
        Car newCar;
        cout << "Time: " << time << " Operation: Joined lane: ";
        newCar.print();
        tollBooth.push_back(newCar);
    }

//print
cout << "Queue: " << endl;
if (!tollBooth.empty()) {
    for (int i = 0; i < tollBooth.size(); i++){
        tollBooth[i].print();
    }
} else {
    cout << "Empty" << endl;
}
cout << endl;
time++;


}
}
