func_void:
	cd src/functions/void && make && build/main

ep_inparr:
	cd example-programs/input-array/ && make && build/main

clean:
	rm -rf **/build **/obj