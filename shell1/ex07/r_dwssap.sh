#  cat /etc/passwd | sed '/^#/d' | sed -n 'p;n' | sed 's/:.*//' | rev  | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | xargs | sed 's/\ /,\ /g' | sed 's/$/\./g'

cat /etc/passwd | sed '/^#/d' | sed -n 'n;p' | cut -d ":" -f 1 | rev | sort -r | sed -n ""$FT_LINE1", "$FT_LINE2" p" | tr '\n' ' ' | sed 's/ /, /g' | sed 's/, $/./' | tr -d '\n'
