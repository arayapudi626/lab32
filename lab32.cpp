#include <iostream>
#include <cstdlib>
#include <ctime>
#include <deque>
#include "Car.h"
using namespace std;

const int CAR = 2;
int main(){
//milestone 1:
srand(time(0));
deque<Car> tollBooth;

for (int i = 0; i < CAR; i++){
    tollBooth.push_back(Car());
}

cout << "Initial queue: " << endl;
for (int i = 0; i < tollBooth.size(); i++){
    tollBooth[i].print();
}

//milestone 2:

int time = 1;
while(tollBooth.empty()){
    int random = rand() % 100;

    if (random < 55){
        cout << "Time: " << time << "Operation: Car paid: ";
        tollBooth.front().print();
        tollBooth.pop_front();
    }
    if (random < 45){

    }
}



}
