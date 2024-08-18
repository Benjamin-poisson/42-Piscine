id -nG $FT_USER | sed "s/ /,/g" | sed -z "s/\n//g"
