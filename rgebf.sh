#!/bin/sh


sudo chmod a+x RGEbrute

#set color
Color_Off='\033[0m'

BWhite='\033[1;37m'
BRed='\033[1;31m'
BBlue='\033[1;34m'
BGreen='\033[1;32m'

clear
echo "$BBlue"
echo "      _______   _______   _______   _______   _______"
echo "     /  __  /  /   ___/  /  ____/  /   _  /  /  ____/" 
echo "    / /__/ /  /   /     /  /___   /  /_/ /  /  /__"
echo "   / /  __/  /  _/__   /  ____/  /  ____/  /  ___/"
echo "  / / \ \   /  /_  /  /  /      /   _ \   /  /"
echo " / /   \ \ /      /  /  /____  /  /_/ /  /  /"
echo "/ /     \ \ _____/  /_______/ /______/  /__/$Color_Off"
echo "\n\t$BRed Create by$Color_Off : $BWhite Rovoaries G Estraiw$Color_Off"

echo "\n\t[Ex. /root/desktop/001.cap ]"
echo -n "\tPath handshake file: "
read handshake
echo -n "\tEnter Bssid : "
read bssid
echo -n "\tStart lenge : "
read start
echo -n "\tEnd lenge : "
read end

clear
echo "$BBlue"
echo "      _______   _______   _______   _______   _______"
echo "     /  __  /  /   ___/  /  ____/  /   _  /  /  ____/" 
echo "    / /__/ /  /   /     /  /___   /  /_/ /  /  /__"
echo "   / /  __/  /  _/__   /  ____/  /  ____/  /  ___/"
echo "  / / \ \   /  /_  /  /  /      /   _ \   /  /"
echo " / /   \ \ /      /  /  /____  /  /_/ /  /  /"
echo "/ /     \ \ _____/  /_______/ /______/  /__/$Color_Off"
echo "\n\t$BRed Create by$Color_Off : $BWhite Rovoaries G Estraiw$Color_Off"

echo "\n\t$BGreen[*] Infomation$Color_Off"
echo "\tPath handshake file path :$BBlue $handshake $Color_Off"
echo "\tEnter Bssid :$BBlue $bssid $Color_Off"
echo "\tStart lenge :$BBlue $start $Color_Off"
echo "\tEnd lenge :$BBlue $end $Color_Off"

echo "\t$BGreen[*] Check your information........."
sleep 5
echo "\t[!] Start now!$Color_Off"
sleep 2

./RGEbrute $start $end | aircrack-ng $handshake --bssid $bssid -w -
