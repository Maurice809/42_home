# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    map.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mort0707 <thomas.moret@xfk48.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 00:51:23 by mort0707          #+#    #+#              #
#    Updated: 2022/05/20 04:23:49 by mort0707         ###   Lausanne.ch        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
rm game48.ber >> /dev/null
echo "-------------------------------"
echo "| GENERATEUR DE MAP "SO LONG"   |"
echo "-------------------------------"

echo " Colonne : $1 Ligne : $2"
echo "-------------------------------"
r=$[$1-2]
rr=$[$2-2]

p=$(( 2 + $RANDOM % $r ))
pp=$(( 2 + $RANDOM % $rr ))

e=$(( 2 + $RANDOM % $r ))
ee=$(( 2 + $RANDOM % $rr ))

i="0"
ii="2"

while [ $i -lt $1 ]
do
	line+="1"
	i=$[$i+1]
done

echo $line >> tempo.ber
i="2"
line="1"

while [ $ii -lt $2 ]
do
	while [ $i -lt $1 ]
	do
		if [[ $i -eq $p && $ii -eq $pp ]]
		then
			line+="P"
		elif [[ $i -eq $e && $ii -eq $ee ]]
		then
			line+="E"
		elif [[ $i -eq 11 && $ii -eq 11 ]]
		then
			line+="C"
		elif [[ $i -eq 12 && $ii -eq 12 ]]
		then
			line+="1"
		else
			o=$(( 1 + $RANDOM % 10 ))
		if [[ $o -eq 4 ]]
		then
			line+="C"
		elif [[ $o -eq 3 || $o -eq 6 || $o -eq 9 ]]
		then
			line+="1"
		else
			line+="0"
		fi
		fi
		i=$[$i+1]
	done
	line+="1"
	i="2"
	echo $line >> tempo.ber
	line="1"
	ii=$[$ii+1]
done
i="1"
while [ $i -lt $1 ]
do
line+="1"
i=$[$i+1]
done
echo $line >> tempo.ber
cat tempo.ber
cat tempo.ber | tr "\n" "$" | sed 's/.$//' | tr "$" "\n" >> game48.ber
rm tempo.ber
echo "-------------------------------"
echo "|    MADE WITH LOVE BNK 48    |"
echo "-------------------------------"
