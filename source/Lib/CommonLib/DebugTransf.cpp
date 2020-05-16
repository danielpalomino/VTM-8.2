#include "DebugTransf.h"

std::fstream DebugTransf::fp;
double DebugTransf::m_TransfReadBER;
double DebugTransf::m_TransfWriteBER;
TCoeff* DebugTransf::transfBuffer;

void DebugTransf::init(std::string fileName) {
    //fp.open(fileName.c_str(), std::fstream::out);
    transfBuffer = ( TCoeff * ) alloca( 256 * 256 * sizeof( TCoeff ) );
    
    TCoeff *beginBuffer, *endBuffer;
    beginBuffer = DebugTransf::transfBuffer;
    endBuffer = beginBuffer + (64 * 64);

    //std::cout << std::hex << (unsigned long long)beginBuffer << " " << (unsigned long long)endBuffer << std::endl;
        
    add_approx((unsigned long long)beginBuffer, (unsigned long long)endBuffer);     
}

void DebugTransf::debug(std::string text) {
    //fp << text << std::endl;
}

void DebugTransf::finalize() {
    TCoeff *beginBuffer, *endBuffer;
    beginBuffer = DebugTransf::transfBuffer;
    endBuffer = beginBuffer + (64 * 64);
    
    remove_approx((unsigned long long)beginBuffer, (unsigned long long)endBuffer);     
    
    //fp.close();
}