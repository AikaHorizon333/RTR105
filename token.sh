#!/bin/bash

echo "File name: $0"

for TOKEN in $@
do
	echo $TOKEN
done

echo "Number of commands: $#"
