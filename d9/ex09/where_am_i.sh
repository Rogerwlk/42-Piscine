COUNT=$(ifconfig | grep "inet " | cut -d ' ' -f 2 | wc -l | tr -d ' ')
if  [ $COUNT == "0" ] ; then
	echo "Je suis perdu!";
else
	ifconfig | grep 'inet ' | cut -d ' ' -f 2;
fi
