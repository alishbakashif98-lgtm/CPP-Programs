/*
Program Name: Serialization and Deserialization of Items in C++

Definition:
Serialization is the process of storing object data into a file,
and deserialization is the process of reading that data back.

Description:
- A class Item is created with name, price, and quantity.
- Multiple items are stored in a file.
- Data is then read back and displayed.
*/

#include<iostream>
#include<fstream>
using namespace std;

class Item
{
public:
    string name;
    float price;
    int quantity;
};

int main()
{
    Item items[3];

    // Taking input
    for(int i = 0; i < 3; i++)
    {
        cout << "Enter name, price and quantity: ";
        cin >> items[i].name >> items[i].price >> items[i].quantity;
    }

    // Writing to file (Serialization)
    ofstream fout("items.txt");

    for(int i = 0; i < 3; i++)
    {
        fout << items[i].name << " "
             << items[i].price << " "
             << items[i].quantity << endl;
    }

    fout.close();

    cout << "\nData stored in file.\n";

    // Reading from file (Deserialization)
    ifstream fin("items.txt");

    Item temp;

    cout << "\nData retrieved from file:\n";

    while(fin >> temp.name >> temp.price >> temp.quantity)
    {
        cout << "Name: " << temp.name
             << ", Price: " << temp.price
             << ", Quantity: " << temp.quantity << endl;
    }

    fin.close();

    return 0;
}