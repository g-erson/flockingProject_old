CC = g++
CFLAGS = -c
LINKFLAGS = -lSDL2 -lGLEW -lGL

SOURCES = main.cpp baseLoop.cpp baseExecute.cpp baseCleanup.cpp baseInit.cpp baseEvents.cpp baseRender.cpp LoadFile.cpp
OBJECTS = $(SOURCES: .cpp=.o)
EXECUTABLE = flockDemoExec
TARGET = $(SOURCES) $(EXECUTABLE)

all: $(TARGET)

$(EXECUTABLE): $(OBJECTS)
		$(CC) $(OBJECTS) $(LINKFLAGS) -o $@
.cpp.o: 
	$(CC) $(CFLAGS) $< -o $@
