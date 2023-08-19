#!/bin/bash

# Generate config files into the build dir
cmake -B /home/$USER/code/gtest/build -S /home/$USER/code/gtest/c
# Build the project given the config specified in build dir
if cmake --build /home/$USER/code/gtest/build; then
    # Run the executable
    /home/$USER/code/gtest/build/test/test_runner
fi
