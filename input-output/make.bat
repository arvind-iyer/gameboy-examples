@echo off
for %%f in (*.c) do (
	echo "Compiling %%~nf........."
	lcc -Wa-l -Wl-m -o %%~nf.gb %%f
)
pause