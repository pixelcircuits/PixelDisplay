# Target Name
TARGET=PixelDisplayTest

# Directories
BUILDDIR=build
SOURCEDIR=source
INCDIR=inc
BASEDIR=lbase

# Objects to Build
OBJECTS=$(BUILDDIR)/main.o 

# Libraries to Include
LIBRARIES=-lwiringPi -pthread

# Compiler
CC=gcc
CXX=g++

# Flags
CFLAGS=
CXXFLAGS=$(CFLAGS)

#===============================================================================

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBRARIES)


$(BUILDDIR)/%.o : $(SOURCEDIR)/%.c
	$(CC) -I$(INCDIR) $(CXXFLAGS) -c -o $@ $<

$(shell mkdir -p $(BUILDDIR))

clean:
	rm -f $(TARGET)
	rm -f $(BUILDDIR)/*.o

.PHONY: FORCE
