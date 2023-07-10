NAME			:=	megaphone

CC				:=	c++

RM				:=	rm -f

CFLAGS			:=	-g -Wall -Wextra -Werror -std=c++98 -MMD

VPATH           := src/

SRC_FILES		:= megaphone.cpp

ODIR			:=	obj

OBJS_O			:=	$(SRC_FILES:%.cpp=$(ODIR)/%.o)

OBJS_D			:=	$(SRC_FILES:%.cpp=$(ODIR)/%.d)

all: $(NAME)

$(NAME): $(ODIR) $(OBJS_O) 
	$(CC) $(CFLAGS) $(OBJS_O) -o $@

$(ODIR)/%.o: %.cpp | $(ODIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(ODIR):
	mkdir $(ODIR)

clean:
	$(RM) $(OBJS_O) $(OBJS_D)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re