# Setting output png
set terminal png size 750,750
set output 'occurrence_img.png'

# Plotting the Occurrence 
set yrange[0:75]
set title "Char Occurrence in String"
set xlabel "ASCII Value"
set ylabel "Ocurrences"

set boxwidth 0.25 relative

plot "occurrence_data.txt" with boxes lt rgb "red" fs solid 1.0, "occurrence_data.txt" lt rgb "blue"

