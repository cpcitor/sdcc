set output "stdcbench-stm8-score.svg"
set terminal svg size 640,480
set style data lines
set key bottom right
set xlabel "revision"
set ylabel "stdcbench score"
trans(x) = x < 135 ? x : x - 70
set yrange [100:175]
set ytics ("100" 100, "110" 110, "120" 120, "200" 130, "210" 140, "220" 150, "230" 160, "240" 170)
set arrow from graph 0, first 125 to graph 1, first 125 nohead lt 500 lw 20 lc bgnd
set label "c90lib module enabled" at 10221, 125 front
set arrow from 9256, 111 to 9256, 106
set label "3.5.0" at 9256, 111
set arrow from 9618, 113 to 9618, 108
set label "3.6.0" at 9618, 113
set arrow from 10233, trans(209) to 10233, trans(204)
set label "3.7.0" at 10233, trans(209)
set arrow from 10582, trans(212) to 10582, trans(207)
set label "3.8.0" at 10582, trans(212)
set arrow from 11214, trans(222) to 11214, trans(217)
set label "3.9.0" at 11214, trans(222)
set arrow from 11533, trans(224) to 11533, trans(219)
set label "4.0.0" at 11533, trans(224)
set arrow from 12085, trans(233) to 12085, trans(228)
set label "4.1.0" at 12085, trans(233)
plot "stdcbench-stm8-scoretable" using 1:(trans($4)) title "default", "stdcbench-stm8-scoretable" using 1:(trans($2)) title "size", "stdcbench-stm8-scoretable" using 1:(trans($3)) title "speed", 125 lt rgb "white" lw 20 notitle

