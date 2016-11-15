TARGET=ParticlePool
CONFIG+=c++11
SOURCES+=$$PWD/src/*.cpp
HEADERS+=$$PWD/include/*.h
CONFIG-= app_bundle
INCLUDEPATH+=./include/
macx:QMAKE_MAC_SDK=macosx10.12
