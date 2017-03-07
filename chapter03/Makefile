exe=bfs.bin

ldflags	= -I../../lib/ -I.
commflags= --compiler-options -Wall -Xptxas -v -Xcudafe -\# --maxrregcount 32 -keep 
#commflags=--ptx
cucc= "$(shell which nvcc)"
cc= "$(shell which gcc)"
cuflags= -arch=sm_35  $(commflags) #-Xptxas -dlcm=cg#disable l1 cache
cuflags+=-D__VOTE__

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


#cuflags+= -ccbin=g++ -Xcompiler -fopenmp

objs	= $(patsubst %.cu,%.o,$(wildcard *.cu))

deps	= $(wildcard ../../lib/*.h) \
		  $(wildcard ../../lib/*.cuh) \
		  $(wildcard ../../lib/*.hpp) \
		  $(wildcard ./*.h) \
		  Makefile

%.o:%.cu $(deps)
	$(cucc) -c $(cuflags) $(ldflags) $< -o $@

$(exe):$(objs)
	$(cucc) $(objs) $(cuflags) $(ldflags) -o $(exe)

test:$(exe)
	./bfs /mnt/raid0_huge/hang/roadNet-CA/roadNet-CA.mtx_beg_pos.bin /mnt/raid0_huge/hang/roadNet-CA/roadNet-CA.mtx_csr.bin
tw:$(exe)
	./bfs.bin /home/hang/c0_nfs/hang/discovery_dataset/twitter/twitter_beg_pos.bin /home/hang/c0_nfs/hang/discovery_dataset/twitter/twitter_csr.bin /home/hang/c0_nfs/hang/discovery_dataset/twitter/twitter_weight.bin 1

clean:
	rm -rf *.o generator/*.o ${exe}

