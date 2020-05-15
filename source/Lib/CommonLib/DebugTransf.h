#ifndef DEBUGTRANSF_H
#define	DEBUGTRANSF_H

#include <fstream>
#include <string>

class DebugTransf {
    private:
        static std::fstream fp;

    public:

        static void init(std::string fileName);

        static void debug(std::string text);

        static void finalize();

};

#endif
