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
  bool available;
  float price;
  string type;
};


int main(){
  cout << "Welcome to Hotel Management System \n";
  cin.get();

// vector is also a data strucwture from the Standard Library that stores a collection of elements similar to an array but more flexible // sintaxis es vector DATA TYPE y luego un nombre
  vector<Room> rooms;

// aqui utilizamos el molde para crear habitaciones
  Room room_1 = {122, true, 20.20, "basic" };

  Room room_2 = {123, false, 40.20, "medium"};

  Room room_3 = {124, true, 50.20, "Large"};

  rooms.push_back(room_1);
  rooms.push_back(room_2);
  rooms.push_back(room_3);

  //  formatea los precios con 2 decimales
  cout << fixed << setprecision(2);

  for (int i = 0; i < rooms.size(); i++)
  {
    cout << "Room number: " << rooms[i]. room_number << "\n";
    cout << "Status: " << rooms[i].available << "\n";
    cout << "Price: $" << rooms[i].price << "\n";
    cout << "Type: " << rooms[i].type << "\n";
    cout << "-----------------------------\n";
  }

for (int i = 0; i < rooms.size(); i++)
{
  if (rooms[i].available)
  {
    cout << "Habitaciones disponibles: " << rooms[i].available << "\n";
    // return 0;
  }
}

int room_number;

cout << "What room number would you like? ";
cin >> room_number;

cout << room_number << "\n";

for (int i = 0; i < rooms.size(); i++)
{
  if (room_number == rooms[i].room_number)
  {
    cout << "Room found"<< "\n";
   return 0;
  } else {
    cout << "Room not found" << "\n";
  }
  
}


}