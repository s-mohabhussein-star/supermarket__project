#ifndef REPORTMANAGER_H
#define REPORTMANAGER_H

#include <string>
using std::string;

// Checkpoint 2: write customer results, operation log, sort reports,
// and final statistics in the exact required output format.
class ReportManager
{
public:
    bool writeOutput(const string& outputFileName);
};

#endif
