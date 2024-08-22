@echo off
setlocal

@REM Set the path where the files are located
set "path=D:\programs\Solved-Problems"

@REM Define the extensions to delete
set "extensions=.exe .prob"

@REM Loop through each extension and delete the files
for %%I in (%extensions%) do (
    del /s /q "%path%\*%%I"
)

echo Files deleted successfully.
endlocal
@REM uncomment the line below to pause the script
@REM pause
