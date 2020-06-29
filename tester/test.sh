
# Made by lejulien

#Showing the Title and starn loading
gcc -o main_testeur main_testeur.c
./main_testeur
rm main_testeur

# creating executables
gcc -o main_ft_strlen main_ft_strlen.c libasm.a
gcc -o main_ft_strcpy main_ft_strcpy.c libasm.a
gcc -o main_ft_strcmp main_ft_strcmp.c libasm.a
gcc -o main_ft_write main_ft_write.c libasm.a
gcc -o main_ft_read main_ft_read.c libasm.a
gcc -o main_ft_strdup main_ft_strdup.c libasm.a

# executing binaries
./main_ft_strlen
./main_ft_strcpy
./main_ft_strcmp
./main_ft_write
./main_ft_read
./main_ft_strdup

# removing binaries
rm main_ft_strlen
rm main_ft_strcpy
rm main_ft_strcmp
rm main_ft_write
rm write.txt
rm ft_write.txt
rm main_ft_read
rm main_ft_strdup
