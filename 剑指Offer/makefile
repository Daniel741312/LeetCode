src=$(wildcard ./*.cpp)

obj=$(patsubst ./%.cpp,./elf/%,$(src))


myArgs=-Wall

$(obj):$(src)
	g++ $< -o $@ $(myArgs) 

.PHONY: ALL clean

clean:
	-rm -rf ./elf/*
