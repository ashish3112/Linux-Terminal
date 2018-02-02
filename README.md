Interactive Bash Shell
==================================
Features of Shell:
------------------
1. It can run any command which can be run on Bash.
2. It takes directory where executable is located as its home directory.
3. echo,pwd,cd are inbuilt command they are not as complex as they are in Bash.
4. It can take multiple command separated by ";" (neglect double inverted comma).
5. redirection and piping is allowed.
6. ctrl+d closes terminal.
7. new inbuilt command like jobs,kjob,etc are added.

Parts:
-----------------
1. main.c ----> It is main file containing main loop of Shell.It also contains tokenization function.
2. in_built.c ---> It contain functions for inbuilt commands(echo,pwd and cd).
3. relhome.c ---> It contains function for converting absolute path to relative path(considering location of executable as home directory).
4. makefile ---> Standard makefile

Compile:
--------
make

Run:
-----
./Shell

