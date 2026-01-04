CCOPTS = -std=c99 -Wall -Wextra -Wpedantic -O2
BLD = build/
PROJ = yanc
SRC = $(wildcard *.c)

b:
	@echo "BUILDING..."
	@mkdir -p $(BLD)
	@$(CC) $(CCOPTS) -o $(BLD)/$(PROJ) $(SRC)
	@echo "BUILT SUCCESSFULLY!"

r: b
	@echo "RUNNING..."
	@$(BLD)/$(PROJ)

c:
	@echo "CLEANING..."
	@rm -rf $(BLD)
	@echo "CLEANED SUCCESSFULLY!"
