main.exe: main.c src/calc.c
	gcc -Iinc ./main.c ./src/calc.c -o main.exe

run: main.exe
	./main.exe

TEST.exe: unity/unity.c tests/test.c src/calc.c
	gcc -Iinc -Iunity ./src/calc.c ./tests/test.c ./unity/unity.c -o TEST.exe

runtest: TEST.exe
	./TEST.exe

clean: 
	rm *.exe