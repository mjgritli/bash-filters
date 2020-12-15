# bash-filters
Bash scripts to filter output like cisco iOS

These bash scripts are made to memic some Cisco iOS fliters to make it easier to use the same commands everywhere.

## inc
This is the include command, it searches for match in lines to print, it also accepts regex in qoutes, or simple string without qoutes
- usage:
```bash
cat file | inc remote # without regex
cat file | inc "ip|ipv6" # could accept regex
## OR via stdin
inc "remote" fil1 file2 ... filen
```
## exc
This is the execlude command, this will print all lines that do not match the pattern, it also accepts regex in qoutes, or simple string without qoutes
- usage:
```bash
cat file | exc remote # without regex
cat file | exc "ip|ipv6" # could accept regex
## OR via stdin
exc "remote" fil1 file2 ... filen
```

 ## beg
This is the Begin command, where the script will run sed command and and drop all lines before match phrase
- usage:
```bash
cat file | beg remote # could accept regex
```
 ## unt
This is Until, where this script will run sed command and quit at match phrase, its not there in Cisco iOS, but I think its cool to stop where ever you want
- usage:
```bash
cat file | unt remote # could accept regex
```

## get-col
This script helps you print a column with awk by passing column number and field seperator.

### Options
- -c specifies column number, 1 is default
- -s specifies the field separator, default is space/tab
- -h print this help guide

### Usage
Piping
```bash
cat file | get-col # first column, space/tab seperated
cat file | get-col -c 2 # second column, space/tab seperated
cat file | get-col -c 2 -s ':' # second column, seperated with :
## Or via stdin
get-col file1 file2 filen
get-col -c 2 file1 file2 filen
get-col -c 2 -s ':' file1 file2 filen
```