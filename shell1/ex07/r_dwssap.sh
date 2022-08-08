 cat /etc/passwd | sed '/^#/d' | sed -n 'p;n' | sed 's/:.*//' | rev  | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | xargs | sed 's/\ /,\ /g' | sed 's/$/\./g'
