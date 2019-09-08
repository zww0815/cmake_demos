all: makedir
	cd build && cmake .. && make

makedir: 
	mkdir -p build

test:
	make testall -C ./build

clean:
	rm -rf build