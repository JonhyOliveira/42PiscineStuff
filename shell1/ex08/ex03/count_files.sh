child_count=$(ls -R | xargs | wc -w | xargs)

echo $(($child_count + 1))
