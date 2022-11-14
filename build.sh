echo 'build main: 1'
echo 'build test: 2'
read input
if test $input -eq 1
then
    g++ ./src/*.cc ./src/*.c -I include -I Engine -lglfw 
elif test $input -eq 2
then
    g++ ./test/*.cc ./src/*.c -I include -I Engine -I test -lglfw
fi
