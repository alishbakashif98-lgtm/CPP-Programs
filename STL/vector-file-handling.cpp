/*
Program Name: Vector File Handling in C++

Definition:
File handling in C++ allows us to store and retrieve data from files.
A vector is used to dynamically store multiple objects.

Description:
- A class Item is created with name, price, and quantity.
- A vector is used to store multiple items dynamically.
- Data is written to a file and then read back using file handling.
*/

#include<iostream>
#include<fstream>
#include<vector>
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
    vector<Item> items;
    int n;

    cout << "Enter number of items: ";
    cin >> n;

    Item temp;

    // Taking input using vector
    for(int i = 0; i < n; i++)
    {
        cout << "Enter name, price and quantity: ";
        cin >> temp.name >> temp.price >> temp.quantity;
        items.push_back(temp);
    }

    // Writing to file
    ofstream fout("items.txt");

    for(auto x : items)
    {
        fout << x.name << " "
             << x.price << " "
             << x.quantity << endl;
    }

    fout.close();

    cout << "\nData stored in file.\n";

    // Reading from file
    ifstream fin("items.txt");

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