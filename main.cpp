#include <iostream>
using namespace std;

class car{
 //Access Modifier
 public:
    //Data Variables
      string name;
      int modelyear;
      int topspeed;
    //Functions
      void runstatus() {
        cout << "The car named " << name << " is running." << endl;
      }
      void speed() {
        cout << name << " is running at a speed of 100 km/h" << endl;
      }
    //Default Constructor
      car()
      {
        this->name = "";
        this->modelyear = 0;
        this->topspeed = 0;
        cout << "Calling Default Constructor..." << endl;
      }
    //Parameterized Constructor 1
      car(string name, int modelyear, int topspeed) {
        this->name = name;
        this->modelyear = modelyear;
        this->topspeed = topspeed;
        cout << "Calling Parameterized Constructor 1..." << endl;
      }
    //Copy Constructor
      car(car& Fortuner) {
        this->name = Fortuner.name;
        this->modelyear = Fortuner.modelyear;
        this->topspeed = Fortuner.topspeed;
        cout << "Calling Copy Constructor..." << endl;
      }

};
int main() {
  //Here Default Constructor is calledas no paramteres are passed
  //Making Object Scorpio
   car Scorpio;

  //Initializing the data variables
   Scorpio.name = "Scorpio" ;
   Scorpio.modelyear = 2023;
   Scorpio.topspeed = 180;

  //Printing the values of the data members
   cout << "Name of the car is : " << Scorpio.name << endl;
   cout << "Model year of the car is : " << Scorpio.modelyear << endl;
   cout << "Top Speed of the car is : " << Scorpio.topspeed << endl;

  //Calling Functions
   Scorpio.runstatus();
   Scorpio.speed();

  //Calling Parameterized Constructor
   car Fortuner("Fortuner", 2023, 180);

  //Calling Copy Constructor
  car Fortuner2(Fortuner);

}