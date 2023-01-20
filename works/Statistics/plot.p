# Setting output png
set terminal png size 750,750
set output 'occurrence_img.png'

# Plotting the Occurrence 
set yrange[0:100]
set title "Char Occurrence in String"
plot "occurrence_data.txt" with boxes, "occurrence_data.txt"

