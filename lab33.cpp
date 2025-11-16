#include <iostream>
#include <cstdlib>
#include <ctime>
#include <deque>
#include "Car.h"
using namespace std;

const int CAR = 2;
const int LANES = 4;

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
    lanes[i].print();
}

//milestone 2:

int time = 1;
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
