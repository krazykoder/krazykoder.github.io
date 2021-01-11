rem start /wait build.cmd
@echo off
rem build.cmd

rem "git commit and push" 

git add --all
git commit -am "Changed file Commit."
git push 

rem git push -u origin main

set /p DUMMY=Hit ENTER to continue...
exit