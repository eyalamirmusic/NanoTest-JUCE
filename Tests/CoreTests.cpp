#include <NanoTest/NanoTest.h>
#include <juce_core/juce_core.h>

using namespace nano;

auto stringTest = test("juce::String basics") = []
{
    auto hello = juce::String("Hello, JUCE!");
    check(hello.isNotEmpty());
    check(hello.contains("JUCE"));
    check(hello.length() == 12);
};

auto arrayTest = test("juce::Array basics") = []
{
    auto arr = juce::Array<int>();
    arr.add(1);
    arr.add(2);
    arr.add(3);

    check(arr.size() == 3);
    check(arr[0] == 1);
    check(arr.contains(2));
};

int main(int argc, char* argv[])
{
    return run(argc, argv);
}
