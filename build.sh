echo 'build main: 1'
echo 'build imgui-test: 2'
echo "run: 0"
read input
if test $input -eq 1
then
    g++ -fPIC -shared Engine/**/*.cc Engine/**/*.c -I Engine/include -I Engine/include/imgui -I Engine -o build/libengine.so -lglfw
    g++ ./sandbox/*.cc -o build/sandbox -L ./build/ -I Engine -lengine 
elif test $input -eq 2
then
    g++ ./test/imgui-test.cc ./include/imgui/*.cpp ./src/glad.c -I include -I Engine -I test -I include/imgui -lglfw
elif test $input -eq 0
then
    export LD_LIBRARY_PATH=./build/
    ./build/sandbox
fi
