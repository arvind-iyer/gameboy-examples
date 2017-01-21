@echo off
@echo "Compiling sprite..."
lcc -c ship.c
@echo "Creating cartridge..."
lcc -Wa-l -Wl-m -o space.gb main.c ship.o
@echo Deleting objects
del space.map
del ship.o
pause
