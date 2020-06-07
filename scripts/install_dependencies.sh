#install dev software
apt-get install -qy make
apt-get install -qy gcc   
apt-get install -qy g++  
apt-get install -qy python3
apt-get install -qy python3-pip
pip3 install cmake
pip3 install conan

#verify software version
make --version
gcc --version
g++ --version
python3 --version
cmake --version
conan --version