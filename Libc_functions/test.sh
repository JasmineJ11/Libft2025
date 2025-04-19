cc -Wall -Wextra -Werror ft_$1.c tests/ft_$1-main.c 
echo 'Compiler:'
./a.out

echo 'Norminette:'
norminette ft_$1.c
rm a.out