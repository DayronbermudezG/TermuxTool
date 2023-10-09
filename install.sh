echo " ______                       ______          __"
echo "/_  __/__ ______ _  __ ____ _/_  __/__  ___  / /"
echo " / / / -_) __/  ' \/ // /\ \ // / / _ \/ _ \/ / "
echo "/_/  \__/_/ /_/_/_/\_,_//_\_\/_/  \___/\___/_/  "
echo "            Creado por DayronBG"
echo ""
echo ""

pkg install clang
g++ -o TermuxTool dbg/TermuxTool.cpp
rm -r dbg
clear
./TermuxTool