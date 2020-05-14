#ifndef DEBUGTRANSF_H
#define	DEBUGTRANSF_H

#include <fstream>
#include <string>

class DebugTransf {
    
    public:
        static std::fstream fp;

        static void init(std::string fileName) {
            fp.open(fileName.c_str(), std::fstream::out);
        }

        static void debug(std::string text) {
            fp << text << std::endl;
        }

        static void finalize() {
            fp.close();
        }

};

#endif
