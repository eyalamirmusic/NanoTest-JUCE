# NanoTest + JUCE Example

An example project showing how to use [NanoTest](https://github.com/eyalamirmusic/NanoTest) with [JUCE](https://github.com/juce-framework/JUCE). Both libraries are fetched automatically via CMake's FetchContent.

This project demonstrates how to set up a custom `main()` that initialises JUCE's message thread, allowing tests to dispatch and process async messages. It includes tests against a couple of JUCE's built-in modules (`juce_core`, `juce_events`) as well as a custom JUCE-style module with its own test target.

In JUCE, the recommended approach is to keep most of your application logic in custom modules rather than directly in plugin or app code. This makes your code easier to test in isolation — each module can have its own lightweight test target, as shown here.

## Building and Running Tests

```bash
cmake -B build
cmake --build build
ctest --test-dir build
```

For verbose output:

```bash
ctest --test-dir build --output-on-failure
```

To run a specific test:

```bash
ctest --test-dir build -R "TickCounter"
```
