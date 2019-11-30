obj-m = helloDriver.o

all :
	make -c lib/modules/$(shell uname -r)/build/ M = $(pwd) modules
clean :
	make -c lib/modules/$(shell uname -r)/build M = $(pwd) clean
