# FreeBSD 13 on Raspberry Pi 4
MAKEJOBFLAGS = -j 3
TARGETOS = aarch64-unknown-freebsd13.0
HOSTOS = aarch64-unknown-freebsd13.0

TARGETCC = cc
TARGETCXX = c++

# local includes and libraries
TARGETCXXFLAGS = "-O2 -I/usr/local/include"
TARGETCFLAGS = "-O2 -I/usr/local/include"
TARGETCPPFLAGS = "-I/usr/local/include"
TARGETLDFLAGS = "-L/usr/local/lib"

