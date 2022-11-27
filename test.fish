#!/usr/bin/env fish

# The # must be replaced by a number such as 1,2,3,...

set IN ./testdata/*.in
set OUT ./testdata/*.out
set TESTS (count $IN)

# Compiling option
set CPP "g++ -O2 -w -lm" # C++

function execute 
    for i in $TESTS
        echo $i
        echo ./tests/$i.out
    end 
end 

if test (count $argv) -lt 1
  echo "ℹ️ Usage: ./test <source-code>"
else if not test -d "./testdata"
    echo "⛔ Missing testdata folder! Create one!"
else if test (count $IN) -ne (count $OUT)
    echo "⛔ Number of outputs must be equal to the number of inputs"
else 
    execute
end

