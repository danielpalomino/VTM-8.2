#ifndef DEBUGTRANSF_H
#define	DEBUGTRANSF_H

#include <cstdio>
#include <fstream>
#include <string>
#include <memory.h>

#include "CommonDef.h"
#include "alloca.h"

#include "approx.h"

class DebugTransf {
    private:
        static std::fstream fp;
        
    public:

        static double m_TransfReadBER, m_TransfWriteBER;
        static TCoeff *transfBuffer;

        static void init(std::string fileName);

        static void debug(std::string text);

        static void finalize();

};

#endif
