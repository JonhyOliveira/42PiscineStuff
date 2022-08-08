X=$(ifconfig | grep ether)
# echo $X

echo ${X//ether} | tr ' ' '\n'
