#!/bin/sh
if [ -z "$1" ]
then
  printf "AMP: HELP\namp [ -i ] install\n           package name\n"
elif [[ "$1" == "-i" ]] && [ -z "$2" ]; then printf "\e[1;31m No repository, user, or branch specified.\e[0m\n"
elif [[ "$1" == "-i" ]]
then
  if [[ $2 == "gh" ]]
  then
    if [[ "$(basename $PWD)" == "bin" ]]; then echo "Please do not use amp in this directory."; exit 1; fi
    GUSER=$3
    GREPO=$4
    GBRAN=$5
    # https://github.com/U/R/archive/refs/heads/B.zip
    curl -# -Lo $GREPO-$GBRAN.zip https://github.com/$GUSER/$GREPO/archive/refs/heads/$GBRAN.zip
    unzip $GREPO-$GBRAN.zip
    cd $GREPO-$GBRAN
    printf "\033[0;32m== \033[1;37mSearching for .cpp files... (GNU G++ Required)\033[0m\n"
    if [ "$(find *.cpp >& /dev/null;echo $?)" -ne 0 ]; then
      printf "\033[0;31m== \033[1;37mNo .cpp files found.\033[0m\n"
      exit 1
    else
      for file in "$(ls *.cpp)"; do
        printf "\e[0;32m== \e[1;37mCompiling $file into $file-amp...\n"
        g++ -o $file-amp $file
      done
      case "$?" in
        0)
          printf "\033[0;32m== \033[1;37mBuild Successful!\033[0m\n"
          ;;
        *)
          printf "   \e[1;31mError in compiling. Exiting.\e[0m\n"
          exit 563
          ;;
      esac
    fi
    fi
fi
