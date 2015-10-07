@echo off

set filename=empty-recycle-bin

gcc "%filename%".c -O2 -s -o "%filename%".exe
