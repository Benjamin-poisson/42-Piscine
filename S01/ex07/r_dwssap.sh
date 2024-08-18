cat /etc/passwd | sed "n;d" | cut -d : -f 1 | rev | sort -r | sed -z "s/\n/, /g"| sed -z "s/, $/./"
