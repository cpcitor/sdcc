set output "dhrystone-stm8-size.svg"
set terminal svg size 640,480
set style data lines
set xlabel "revision"
set ylabel "size [B]"
set arrow from 9256, 8223 to 9256, 8123
set label "3.5.0" at 9256, 8223
set arrow from 9618, 8240 to 9618, 8140
set label "3.6.0" at 9618, 8240
set arrow from 10233, 8066 to 10233, 7966
set label "3.7.0" at 10233, 8066
set arrow from 10582, 7841 to 10582, 7741
set label "3.8.0" at 10582, 7841
set arrow from 11214, 7247 to 11214, 7147
set label "3.9.0" at 11214, 7247
set arrow from 11533, 7112 to 11533, 7012
set label "4.0.0" at 11533, 7112
set arrow from 12085, 6984 to 12085, 6884
set label "4.1.0" at 12085, 6984
plot "dhrystone-stm8-sizetable" using 1:4 title "default", "dhrystone-stm8-sizetable" using 1:2 title "size", "dhrystone-stm8-sizetable" using 1:3 title "speed"

