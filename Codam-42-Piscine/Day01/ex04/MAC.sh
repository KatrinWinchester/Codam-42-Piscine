#/bin/sh
ifconfig | grep "ether" | tr "\t" " " | sed "s/ //g" | grep "^ether" | sed "s/ether//g"
