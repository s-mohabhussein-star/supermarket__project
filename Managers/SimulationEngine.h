#ifndef SIMULATIONENGINE_H
#define SIMULATIONENGINE_H

// This module is mainly for Checkpoint 2.
// Checkpoint 1 should finish the classes, templates, and file loading first.
class SimulationEngine
{
public:
    void run();
    // TODO: implement the required order of operations at every timestamp:
    // 1. finish services and free counters/start breaks
    // 2. end breaks and open counters
    // 3. execute all events at this timestamp in input order
    // 4. automatic escalation
    // 5. assign available counters (Express customers first)
};

#endif
