# ReliableStack

Build target `debug-dump` to compile stack with debug dumps only.

Build target `debug-canary` to compile stack with canary memory protection and debug dumps.

Build target `debug-hash` to compile stack with hashes and canary memory protection and debug dumps.

You can also build target `main` to compile stack in release mode, but there are no actual unit tests yet. In `main.cpp` you can find something like a little example of stack usage.

To compile some other program using this library in release mode, use `-D DEBUG_LEVEL=0 -D NDEBUG` compiler flags.
