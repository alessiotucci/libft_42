# Libft Introduction

This repository contains a collection of functions implemented in C language and can be used as a personal library. All functions have been tested and are functioning as intended. 

  ### Makefile and Libft.h (header)
| function name | Description | youtube links |
 | ----------------------------- | ------------------------------------------------- | ------------------------------------------------------- |
   | [`Makefile`](https://github.com/alessiotucci/libft_42/blob/master/Makefile) | Makefile helps you compile all your .c files together. After the piscine you most likely will need it in all your project, learn the syntax  | [![Makefile](https://ytcards.demolab.com/?id=GExnnTaBELk&ab_channel=BarryBrown&lang=en&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&width=250 "Makefile")](https://www.youtube.com/live/GExnnTaBELk?feature=share)|
   | [`libft.h`](https://github.com/alessiotucci/libft_42/blob/master/libft.h) | this is the header file where you should add all the prototype |[![](https://ytcards.demolab.com/?id=x8gsHFBW7zY&ab_channel=PortfolioCoursesi&lang=en&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&width=250 "Free coding school 42 Roma")](https://youtu.be/x8gsHFBW7zY)|

  ### <ctype.h> library
| function name | Description | youtube links |
 | ----------------------------- | ------------------------------------------------- | ------------------------------------------------------- |
   | [`ft_isalnum`](https://github.com/alessiotucci/libft_42/blob/master/ft_isalnum.c) |The isalnum() function checks whether the argument passed is an alphanumeric character (alphabet or number) or not. It is defined in the ctype.h header file| I don't think you need a video for this function|
 | [`ft_isalpha`](https://github.com/alessiotucci/libft_42/blob/master/ft_isalpha.c) |The isalpha() function checks whether a character is an alphabet or not. In C programming, isalpha() function checks whether a character is an alphabet (a to z and A-Z) or not.If a character passed to isalpha() is an alphabet, it returns a non-zero integer, if not it returns 0.|I don't think you need a video for this function|
 | [`ft_isascii`](https://github.com/alessiotucci/libft_42/blob/master/ft_isascii.c) |The isascii() function tests if a given character, in the current locale, can be represented as a valid 7–bit US-ASCII character.|I don't think you need a video for this function|
  | [`ft_isdigit`](https://github.com/alessiotucci/libft_42/blob/master/ft_isdigit.c) |The isdigit() function checks whether a character is numeric character (0-9) or not.Function isdigit() takes a single argument in the form of an integer and returns the value of type int.Even though, isdigit() takes integer as an argument, character is passed to the function. Internally, the character is converted to its ASCII value for the check.|I don't think you need a video for this function|
   | [`ft_isprint`](https://github.com/alessiotucci/libft_42/blob/master/ft_isprint.c) |The isprint() function checks whether a character is a printable character or not.Those characters that occupies printing space are known as printable characters.Printable characters are just the opposite of control characters which can be checked using iscntrl().|I don't think you need a video for this function| 
   | [`ft_isprint`](https://github.com/alessiotucci/libft_42/blob/master/ft_isprint.c) |The isprint() function checks whether a character is a printable character or not.Those characters that occupies printing space are known as printable characters.Printable characters are just the opposite of control characters which can be checked using iscntrl().|I don't think you need a video for this function| 
   | [`ft_tolower`](https://github.com/alessiotucci/libft_42/blob/master/ft_tolower.c) |The tolower() function takes an uppercase alphabet and convert it to a lowercase character.If the arguments passed to the tolower() function is other than an uppercase alphabet, it returns the same character that is passed to the function|I don't think you need a video for this function| 
   | [`ft_toupper`](https://github.com/alessiotucci/libft_42/blob/master/ft_toupper.c) |The toupper() function converts a lowercase alphabet to an uppercase alphabet.|I don't think you need a video for this function|
   ### Memory functions
| function name | Description | youtube links |
 | ----------------------------- | ------------------------------------------------- | ------------------------------------------------------- |
 | [`ft_bzero`](https://github.com/alessiotucci/libft_42/blob/master/ft_bzero.c) |The bzero() function fills the first n bytes of the object pointed to by dst with zero (NUL) bytes. This function is similar to the ANSI memset() function. New code should use the ANSI function.| video|
 | [`ft_calloc`](https://github.com/alessiotucci/libft_42/blob/master/ft_calloc.c) |The calloc() function in C language is used for dynamic memory allocation. We can allocate multiple blocks with the same given size of memory for each block using calloc in c. The calloc() function returns the void* on the successful memory allocation.| [![](https://ytcards.demolab.com/?id=SKBnxCq3HvM&ab_channel=PortfolioCourses&lang=en&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&width=250 "calloc explained")](https://youtu.be/SKBnxCq3HvM)| 
 | [`ft_memchr`](https://github.com/alessiotucci/libft_42/blob/master/ft_memchr.c) |The C library function void *memchr(const void *str, int c, size_t n) searches for the first occurrence of the character c (an unsigned char) in the first n bytes of the string pointed to, by the argument str.| video|
 | [`ft_memcmp`](https://github.com/alessiotucci/libft_42/blob/master/ft_memcmp.c) |The C library function int memcmp(const void *str1, const void *str2, size_t n)) compares the first n bytes of memory area str1 and memory area str2.| video|
 | [`ft_memcpy`](https://github.com/alessiotucci/libft_42/blob/master/ft_memcpy.c) |memcpy() in C is used to copy specified bytes of memory from source address to destination address. The memcpy function returns a void pointer which stores the address of the destination. The memcpy function uses pointers to store the address of source and destination. In C memcpy function is defined in string.|[![](https://ytcards.demolab.com/?id=PThPm24wGEo&ab_channel=PortfolioCourseslang=en&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&width=250 "calloc explained")](https://youtu.be/PThPm24wGEo)| 
 | [`ft_memmove`](https://github.com/alessiotucci/libft_42/blob/master/ft_memmove.c) |The C library function void *memmove(void *str1, const void *str2, size_t n) copies n characters from str2 to str1, but for overlapping memory blocks, memmove() is a safer approach than memcpy().| [![](https://ytcards.demolab.com/?id=DGwdAQauEV4&ab_channel=PortfolioCourses&lang=en&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&width=250 "calloc explained")](https://youtu.be/DGwdAQauEV4)|
 | [`ft_memmove_fixed`](https://github.com/alessiotucci/libft_42/blob/master/ft_memmove_fixed.c) | description | video|
 | [`ft_memset`](https://github.com/alessiotucci/libft_42/blob/master/ft_memset.c) |The memset() function sets the first count bytes of dest to the value c . The value of c is converted to an unsigned character. The memset() function returns a pointer to dest .|[![](https://ytcards.demolab.com/?id=Njsn5HAnAnk&ab_channel=PortfolioCourseslang=en&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&width=250 "calloc explained")](https://youtu.be/Njsn5HAnAnk)|
 
 ### Strings function 
| function name | Description | youtube links |
 | ----------------------------- | ------------------------------------------------- | ------------------------------------------------------- |
 | [`ft_strchr`](https://github.com/alessiotucci/libft_42/blob/master/ft_strchr.c) |The strchr() function returns a pointer to the first occurrence of c that is converted to a character in string. The function returns NULL if the specified character is not found.| [![](https://ytcards.demolab.com/?id=x8gsHFBW7zY&ab_channel=PortfolioCourses&lang=en&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&width=250 "Free coding school 42 Roma")](https://youtu.be/x8gsHFBW7zY)|
 | [`ft_strlcat`](https://github.com/alessiotucci/libft_42/blob/master/ft_strlcat.c) |The strlcat() function appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result. The source and destination strings should not overlap, as the behavior is undefined.| video|
 | [`ft_strlcpy`](https://github.com/alessiotucci/libft_42/blob/master/ft_strlcpy.c) |he strlcpy function is intended to replace the function strcpy (which copies a string to a destination buffer) with a secure version that cannot overflow the destination buffer.| video| 
 | [`ft_strlen`](https://github.com/alessiotucci/libft_42/blob/master/ft_strlen.c) |The strlen() function in C is used to find the length of a string.| video|
 | [`ft_strmapi`](https://github.com/alessiotucci/libft_42/blob/master/ft_strmapi.c) | description | video|
 | [`ft_strncmp`](https://github.com/alessiotucci/libft_42/blob/master/ft_strncmp.c) |The strncmp() built-in function compares at most the first count characters of the string pointed to by string1 to the string pointed to by string2. The string arguments to the function should contain a NULL character ( \0 ) marking the end of the string.|[![](https://ytcards.demolab.com/?id=Vx3GyTVFcMA&ab_channel=PortfolioCourses "strncmp")](https://youtu.be/Vx3GyTVFcMA)|
 | [`ft_strnstr`](https://github.com/alessiotucci/libft_42/blob/master/ft_strnstr.c) | description | video|
 | [`ft_strchr`](https://github.com/alessiotucci/libft_42/blob/master/ft_strchr.c) | description | video|
 | [`ft_strrchr`](https://github.com/alessiotucci/libft_42/blob/master/ft_strrchr.c) | description | video|
 | [`ft_strtrim`](https://github.com/alessiotucci/libft_42/blob/master/ft_strtrim.c) |strtrim removes all whitespace characters from the beginning and the end of a string| video|
 | [`ft_substr`](https://github.com/alessiotucci/libft_42/blob/master/ft_substr.c) | description | video|
   
   
   
  
  ### Other function (more complex)
| function name | Description | youtube links |
 | ----------------------------- | ------------------------------------------------- | ------------------------------------------------------- |
| [`ft_atoi`](https://github.com/alessiotucci/libft_42/blob/master/ft_atoi.c) |The atoi() function converts a character string to an integer value. The input string is a sequence of characters that can be interpreted as a numeric value of the specified return type. The function stops reading the input string at the first character that it cannot recognize as part of a number.| [![](https://ytcards.demolab.com/?id=2I9XO8jwZCA&ab_channel=TECHDOSE&lang=en&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&width=250 "Implement atoi")](https://youtu.be/2I9XO8jwZCA)| 
| [`ft_strdup`](https://github.com/alessiotucci/libft_42/blob/master/ft_strdup.c) |This function returns a pointer to a null-terminated byte string, which is a duplicate of the string pointed to by s. The memory obtained is done dynamically using malloc and hence it can be freed using free(). It returns a pointer to the duplicated string s.| video| 
| [`ft_strjoin`](https://github.com/alessiotucci/libft_42/blob/master/ft_strjoin.c) || video| 
| [`ft_split`](https://github.com/alessiotucci/libft_42/blob/master/ft_split.c) | description | video| 
| [`ft_itoa`](https://github.com/alessiotucci/libft_42/blob/master/ft_itoa.c) |The itoa() function coverts the integer n into a character string. The string is placed in the buffer passed, which must be large enough to hold the output| [![](https://ytcards.demolab.com/?id=x8gsHFBW7zY&ab_channel=PortfolioCourses&lang=en&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&width=250 "Free coding school 42 Roma")](https://youtu.be/x8gsHFBW7zY)|
| [`ft_striteri`](https://github.com/alessiotucci/libft_42/blob/master/ft_striteri.c) | description | video| 
| [`ft_putchar_fd`](https://github.com/alessiotucci/libft_42/blob/master/ft_putchar_fd.c) | description | video| 
| [`ft_putstr_fd`](https://github.com/alessiotucci/libft_42/blob/master/ft_putstr_fd.c) | description | video|
 | [`ft_putendl_fd`](https://github.com/alessiotucci/libft_42/blob/master/ft_putendl_fd.c) | description | video| 
 | [`ft_putnbr_fd`](https://github.com/alessiotucci/libft_42/blob/master/ft_putnbr_fd.c) | description | video|
  | [`prova`]() | The channel ID to use for the feed <sup>📺</sup> | Required | 

   ### STDDEF.H: library with the list function
| function name | Description | youtube links |
 | ----------------------------- | ------------------------------------------------- | ------------------------------------------------------- |
| [`ft_lstadd_back`](https://github.com/alessiotucci/libft_42/blob/master/ft_lstadd_back.c) |What is Linked List in C? A Linked List is a linear data structure. Every linked list has two parts, the data section and the address section that holds the address of the next element in the list, which is called a node.| [![](https://ytcards.demolab.com/?id=x8gsHFBW7zY&ab_channel=PortfolioCourses&lang=en&background_color=%230d1117&title_color=%23ffffff&stats_color=%23dedede&width=250 "Free coding school 42 Roma")](https://youtu.be/x8gsHFBW7zY)|
 | [`ft_lstadd_front`](https://github.com/alessiotucci/libft_42/blob/master/ft_lstadd_front.c) | description | video| 
 | [`ft_lstclear`](https://github.com/alessiotucci/libft_42/blob/master/ft_lstclear.c) | description | video| 
 | [`ft_lstdelone`](https://github.com/alessiotucci/libft_42/blob/master/ft_lstdelone.c) | description | video| 
 | [`ft_lstiter`](https://github.com/alessiotucci/libft_42/blob/master/ft_lstiter.c) | description | video| 
 | [`ft_lstlast`](https://github.com/alessiotucci/libft_42/blob/master/ft_lstlast.c) | description | video| 
 | [`ft_lstmap`](https://github.com/alessiotucci/libft_42/blob/master/ft_lstmap.c) | description | video|
  | [`ft_lstnew`](https://github.com/alessiotucci/libft_42/blob/master/ft_lstnew.c) | description | video| 
 | [`ft_lstsize`](https://github.com/alessiotucci/libft_42/blob/master/ft_lstsize.c) | description | video|
