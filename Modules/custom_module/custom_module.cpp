#include "custom_module.h"

namespace CustomModule
{

void TickCounter::start(int intervalMs)
{
    startTimer(intervalMs);
}

void TickCounter::stop()
{
    stopTimer();
}

int TickCounter::getTickCount() const
{
    return tickCount;
}

void TickCounter::timerCallback()
{
    ++tickCount;
}

} // namespace CustomModule
