set terminal jpeg
set output 'planoxy.jpg'
set title "Plano x-y"
set xlabel "x"
set ylabel "y"
plot 'fileOut.txt' using 2:3
set output 'planoxz.jpg'
set title "Plano x-z"
set xlabel "x"
set ylabel "z"
plot 'fileOut.txt' using 2:4
set output 'planoyz.jpg'
set title "Plano y-z"
set xlabel "y"
set ylabel "z"
plot 'fileOut.txt' using 3:4
