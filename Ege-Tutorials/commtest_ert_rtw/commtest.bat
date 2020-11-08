

call  "\\LAPTOP-J8PDRL5Q\D$\Program Files (x86)\bin\win64\checkMATLABRootForDriveMap.exe" "\\LAPTOP-J8PDRL5Q\D$\Program Files (x86)"  > mlEnv.txt
for /f %%a in (mlEnv.txt) do set "%%a"\n
cd .

chcp 1252

if "%1"=="" ("D:\Program Files (x86)\bin\win64\gmake" MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  -f wrapper.mk all) else ("D:\Program Files (x86)\bin\win64\gmake" MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  -f wrapper.mk %1)
@if errorlevel 1 goto error_exit

exit 0

:error_exit
echo The make command returned an error of %errorlevel%
exit 1