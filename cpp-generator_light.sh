#!/usr/bin/env bash

_42_HEADER=false
_COPLIEN=false

function	usage()
{
	printf "usage: $(basename $0) [-c] ClassName ..\n\n"
	printf 'flags:\n'
	printf -- '-c   use Coplien form\n'
	exit 1
}

function	createCPP()
{
	# File creation
	FILE="$NAME.cpp"
	rm -rf $FILE
	touch $FILE

	# Fill file
	printf "#include \"%s.hpp\"\n\n" $NAME >> $FILE
	printf "%s::%s() \n{}\n\n" $NAME $NAME >> $FILE
	printf "%s::~%s() \n{}\n" $NAME $NAME >> $FILE

	# Insert Coplien's Form
	if $_COPLIEN; then
		printf "\n" >> $FILE
		printf "%s::%s(const %s &copy) \n{\n" $NAME $NAME $NAME >> $FILE
		printf "  *this = copy;\n" >> $FILE
		printf "}\n\n" >> $FILE
		printf "%s  &%s::operator=(const %s &copy) \n{\n" $NAME $NAME $NAME >> $FILE
		printf "  return (*this);\n" >> $FILE
		printf "}\n" >> $FILE
	fi
}

function	createHPP()
{
	# File creation
	FILE="$NAME.hpp"
	rm -rf $FILE
	touch $FILE

	# Insert 42 Header
	if $_42_HEADER; then
		42Header
	fi

	printf "#ifndef %s_HPP\n" $NAME_UPPER >> $FILE
	printf "# define %s_HPP\n\n" $NAME_UPPER >> $FILE
	printf "# include <iostream>\n\n" >> $FILE
	printf "class %s {\n" $NAME >> $FILE
	printf " public:\n" >> $FILE
	printf "  %s();\n" $NAME >> $FILE
	if $_COPLIEN; then
		printf "  %s(const %s &copy);\n" $NAME $NAME >> $FILE
	fi
	printf "  ~%s();\n" $NAME >> $FILE

	if $_COPLIEN; then
		printf "  %s &operator=(const %s &copy);\n" $NAME $NAME >> $FILE
	fi

	printf "\n private:\n" >> $FILE
	printf "};\n\n" >> $FILE
	printf "#endif\n" >> $FILE
}


if [ ! $1 ]; then
	usage
fi

# Parse options
while getopts 'hca' OPTION; do
	case "$OPTION" in
		h)
			h=${OPTARG}
			_42_HEADER=true
		;;
		c)
			c=${OPTARG}
			_COPLIEN=true
		;;
		a)
			a=${OPTARG}
			_COPLIEN=true
			_42_HEADER=true
		;;
		?)
			echo
			usage
		;;
	esac
done
shift $((OPTIND -1))

# Iterate through arguments
for arg in "$@"
do
	# Variables
	NAME=$arg
	NAME_UPPER=$(echo $NAME | tr '[:lower:]' '[:upper:]')
  if [ ! $NAME = "main" ]; then
	  createCPP
	  createHPP
  fi
done

