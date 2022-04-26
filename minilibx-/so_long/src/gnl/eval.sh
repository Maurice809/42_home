# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    eval.sh                                            :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/01 03:41:29 by Maurice809        #+#    #+#              #
#    Updated: 2022/03/18 17:33:53 by tmoret           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash
# Nom du project
PROJECT=get_next_line

# Nom du testeur
FILE=get_next_line_eval
REPOS=https://github.com/Maurice809/get_next_line_eval

echo
echo "Bienvenue dans le $FILE !"
echo "------------------------------------"

if [ ! -f eval.sh ] ; then
    cd ..
fi

if [ -n "$1" ]; then
    repo="$1"
elif [ ! -d "$PROJECT" ] ; then
    read -p "Coller votre Git repository : " repo
fi
if [ ! -d "$PROJECT" ] ; then
        git clone $repo $PROJECT
fi

norminette $PROJECT
#sleep 10s

if [ ! -d "$FILE" ]; then
git clone $REPOS
fi

cd $FILE
./c.sh

while :
do
echo "[CTRL+C pour STOP]"
read -p "Refaire un test avec une autre taille de buffer ? " chiffre
#cd $FILE
./c.sh $chiffre
done
