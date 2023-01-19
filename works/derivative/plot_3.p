# Set the output to a png file
set terminal png size 750, 750
# The file we'll write to
set output './plot_3.png'
# The graphic title
set title 'Second Derivative of Sinh(√x)'
# plot the graphic
plot 'data.dat' using 1:2 with line, 'data.dat' using 1:5 with line, 'data.dat' using 1:6 with line
