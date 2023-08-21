#!/bin/bash
for source_file in *.c; do
    gcc -c -Wall -Werror -fpic "$source_file"
done

gcc -shared -o liball.so *.o

rm *.o

echo "Dynamic library liball.so created."

