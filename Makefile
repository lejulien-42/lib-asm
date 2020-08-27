NAME = launcher

DIRECT :=

UNAME_S := $(shell uname -s)
ifeq ($(UNAME_S),Linux)
	DIRECT += linux_version
endif
ifeq ($(UNAME_S),Darwin)
	DIRECT += mac_version
endif

$(NAME):
	make -C $(DIRECT)
	mv $(DIRECT)/libasm.a .

re:
	make -C $(DIRECT) fclean
	make -C $(DIRECT)

clean:
	make -C $(DIRECT) clean
	
fclean:
	make -C $(DIRECT) fclean
	rm libasm.a

test_linux: linux
	mv libasm.a tester/.
	make -C tester/.
