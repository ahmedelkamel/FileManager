#!/bin/bash

# Generate config files into the build dir
cmake -B /home/$USER/code/FileManager/build -S /home/$USER/code/FileManager/
# Build the project given the config specified in build dir
if cmake --build /home/$USER/code/FileManager/build; then
    # Run the executable
    /home/$USER/code/FileManager/build/test/test_runner
fi
