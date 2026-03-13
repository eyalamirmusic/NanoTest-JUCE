#include <NanoTest/NanoTest.h>
#include <juce_events/juce_events.h>

using namespace nano;

auto messageThreadTest = test("callAsync dispatches on message thread") = []
{
    bool called = false;

    if (auto* mm = juce::MessageManager::getInstance())
    {
        mm->callAsync([&] { called = true; });
        mm->runDispatchLoopUntil(1);
    }

    check(called);
};

int main(int argc, char* argv[])
{
    auto init = juce::ScopedJuceInitialiser_GUI();
    return run(argc, argv);
}
