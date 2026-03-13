/*******************************************************************************
 BEGIN_JUCE_MODULE_DECLARATION

  ID:               custom_module
  vendor:           example
  version:          0.1.0
  name:             Custom Module
  description:      A simple custom JUCE module with a timer-based counter
  dependencies:     juce_events

 END_JUCE_MODULE_DECLARATION
*******************************************************************************/

#pragma once

#include <juce_events/juce_events.h>

namespace CustomModule
{

class TickCounter : juce::Timer
{
public:
    void start(int intervalMs);
    void stop();

    int getTickCount() const;

private:
    void timerCallback() override;

    int tickCount = 0;
};

} // namespace CustomModule
