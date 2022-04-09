programa: main.o A.o B.o C.o
	g++-11 main.o A.o B.o C.o
A.o:
	g++-11 -c A.cpp

B.o:
	g++-11 -c B.cpp

C.o:
	g++-11 -c C.cpp

main.o:
	g++-11 -c main.cpp

clear:
	rm *.o rm *.out