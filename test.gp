set datafile separator " "
set key below
#set size ratio 1
#set logscale x
#set format x ""
#set format y ""
#set logscale x
#set xlabel "C"
#set ylabel "P"
set mxtics
set mytics
#set xrange [0:]
#set yrange [-60:10]
#set xzeroaxis lt -1
#set yzeroaxis lt -1



splot "data.txt" using 1:2:3 with points pointtype 7 lc 1 title "Data"


set terminal windows
set output
