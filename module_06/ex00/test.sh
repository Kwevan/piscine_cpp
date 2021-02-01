make re

NAME="convert"

echo ; echo "----------------"; echo 

function run()
{
	echo "./$NAME" $1
	./$NAME $1
	echo ; echo  "----------------"; echo
}


run "0"
run "nan"
run "42.0f"
run "2.3f"
run "97"
run "2147483647"
run "2147483648"
run "-2147483648"


echo './'$NAME '""' 
./$NAME ""
echo ; echo "----------------"; echo 

make fclean
