set datafile separator ";"
set title 'Complexit� Tower Of Hannoi'
set xlabel"Nombre de disk"
set ylabel"Nombre d'instructions"
plot 'hanoie.csv' using 1:2 title "Complexit�" with linespoints
pause 60