#ifndef UTILITIES_H
#define UTILITIES_H

// Timing constants read from the input file.
// AutoE is also read from the input file after the counter records.
class Utilities
{
public:
    int paymentDuration;          // PAY
    int baggingDuration;          // BAG
    int expressPerItemDuration;   // PE
    int standardPerItemDuration;  // PS
    int autoEscalationTime;       // AutoE

    Utilities()
        : paymentDuration(0), baggingDuration(0),
          expressPerItemDuration(0), standardPerItemDuration(0),
          autoEscalationTime(0) {}
};

#endif
