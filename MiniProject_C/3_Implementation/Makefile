# Name Of the Project
PROJECT_NAME = PBM

# Output directory
BUILD = build

#All Source code file
SRC = main.c\
src/addContact.c\
src/deleteContact.c\
src/searchContact.c\
src/viewContacts.c\


TEST_SRC =src/addContact.c\
src/deleteContact.c\
src/searchContact.c\
src/viewContacts.c\
unity/unity.c\
test/test_management.c

#Path to the header file
INC_HEADER = inc
INC_TEST = unity

#To check if the OS is windows or linux and set the executable file extension and delete command accordingly
ifdef OS
   RM = del /q
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	  EXEC = out
   endif
endif

TEST_OUTPUT = $(Build)/Test_$(PROJECT_NAME).$(EXEC)

all:
	gcc -I $(INC_HEADER) $(SRC) -o $(call FixPath, ./$(PROJECT_NAME).$(EXEC))

run: all
	$(call FixPath, ./$(PROJECT_NAME).$(EXEC))

test:
	gcc -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath, ./$(TEST_OUTPUT))
	$(call FixPath, ./$(TEST_OUTPUT))
	

coverageCheck:
	gcc -fprofile-arcs -ftest-coverage -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath, $(TEST_OUTPUT))
	$(call FixPath, ./$(TEST_OUTPUT))
	gcov -a $(call FixPath, ./test_management.c )
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test_management.c 

cppcheck:
	cppcheck --enable=all -I $(INC_HEADER) $(SRC)

valgrind:
	gcc -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath, ./$(TEST_OUTPUT))
	valgrind ./$(TEST_OUTPUT)

clean:
	gcc -fprofile-arcs -ftest-coverage -I $(INC_HEADER) -I $(INC_TEST) $(TEST_SRC) -o $(call FixPath, $(TEST_OUTPUT))
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.gcov
	
# Create new build folder if not present
$(BUILD):
	mkdir build
