OBJ = $(OBJDIR)NRE_InternalTest.o 
OBJDIR = ../../../obj/Tester/InternalTest/

all : $(OBJ)

$(OBJDIR)%.o :  %.cpp %.hpp
	@$(CXX) -o $@ -c $< $(CFLAGS) $(INC)