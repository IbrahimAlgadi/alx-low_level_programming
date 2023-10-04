echo "Compile"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-strtow.c -o strtow
echo "Result 1"
./strtow
echo "Result 2"
./strtow | cat -e
