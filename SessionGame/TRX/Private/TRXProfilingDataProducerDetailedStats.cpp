#include "TRXProfilingDataProducerDetailedStats.h"

UTRXProfilingDataProducerDetailedStats::UTRXProfilingDataProducerDetailedStats() {
    this->StatsGroupsToRecord.AddDefaulted(4);
    this->SkipZeroStats = true;
}


