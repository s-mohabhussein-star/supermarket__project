#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <string>
#include "../DataStructures/DynamicArray.h"
#include "../Models/Counter.h"
#include "../Models/Event.h"
#include "../Models/Product.h"
#include "../Models/Utilities.h"

using std::string;

class FileManager
{
public:
    // Checkpoint 1 core responsibility:
    // read timing settings, counters, initial products, and timestamp-ordered events.
    bool loadInputFile(const string& fileName,
                       Utilities& settings,
                       DynamicArray<Counter*>& counters,
                       DynamicArray<Product*>& products,
                       DynamicArray<Event*>& events);
};

#endif
