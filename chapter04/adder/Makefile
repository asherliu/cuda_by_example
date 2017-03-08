exe=bfs.bin

commflags= --compiler-options -Wall -Xptxas -v -Xcudafe -\# --maxrregcount 32 -keep -keep-dir ./intermediate/ -src-in-ptx
#commflags=--ptx
cucc= "$(shell which nvcc)"
cc= "$(shell which gcc)"
cuflags= -arch=sm_35  $(commflags) #-Xptxas -dlcm=cg#disable l1 cache

ifeq ($(compile), 1)
	commflags+=-keep
else ifeq ($(compile), 2)
	commflags+=-keep -clean
endif

ifeq ($(monitor), 1)
	cuflags+= -DENABLE_MONITORING
endif

ifeq ($(check), 1)
	cuflags+= -DENABLE_CHECKING
endif

ifeq ($(debug), 1)
	cuflags+= -G -g -O0
	cflags += -g -O0
else
	cflags += -O3
	cuflags+= -O3
endif



objs	= $(patsubst %.cu,%.o,$(wildcard *.cu))

deps	= $(wildcard ../../lib/*.h) \
		  $(wildcard ../../lib/*.cuh) \
		  $(wildcard ../../lib/*.hpp) \
		  $(wildcard ./*.h) \
		  Makefile

%.o:%.cu $(deps)
	$(cucc) -c $(cuflags)  $< -o $@

$(exe):$(objs)
	$(cucc) $(objs) $(cuflags)  -o $(exe)


clean:
	rm -rf *.o generator/*.o ${exe}

