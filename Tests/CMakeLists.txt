project(Tests VERSION 0.1.0)

juce_add_console_app(CoreTests NEEDS_CURL TRUE)
nano_setup_target(CoreTests SOURCES CoreTests.cpp TARGETS juce_core)

juce_add_console_app(EventTests NEEDS_CURL TRUE)
target_compile_definitions(EventTests PRIVATE JUCE_MODAL_LOOPS_PERMITTED=1)
nano_setup_target(EventTests SOURCES EventTests.cpp TARGETS juce_events)

juce_add_console_app(CustomModuleTests NEEDS_CURL TRUE)
target_compile_definitions(CustomModuleTests PRIVATE JUCE_MODAL_LOOPS_PERMITTED=1)
nano_setup_target(CustomModuleTests SOURCES CustomModuleTests.cpp TARGETS custom_module)
