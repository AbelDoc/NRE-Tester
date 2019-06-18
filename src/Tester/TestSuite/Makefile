OBJ = $(OBJDIR)NRE_TestSuite.o 
OBJDIR = ../../../obj/Tester/TestSuite/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)