#!/bin/bash

project=$(basename "$(pwd)")

git clone https://github.com/jadavmadhavkumar/Cpp_with_Linux.git

cd Cpp_with_Linux/Every_project

cp -r CMakeLists.txt build.sh change.py /home/madhav/Desktop/Dev/${project} 

cd ..
cd ..

mkdir source 
touch source/Main.cpp

chmod +x build.sh

python3 change.py

sudo rm -r Cpp_with_Linux  change.py

./build.sh

rm -r build.sh CMakeLists.txt

codelite ${project}.workspace & 
