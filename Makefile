#this is a makefile file, I use # to make comments
NAME	= libft.a #sets the name of the final output file to "libft.a" 

DIR_SRCS	= srcs #sets the directories where the sources files and objects will be located
DIR_OBJS	= objs
SUBDIRS		= is to mem str put lst math gnl printf

SRCS_DIRS	= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_SRCS)/, $(dir)))
OBJS_DIRS	= $(foreach dir, $(SUBDIRS), $(addprefix $(DIR_OBJS)/, $(dir)))
SRCS		= $(foreach dir, $(SRCS_DIRS), $(wildcard $(dir)/*.c))
OBJS		= $(subst $(DIR_SRCS), $(DIR_OBJS), $(SRCS:.c=.o))

INCLUDES	= -I includes # variable is used to specify the include paths for the compiler.



CC		= clang #variable sets the compiler to use, in this case it is set to use clang
CFLAGS	= -Wall -Wextra -Werror # the flag the  compiler will use 
RM		= /bin/rm -f

$(DIR_OBJS)/%.o :	$(DIR_SRCS)/%.c	# any objects file in the 'objs' directory that corresponds to a source file in the 'srcs' should be build by running the commands following the : 
			@mkdir -p $(DIR_OBJS) $(OBJS_DIRS) # this  command creates the object and the subir if they don't already exist
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			@ar -rcs $(NAME) $(OBJS)
			@ranlib $(NAME)

clean:
			@$(RM) $(OBJS)
			@$(RM) -r $(DIR_OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all  # this recall fclean, and all rules, so its used to rebuild the project from scratch 

.PHONY:		all clean fclean re #this command is used to specify that the targets 'all', 'clean', 'fclean', and 're' are not actual files, but rather commands that should always be executed regardless of whether corresponding files exist.
