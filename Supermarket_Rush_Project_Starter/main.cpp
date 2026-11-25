#include <iostream>
#include "Models/Utilities.h"
#include "DataStructures/DynamicArray.h"
#include "Models/Counter.h"
#include "Models/Product.h"
#include "Models/Event.h"
#include "Managers/FileManager.h"

using namespace std;

int main()
{
    Utilities settings;

    DynamicArray<Counter*> counters;
    DynamicArray<Product*> products;
    DynamicArray<Event*> events;

    FileManager fileManager;

    // TODO: replace with the required input filename/argument handling.
    // This demonstrates the intended connection only.
    cout << "Supermarket Rush project starter" << endl;
    cout << "Next: implement FileManager and test loading." << endl;

    // Example later:
    // if (!fileManager.loadInputFile("input1.txt", settings,
    //                                counters, products, events))
    // {
    //     cerr << "Could not load input file." << endl;
    //     return 1;
    // }

    // TODO: define one clear owner for each allocated object and clean it up once.
    return 0;
}
