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

    cout << "What room number would you like? ";
    cin >> selected_room_number;

    cout << "Room has been reserved: " << selected_room_number << "\n";

    /*
      Count available rooms excluding the selected one
    */
    int remaining_available_count = 0;

    for (int i = 0; i < rooms.size(); i++)
    {
        // Count rooms that are available AND not the selected room
        if (rooms[i].available && rooms[i].room_number != selected_room_number)
        {
            remaining_available_count++;
            cout << "Available room: " << rooms[i].room_number << "\n";
        }
    }

    cout << "Remaining available rooms: "
         << remaining_available_count << "\n";

    return 0;
}
