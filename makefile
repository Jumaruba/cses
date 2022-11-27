
.PHONY: all 
all:  
	@bash ./minigrader.sh solution.cpp

clean_test: 
	@rm -fr ./testdata/*.txt
	@echo Tests cleaned! 

clean: 
	@rm -f ./*.out ./*.exe
	@echo cleaned!
