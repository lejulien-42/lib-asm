NAME = launcher

$(name):
	make -C linux_version/.
	mv linux_version/libasm.a .

mac:
	make -C mac_version/.
	mv mac_version/libasm.a .

linux:
	make -C linux_version/.
	mv linux_version/libasm.a .

re:
	make -C linux_version/. fclean
	make -C mac_version/. fclean
	make -C linux_version/.
	make -C mac_version/.

clean:
	make -C linux_version/. clean
	make -C mac_version/. clean
	rm libasm.a
	
fclean:
	make -C linux_version/. fclean
	make -C mac_version/. fclean
	rm libasm.a

test_linux: linux
	mv libasm.a tester/.
	make -C tester/.
