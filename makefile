SOUF = ocvts.cpp
DEPDLL = -lopencv_core -lopencv_highgui -lopencv_imgproc
BUOPT = -Wall -O2 -o
ocvts:$(SOUF)
	@g++ $(SOUF) $(BUOPT)  $@ $(DEPDLL)

.PHONY: clean
clean:
	@rm -rf ocvts
