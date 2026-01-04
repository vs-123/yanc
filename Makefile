CCOPTS	= -std=c99 -Wall -Wextra -Wpedantic -O2
BLD	= build/
PROJ	= yanc
SRC	= $(wildcard *.c)
INCL	= include/

b:
	@echo "BUILDING..."
	@mkdir -p $(BLD)
	@$(CC) $(CCOPTS) -o $(BLD)/$(PROJ) -I$(INCL) $(SRC)
	@echo "BUILT SUCCESSFULLY!"

r: b
	@echo "RUNNING..."
	@$(BLD)/$(PROJ)

c:
	@echo "CLEANING..."
	@rm -rf $(BLD)
	@echo "CLEANED SUCCESSFULLY!"
