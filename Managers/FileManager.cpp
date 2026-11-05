#include "FileManager.h"
#include <fstream>
using std::ifstream;

bool FileManager::loadInputFile(const string& fileName,
                                Utilities& settings,
                                DynamicArray<Counter*>& counters,
                                DynamicArray<Product*>& products,
                                DynamicArray<Event*>& events)
{
    (void)settings; (void)counters; (void)products; (void)events;

    ifstream input(fileName.c_str());
    if (!input.is_open())
        return false;

    // TODO parsing sequence from the assignment:
    // 1) N PAY BAG PE PS
    // 2) N counter lines: TYP OT BA BD
    // 3) AutoE
    // 4) P and P product lines
    // 5) M and M event lines (events already sorted by timestamp)
    //
    // Important: C events have K cart lines, so allocate/read those lines.
    // Check every read and handle invalid input safely.
    input.close();
    return true;
}
