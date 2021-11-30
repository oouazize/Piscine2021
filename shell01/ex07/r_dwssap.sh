#!/bin/sh
cat /etc/passwd | grep -v "^#" | sed -n " n ; p " | sed -n "$FT_LINE1 , $FT_LINE2 p " |cut -d ':' -f1 | rev | sort -r | tr "\n" " " |sed 's/ /, /g' | sed 's/, $/./g' | tr -d "\n"
