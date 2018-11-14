set datafile separator ";"
set title 'Complexité Tower Of Hannoi'
set xlabel"Nombre de disk"
set ylabel"Nombre d'instructions"
plot 'hanoie.csv' using 1:2 title "Complexité" with linespoints
pause 60