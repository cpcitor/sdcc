set output "coremark-z80-size.svg"
set terminal svg size 640,480
set style data lines
set xlabel "revision"
set ylabel "size [B]"
set arrow from 10582, 20554 to 10582, 20054
set label "3.8.0" at 10582, 20554
set arrow from 11214, 20836 to 11214, 20326
set label "3.9.0" at 11214, 20836
set arrow from 11533, 21225 to 11533, 20725
set label "4.0.0" at 11533, 21225
set arrow from 12085, 20770 to 12085, 20270
set label "4.1.0" at 12085, 20770
plot "coremark-z80-sizetable" using 1:4 title "default", "coremark-z80-sizetable" using 1:2 title "size", "coremark-z80-sizetable" using 1:3 title "speed"

