#!/bin/bash

# default input and output file names
input_file="input.txt"
output_file="out.dot"
verbose=0

# parse command line arguments
while [[ $# -gt 0 ]]
do
    key="$1"

    case $key in
        -i|--input)
            input_file="$2"
            shift
            shift
            ;;
        -o|--output)
            output_file="$2"
            shift
            shift
            ;;
        --verbose)
            verbose=1
            shift
            ;;
        clean)
            make clean
            exit 0
            ;;
        --help)
            echo "Usage: $0 [options]"
            echo "Options:"
            echo "-i, --input [file]     Input file (default: input.txt)"
            echo "-o, --output [file]    Output file (default: output.dot)"
            echo "--verbose              Generate verbose output"
            echo "clean                  Remove generated files"
            exit 0
            ;;
        *)
            echo "Unknown option: $key"
            exit 1
            ;;
    esac
done

# generate parser.tab.c and parser.tab.h files with -v option if verbose flag is set
if [[ $verbose -eq 1 ]]; then
    bison -d -t -v parser.y
else
    bison -d -t parser.y
fi

# generate executable
make

# run myASTGenerator with input and output file names
./myASTGenerator "$input_file" "$output_file"


echo "AST generated successfully in $output_file."
