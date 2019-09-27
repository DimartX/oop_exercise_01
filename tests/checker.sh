#/usr/bin/env bash

num="$1"

for (( i = 3; i <= num; i++)) ; do
    filename="test_"$(printf "%02d" $i)".txt"
    ./gen.py > $filename
done

for test_file in $(ls "test"*".txt") ; do
    echo ${test_file}
    cat ${test_file}
    name=${test_file:0:7}
    ./tester.py < ${test_file} > ${name}.ans
    ../build/./main < ${test_file} > ${name}.test
    
    if ! diff -u ${name}.ans ${name}.test ; then
        echo "Failed"
    else
        echo "OK"
    fi
    rm -rf *.ans
done
   

