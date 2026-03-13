#include <NanoTest/NanoTest.h>
#include <custom_module/custom_module.h>

using namespace nano;

auto tickCounterTest = test("TickCounter increments on timer") = []
{
    auto counter = CustomModule::TickCounter();
    counter.start(10);

    juce::MessageManager::getInstance()->runDispatchLoopUntil(100);

    counter.stop();
    check(counter.getTickCount() > 0);
};

int main(int argc, char* argv[])
{
    auto init = juce::ScopedJuceInitialiser_GUI();
    return run(argc, argv);
}
