
find . -type f -name "*.c" | xargs gcc -c
ar rc libft.a *.o
ranlib libft.a
rm -rf *.o