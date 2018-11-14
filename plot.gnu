set datafile separator ";"
set title 'Complexitè du monde des tris'
set xlabel"Taille du tableau"
set ylabel"Nombre d'instructions"
plot 'file.csv' using 1:2 title "ComSilect" with linespoints
replot 'file.csv' using 1:3 title "ComInsertion" with linespoints
replot 'file.csv' using 1:4 title "comBull" with linespoints
replot 'file.csv' using 1:5 title "ComMergeSort" with linespoints
replot 'file.csv' using 1:6 title "ComRapid" with linespoints
pause 20
