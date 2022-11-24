echo 'build main: 1'
echo 'build imgui-test: 2'
read input
if test $input -eq 1
then
    g++ ./src/*.cc ./include/imgui/*.cpp ./src/*.c -I include -I include/imgui -I Engine -lglfw 
elif test $input -eq 2
then
    g++ ./test/imgui-test.cc ./include/imgui/*.cpp ./src/glad.c -I include -I Engine -I test -I include/imgui -lglfw
fi
