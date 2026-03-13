juce_add_console_app(CoreTests PRODUCT_NAME "CoreTests" VERSION 0.1.0)
nano_setup_target(CoreTests SOURCES CoreTests.cpp TARGETS juce_core)

juce_add_console_app(EventTests PRODUCT_NAME "EventTests" VERSION 0.1.0)
target_compile_definitions(EventTests PRIVATE JUCE_MODAL_LOOPS_PERMITTED=1)
nano_setup_target(EventTests SOURCES EventTests.cpp TARGETS juce_events)
