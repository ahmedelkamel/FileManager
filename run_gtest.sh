#!/bin/bash

# Generate config files into the build dir
cmake -B /home/$USER/code/ResourceManager/build -S /home/$USER/code/ResourceManager/
# Build the project given the config specified in build dir
if cmake --build /home/$USER/code/ResourceManager/build; then
    # Run the executable
    /home/$USER/code/ResourceManager/build/test/test_runner
fi
