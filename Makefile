################################################################################
################################################################################
################################################################################
################################################################################
################################################################################
################### ##         ##   ##               ##     ####################
#########          ##              ##              ## ### #           ##########
#########         ##         ##   ####           ##      ##           ##########
#########        ##         ##   ##  ##         #####   #####         ##########
#########       ##         ##   ##  ##         ##      ##             ##########
#########      #########  ##   #####   #####  ##      ##              ##########
################################################################################
################################################################################
################################################################################
################################################################################

################################################################################
###################       General variables setup           ####################
################################################################################
SRC_DIR=src

OBJ_DIR=obj

INC_DIR=inc

LIB_DIR=lib

SRC_NAME=main.c

OBJ_NAME=$(SRC_NAME:.c=.o)

SRC=$(addprefix $(SRC_DIR)/,$(SRC_NAME))

OBJ=$(addprefix $(OBJ_DIR)/,$(OBJ_NAME))

TEST=test

NAME=libft

CC=clang

LINK= ar -rc

RM= rm -rf

CFLAGS+= -Wall
CFLAGS+= -Werror
CFLAGS+= -Wextra
CFLAGS+= -g
CFLAGS+= -fsanitize=address

INC= -I $(INC_DIR)

LIB= -L $(LIB_DIR)

################################################################################
###################     Memory utilities variables          ####################
################################################################################
SRC_MEM_DIR=$(SRC_DIR)/mem

OBJ_MEM_DIR=$(OBJ_DIR)/mem

SRC_MEM_NAME=ft_memcpy.c

OBJ_MEM_NAME=$(SRC_MEM_NAME:.c=.o)

MEM_SRC=$(addprefix $(SRC_MEM_DIR)/,$(SRC_MEM_NAME))

MEM_OBJ=$(addprefix $(OBJ_MEM_DIR)/,$(OBJ_MEM_NAME))

MEM_NAME=$(LIB_DIR)/libft_mem.a

ALL+= -lft_mem

ALL_NAMES+= $(MEM_NAME)

################################################################################
###################     String utilities variables          ####################
################################################################################
SRC_STR_DIR=$(SRC_DIR)/str

OBJ_STR_DIR=$(OBJ_DIR)/str

SRC_STR_NAME=ft_putstr.c

OBJ_STR_NAME=$(SRC_STR_NAME:.c=.o)

STR_SRC=$(addprefix $(SRC_STR_DIR)/,$(SRC_STR_NAME)))

STR_OBJ=$(addprefix $(OBJ_STR_DIR)/,$(OBJ_STR_NAME))

STR_NAME=$(LIB_DIR)/libft_str.a

ALL+= -lft_str

ALL_NAMES+= $(STR_NAME)


################################################################################
###################     Type utilities variables            ####################
################################################################################
SRC_TYPES_DIR=$(SRC_DIR)/types

OBJ_TYPES_DIR=$(OBJ_DIR)/types

SRC_TYPES_NAME+=ft_isalnum.c
SRC_TYPES_NAME+=ft_isalpha.c
SRC_TYPES_NAME+=ft_iscntrl.c
SRC_TYPES_NAME+=ft_isdigit.c
SRC_TYPES_NAME+=ft_isgraph.c
SRC_TYPES_NAME+=ft_islower.c
SRC_TYPES_NAME+=ft_isprint.c
SRC_TYPES_NAME+=ft_ispunct.c
SRC_TYPES_NAME+=ft_isspace.c
SRC_TYPES_NAME+=ft_isupper.c
SRC_TYPES_NAME+=ft_isxdigit.c
SRC_TYPES_NAME+=ft_isascii.c
SRC_TYPES_NAME+=ft_isblank.c

OBJ_TYPES_NAME=$(SRC_TYPES_NAME:.c=.o)

TYPES_SRC=$(addprefix $(SRC_TYPES_DIR)/,$(SRC_TYPES_NAME))

TYPES_OBJ=$(addprefix $(OBJ_TYPES_DIR)/, $(OBJ_TYPES_NAME))

TYPES_NAME=$(LIB_DIR)/libft_types.a

ALL+= -lft_types

ALL_NAMES+= $(TYPES_NAME)

################################################################################
###################           General recipes               ####################
################################################################################
all:	$(TEST)

$(TEST): $(ALL) $(OBJ)
	$(CC) $(CFLAGS) -o $(TEST) $(OBJ) $(LIB) $(ALL) $(INC)

$(ALL): $(ALL_NAMES)

mem:	$(MEM_NAME)

$(MEM_NAME):	$(MEM_OBJ) | $(LIB_DIR)
	$(LINK) -o $(MEM_NAME) $(MEM_OBJ)

str:	$(STR_NAME)

$(STR_NAME):	$(STR_OBJ) | $(LIB_DIR)
	$(LINK) -o $(STR_NAME) $(STR_OBJ)

types:	$(TYPES_NAME)

$(TYPES_NAME):	$(TYPES_OBJ) | $(LIB_DIR)
	$(LINK) -o $(TYPES_NAME) $(TYPES_OBJ)

################################################################################
###################            Object recipes               ####################
################################################################################

$(OBJ_DIR)/%.o:	$(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(OBJ_MEM_DIR)/%.o:	$(SRC_MEM_DIR)/%.c | $(OBJ_MEM_DIR)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(OBJ_STR_DIR)/%.o:	$(SRC_STR_DIR)/%.c | $(OBJ_STR_DIR)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

$(OBJ_TYPES_DIR)/%.o:	$(SRC_TYPES_DIR)/%.c | $(OBJ_TYPES_DIR)
	$(CC) $(CFLAGS) $(INC) -c $< -o $@

################################################################################
###################           Directory recipes             ####################
################################################################################
$(OBJ_DIR):
	mkdir -p $@

$(LIB_DIR):
	mkdir -p $@

$(OBJ_MEM_DIR):
	mkdir -p $@

$(OBJ_STR_DIR):
	mkdir -p $@

$(OBJ_TYPES_DIR):
	mkdir -p $@

################################################################################
###################           Cleanup utilities             ####################
################################################################################
clean:
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(TEST)
	$(RM) $(NAME)
	$(RM) $(LIB_DIR)

re:	clean	all

.PHONY: clean fclean re
