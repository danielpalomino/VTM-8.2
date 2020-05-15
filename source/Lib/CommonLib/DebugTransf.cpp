#include "DebugTransf.h"

std::fstream DebugTransf::fp;

void DebugTransf::init(std::string fileName) {
    fp.open(fileName.c_str(), std::fstream::out);
}

void DebugTransf::debug(std::string text) {
    fp << text << std::endl;
}

void DebugTransf::finalize() {
    fp.close();
}