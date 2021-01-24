#!/bin/sh

if [ ! -e megaphone ]
then
	make ; echo "\n\n"
fi
echo 'test 1 -> \033[0;33m ./megaphone "shhhhh... I think the students are asleep..."  \033[m'
printf "\t"
./megaphone "shhhhh... I think the students are asleep..."

echo 'test 2 -> \033[0;33m./megaphone Damnit " ! " "Sorry students, I thought this thing was off." \033[m'
printf "\t"
./megaphone Damnit " ! " "Sorry students, I thought this thing was off."

echo "test 3 -> \033[0;33m ./megaphone  \033[m"
printf "\t"
./megaphone
