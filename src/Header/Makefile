OBJ = $(OBJDIR)NRE_Tester.o 
OBJDIR = ../../obj/Header/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)