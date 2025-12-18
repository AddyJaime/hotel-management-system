#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

// struct is a data Structure that allows you to store data of different types
// here Room is a mold to create a lot of rooms 
struct Room
{
  int room_number;
  string available;
  float price;
  string type;
};


int main(){
  cout << "Welcome to Hotel Management System \n";
  // cin.get();

// vector is also a data strucwture from the Standard Library that stores a collection of elements similar to an array but more flexible // sintaxis es vector DATA TYPE y luego un nombre
  vector<Room> rooms;

// aqui utilizamos el molde para crear habitaciones
  Room room_1 = {122, "Occupied", 20.20f, "basic" };

  Room room_2 = {123, "Available", 40.20f, "medium"};

  rooms.push_back(room_1);
  rooms.push_back(room_2);

  // 
  cout << fixed << setprecision(2);

  for (int i = 0; i < rooms.size(); i++)
  {
    cout << "Room number: " << rooms[i]. room_number << "\n";
    cout << "Status: " << rooms[i].available << "\n";
    cout << "Price: $" << rooms[i].price << "\n";
    cout << "Type: " << rooms[i].type << "\n";
    cout << "-----------------------------\n";
  }
  
  return 0;
}