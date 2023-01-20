set yrange[0:150]
set title "Char Occurrence in String"
set style fill solid 1.0
plot "occurrence_data.txt" with boxes
replot "occurrence_data.txt"