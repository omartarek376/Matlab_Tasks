
set MATLAB=O:\Installed_Programs\Polyspace\R2021a

cd .

chcp 1252

if "%1"=="" ("O:\Installed_Programs\Polyspace\R2021a\bin\win64\gmake"  -f Calculator_Simulink.mk all) else ("O:\Installed_Programs\Polyspace\R2021a\bin\win64\gmake"  -f Calculator_Simulink.mk %1)
@if errorlevel 1 goto error_exit

exit /B 0

:error_exit
echo The make command returned an error of %errorlevel%
exit /B 1