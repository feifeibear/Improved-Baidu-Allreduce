./test_sparse: ./sparsedata.o ./test_sparse.o
	g++ $^ -o $@
%.o: %.cpp
	g++ -c $^ -o $@
clean:
	rm *.o ./test_sparse
