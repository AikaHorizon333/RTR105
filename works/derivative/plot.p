# Set the output to a png file
set terminal png size 750, 750
# The file we'll write to
set output './plot.png'
# The graphic title
set title 'Derivatives of Sinh(√x)'
# plot the graphic
plot 'data.dat' using 1:2 with line, 'data.dat' using 1:3 with line, 'data.dat' using 1:4 with line, 'data.dat' using 1:5 with line, 'data.dat' using 1:6 with line
