set output "coremark-stm8-size.svg"
set terminal svg size 640,480
set style data lines
set xlabel "revision"
set ylabel "size [B]"
set arrow from 9256, 16246 to 9256, 16046
set label "3.5.0" at 9256, 16246
set arrow from 9618, 16316 to 9618, 16116
set label "3.6.0" at 9618, 16316
set arrow from 10233, 15145 to 10233, 14945
set label "3.7.0" at 10233, 15145
set arrow from 10582, 14698 to 10582, 14498
set label "3.8.0" at 10582, 14698
set arrow from 11214, 14731 to 11214, 14531
set label "3.9.0" at 11214, 14731
set arrow from 11533, 14042 to 11533, 13842
set label "4.0.0" at 11533, 14042
set arrow from 12085, 13952 to 12085, 13752
set label "4.1.0" at 12085, 13952
plot "coremark-stm8-sizetable" using 1:4 title "default", "coremark-stm8-sizetable" using 1:2 title "size", "coremark-stm8-sizetable" using 1:3 title "speed"

