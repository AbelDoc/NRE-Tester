OBJ = $(OBJDIR)NRE_Main.o 
OBJDIR = ../obj/

TESTER = Tester

all : childs $(OBJ)

childs:
	@(cd $(TESTER) && $(MAKE))

$(OBJDIR)%.o :  %.cpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)