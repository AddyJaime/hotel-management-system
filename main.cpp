#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

/*
  Room represents a hotel room.
  A struct allows grouping different data types
  that describe a single entity.
*/
struct Room
{
    int room_number;      // unique room identifier
    bool available;       // true = available, false = occupied
    int price_cents;      // price stored in cents to avoid float errors
    string type;          // room type (basic, medium, large)
    string guest_name;
};

int main()
{
    cout << "Welcome to Hotel Management System\n";
    cin.get();

    /*
      Vector from the C++ Standard Library.
      Stores a collection of Room objects.
    */
    vector<Room> rooms;

    // Create rooms using the Room "mold"
    Room room1 = {122, true, 2020, "Basic"};
    Room room2 = {123, false, 4020, "Medium"};
    Room room3 = {124, true, 5020, "Large"};

    // Add rooms to the vector
    rooms.push_back(room1);
    rooms.push_back(room2);
    rooms.push_back(room3);
   

    /*
      Format output:
      - fixed: decimal notation
      - setprecision(2): always show 2 decimal places
      (this does NOT change the actual value)
    */
    cout << fixed << setprecision(2);

    // Display all rooms
    for (int i = 0; i < rooms.size(); i++)
    {
        cout << "Room number: " << rooms[i].room_number << "\n";
        cout << "Status: " << rooms[i].available << "\n";
        cout << "Price: $" << rooms[i].price_cents / 100.0 << "\n";
        cout << "Type: " << rooms[i].type << "\n";
        cout << "Guest" << rooms[i].guest_name << "\n";
        cout << "-----------------------------\n";
    }

    /*
      Count how many rooms are available
    */
    int available_count = 0;

    for (int i = 0; i < rooms.size(); i++)
    {
        if (rooms[i].available)
        {
            available_count++;
            cout << "Available room: " << rooms[i].room_number << "\n";
        }
    }

    cout << "Total available rooms: " << available_count << "\n";

    /*
      Ask user to select a room
    */
    int selected_room_number;
    string customer_name;
 
// osea yo quiero que la habitCION QUE EL CLIENTE SELELCIONO PERTENECEZA A ESE USARIO 




cout << "What room number would you like? \n";
cin >> selected_room_number;

cin.ignore();

cout << "What is your name: \n";
getline(cin ,customer_name);
    // todavia no se ha enconttado la habitacion
  bool room_found = false;

  for (int i = 0; i < rooms.size(); i++)
  {
    if (rooms[i].room_number == selected_room_number && rooms[i].available)
    {
// aqui marcamos la habitacion como ya no disponioble ya que el usuario la selecciono y luego mas abajo en la proxima variable le indicamos al codiog que ya la hbaitacion was found y cambiamos el estado
      rooms[i].available = false;
// store the customer's name inside the room that was just reserved
      rooms[i].guest_name = customer_name;
    // cambia el estado a true de que ya se encontro
    room_found = true;
    cout << "Room " << selected_room_number << " has been reserved \n";
    cout << "Guest " << rooms[i].guest_name << "\n";
    // cout << "Guest " << customer_name << "\n";
//  detiene el loop, si en la primera vuelta el program encontro la habitacion que el usuario buscaba  
break; 
    }
    
  }

  // pero si no se encuntra ninguna habiacion muestra esto
  if (!room_found)
  {
    cout << "Room not available or does not exist.\n";
  }

 /*
      Show remaining available rooms
    */
   cout << "\nRemaininh available rooms:\n";
   int remaining_available_count = 0;
   
   for (int i = 0; i < rooms.size(); i++)
   {
     // Count rooms that are available AND not the selected room
     if (rooms[i].available)
     {
       remaining_available_count++;
      //  rooms[i].available = false;
            cout << "Room: " << rooms[i].room_number << "\n";
        }
    }

    cout << "Remaining available rooms: "
         << remaining_available_count << "\n";

    return 0;
}
