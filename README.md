# sample-eos-cpp-vscode
C++ Helloworld apps for EOS and generic c++ projects - includes vscode config files

#### Sample eos cpp project
- In eos-cpp directory
- Includes CMakeLists.txt that includes eos libraries (which must be installed via `make install` as described [here](https://github.com/EOSIO/eos/wiki/Local-Environment#install-the-executables) )
- Includes build script that outputs wasm and abi into dist directory

#### Sample generic cpp project
- In generic-cpp directory
- Includes build scripts to run and debug 

#### Install the following Visual Studio Code plug-ins
- C/C++
- CMake Tools
- WebAssembly (optional)