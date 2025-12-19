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
  int price_cents;
  string type;
};


int main(){
  cout << "Welcome to Hotel Management System \n";
  cin.get();

// vector is also a data strucwture from the Standard Library that stores a collection of elements similar to an array but more flexible // sintaxis es vector DATA TYPE y luego un nombre
  vector<Room> rooms;

// aqui utilizamos el molde para crear habitaciones
  Room room_1 = {122, true, 2020, "basic" };

  Room room_2 = {123, false, 4020, "medium"};

  Room room_3 = {124, true, 5020, "Large"};

  rooms.push_back(room_1);
  rooms.push_back(room_2);
  rooms.push_back(room_3);

  //  formatea los precios con 2 decimales
// setprecision() NO cambia el número
// solo cambia cómo se muestra
  cout << fixed << setprecision(2);

  for (int i = 0; i < rooms.size(); i++)
  {
    cout << "Room number: " << rooms[i]. room_number << "\n";
    cout << "Status: " << rooms[i].available << "\n";
    cout << "Price: $" << rooms[i].price_cents / 100.0<< "\n";
    cout << "Type: " << rooms[i].type << "\n";
    cout << "-----------------------------\n";
  }

int availablecount = 0;

for (int i = 0; i < rooms.size(); i++)
{
  if (rooms[i].available)
  {
    // here we count the rooms available for every pass acumulamos 
    availablecount++;
  }
}
cout << "Habitaciones disponibles: " << availablecount << "\n";

int room_number;

cout << "What room number would you like? ";
cin >> room_number;

cout << room_number << "\n";

for (int i = 0; i < rooms.size(); i++)
{
  if (room_number == rooms[i].room_number)
  {
    cout << "Room available"<< "\n";

  } else {
    cout << "Room not available" << "\n";
  }
  return 0;  
}


}