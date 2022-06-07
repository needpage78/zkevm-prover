#ifndef CONSTANT_POLS_HPP
#define CONSTANT_POLS_HPP

#include <cstdint>
#include "ff/ff.hpp"

class GeneratedPol
{
private:
    FieldElement * pData;
public:
    GeneratedPol() : pData(NULL) {};
    FieldElement & operator[](int i) { return pData[i*257]; };
    FieldElement * operator=(FieldElement * pAddress) { pData = pAddress; return pData; };
};

class GlobalConstantPols
{
public:
    GeneratedPol ZH;
    GeneratedPol ZHINV;
    GeneratedPol L1;
    GeneratedPol BYTE;
    GeneratedPol BYTE2;

    GlobalConstantPols (void * pAddress)
    {
        ZH = (FieldElement *)((uint8_t *)pAddress + 0);
        ZHINV = (FieldElement *)((uint8_t *)pAddress + 8);
        L1 = (FieldElement *)((uint8_t *)pAddress + 16);
        BYTE = (FieldElement *)((uint8_t *)pAddress + 24);
        BYTE2 = (FieldElement *)((uint8_t *)pAddress + 32);
    }

    GlobalConstantPols (void * pAddress, uint64_t degree)
    {
        ZH = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        ZHINV = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        L1 = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        BYTE = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        BYTE2 = (FieldElement *)((uint8_t *)pAddress + 32*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 40; }
};

class RomConstantPols
{
public:
    GeneratedPol CONST0;
    GeneratedPol CONST1;
    GeneratedPol CONST2;
    GeneratedPol CONST3;
    GeneratedPol CONST4;
    GeneratedPol CONST5;
    GeneratedPol CONST6;
    GeneratedPol CONST7;
    GeneratedPol offset;
    GeneratedPol inA;
    GeneratedPol inB;
    GeneratedPol inC;
    GeneratedPol inD;
    GeneratedPol inE;
    GeneratedPol inSR;
    GeneratedPol inFREE;
    GeneratedPol inCTX;
    GeneratedPol inSP;
    GeneratedPol inPC;
    GeneratedPol inGAS;
    GeneratedPol inMAXMEM;
    GeneratedPol inHASHPOS;
    GeneratedPol inSTEP;
    GeneratedPol inRR;
    GeneratedPol setA;
    GeneratedPol setB;
    GeneratedPol setC;
    GeneratedPol setD;
    GeneratedPol setE;
    GeneratedPol setSR;
    GeneratedPol setCTX;
    GeneratedPol setSP;
    GeneratedPol setPC;
    GeneratedPol setGAS;
    GeneratedPol setMAXMEM;
    GeneratedPol setHASHPOS;
    GeneratedPol JMP;
    GeneratedPol JMPN;
    GeneratedPol JMPC;
    GeneratedPol setRR;
    GeneratedPol incStack;
    GeneratedPol incCode;
    GeneratedPol isStack;
    GeneratedPol isCode;
    GeneratedPol isMem;
    GeneratedPol ind;
    GeneratedPol indRR;
    GeneratedPol useCTX;
    GeneratedPol mOp;
    GeneratedPol mWR;
    GeneratedPol sWR;
    GeneratedPol sRD;
    GeneratedPol arith;
    GeneratedPol arithEq0;
    GeneratedPol arithEq1;
    GeneratedPol arithEq2;
    GeneratedPol arithEq3;
    GeneratedPol memAlign;
    GeneratedPol memAlignWR;
    GeneratedPol memAlignWR8;
    GeneratedPol hashK;
    GeneratedPol hashKLen;
    GeneratedPol hashKDigest;
    GeneratedPol hashP;
    GeneratedPol hashPLen;
    GeneratedPol hashPDigest;
    GeneratedPol bin;
    GeneratedPol binOpcode;
    GeneratedPol assert;
    GeneratedPol opcodeRomMap;
    GeneratedPol line;
    GeneratedPol opCodeNum;
    GeneratedPol opCodeAddr;

    RomConstantPols (void * pAddress)
    {
        CONST0 = (FieldElement *)((uint8_t *)pAddress + 40);
        CONST1 = (FieldElement *)((uint8_t *)pAddress + 48);
        CONST2 = (FieldElement *)((uint8_t *)pAddress + 56);
        CONST3 = (FieldElement *)((uint8_t *)pAddress + 64);
        CONST4 = (FieldElement *)((uint8_t *)pAddress + 72);
        CONST5 = (FieldElement *)((uint8_t *)pAddress + 80);
        CONST6 = (FieldElement *)((uint8_t *)pAddress + 88);
        CONST7 = (FieldElement *)((uint8_t *)pAddress + 96);
        offset = (FieldElement *)((uint8_t *)pAddress + 104);
        inA = (FieldElement *)((uint8_t *)pAddress + 112);
        inB = (FieldElement *)((uint8_t *)pAddress + 120);
        inC = (FieldElement *)((uint8_t *)pAddress + 128);
        inD = (FieldElement *)((uint8_t *)pAddress + 136);
        inE = (FieldElement *)((uint8_t *)pAddress + 144);
        inSR = (FieldElement *)((uint8_t *)pAddress + 152);
        inFREE = (FieldElement *)((uint8_t *)pAddress + 160);
        inCTX = (FieldElement *)((uint8_t *)pAddress + 168);
        inSP = (FieldElement *)((uint8_t *)pAddress + 176);
        inPC = (FieldElement *)((uint8_t *)pAddress + 184);
        inGAS = (FieldElement *)((uint8_t *)pAddress + 192);
        inMAXMEM = (FieldElement *)((uint8_t *)pAddress + 200);
        inHASHPOS = (FieldElement *)((uint8_t *)pAddress + 208);
        inSTEP = (FieldElement *)((uint8_t *)pAddress + 216);
        inRR = (FieldElement *)((uint8_t *)pAddress + 224);
        setA = (FieldElement *)((uint8_t *)pAddress + 232);
        setB = (FieldElement *)((uint8_t *)pAddress + 240);
        setC = (FieldElement *)((uint8_t *)pAddress + 248);
        setD = (FieldElement *)((uint8_t *)pAddress + 256);
        setE = (FieldElement *)((uint8_t *)pAddress + 264);
        setSR = (FieldElement *)((uint8_t *)pAddress + 272);
        setCTX = (FieldElement *)((uint8_t *)pAddress + 280);
        setSP = (FieldElement *)((uint8_t *)pAddress + 288);
        setPC = (FieldElement *)((uint8_t *)pAddress + 296);
        setGAS = (FieldElement *)((uint8_t *)pAddress + 304);
        setMAXMEM = (FieldElement *)((uint8_t *)pAddress + 312);
        setHASHPOS = (FieldElement *)((uint8_t *)pAddress + 320);
        JMP = (FieldElement *)((uint8_t *)pAddress + 328);
        JMPN = (FieldElement *)((uint8_t *)pAddress + 336);
        JMPC = (FieldElement *)((uint8_t *)pAddress + 344);
        setRR = (FieldElement *)((uint8_t *)pAddress + 352);
        incStack = (FieldElement *)((uint8_t *)pAddress + 360);
        incCode = (FieldElement *)((uint8_t *)pAddress + 368);
        isStack = (FieldElement *)((uint8_t *)pAddress + 376);
        isCode = (FieldElement *)((uint8_t *)pAddress + 384);
        isMem = (FieldElement *)((uint8_t *)pAddress + 392);
        ind = (FieldElement *)((uint8_t *)pAddress + 400);
        indRR = (FieldElement *)((uint8_t *)pAddress + 408);
        useCTX = (FieldElement *)((uint8_t *)pAddress + 416);
        mOp = (FieldElement *)((uint8_t *)pAddress + 424);
        mWR = (FieldElement *)((uint8_t *)pAddress + 432);
        sWR = (FieldElement *)((uint8_t *)pAddress + 440);
        sRD = (FieldElement *)((uint8_t *)pAddress + 448);
        arith = (FieldElement *)((uint8_t *)pAddress + 456);
        arithEq0 = (FieldElement *)((uint8_t *)pAddress + 464);
        arithEq1 = (FieldElement *)((uint8_t *)pAddress + 472);
        arithEq2 = (FieldElement *)((uint8_t *)pAddress + 480);
        arithEq3 = (FieldElement *)((uint8_t *)pAddress + 488);
        memAlign = (FieldElement *)((uint8_t *)pAddress + 496);
        memAlignWR = (FieldElement *)((uint8_t *)pAddress + 504);
        memAlignWR8 = (FieldElement *)((uint8_t *)pAddress + 512);
        hashK = (FieldElement *)((uint8_t *)pAddress + 520);
        hashKLen = (FieldElement *)((uint8_t *)pAddress + 528);
        hashKDigest = (FieldElement *)((uint8_t *)pAddress + 536);
        hashP = (FieldElement *)((uint8_t *)pAddress + 544);
        hashPLen = (FieldElement *)((uint8_t *)pAddress + 552);
        hashPDigest = (FieldElement *)((uint8_t *)pAddress + 560);
        bin = (FieldElement *)((uint8_t *)pAddress + 568);
        binOpcode = (FieldElement *)((uint8_t *)pAddress + 576);
        assert = (FieldElement *)((uint8_t *)pAddress + 584);
        opcodeRomMap = (FieldElement *)((uint8_t *)pAddress + 592);
        line = (FieldElement *)((uint8_t *)pAddress + 600);
        opCodeNum = (FieldElement *)((uint8_t *)pAddress + 608);
        opCodeAddr = (FieldElement *)((uint8_t *)pAddress + 616);
    }

    RomConstantPols (void * pAddress, uint64_t degree)
    {
        CONST0 = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        CONST1 = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        CONST2 = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        CONST3 = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        CONST4 = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        CONST5 = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        CONST6 = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        CONST7 = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        offset = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        inA = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        inB = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        inC = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        inD = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        inE = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        inSR = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        inFREE = (FieldElement *)((uint8_t *)pAddress + 120*degree);
        inCTX = (FieldElement *)((uint8_t *)pAddress + 128*degree);
        inSP = (FieldElement *)((uint8_t *)pAddress + 136*degree);
        inPC = (FieldElement *)((uint8_t *)pAddress + 144*degree);
        inGAS = (FieldElement *)((uint8_t *)pAddress + 152*degree);
        inMAXMEM = (FieldElement *)((uint8_t *)pAddress + 160*degree);
        inHASHPOS = (FieldElement *)((uint8_t *)pAddress + 168*degree);
        inSTEP = (FieldElement *)((uint8_t *)pAddress + 176*degree);
        inRR = (FieldElement *)((uint8_t *)pAddress + 184*degree);
        setA = (FieldElement *)((uint8_t *)pAddress + 192*degree);
        setB = (FieldElement *)((uint8_t *)pAddress + 200*degree);
        setC = (FieldElement *)((uint8_t *)pAddress + 208*degree);
        setD = (FieldElement *)((uint8_t *)pAddress + 216*degree);
        setE = (FieldElement *)((uint8_t *)pAddress + 224*degree);
        setSR = (FieldElement *)((uint8_t *)pAddress + 232*degree);
        setCTX = (FieldElement *)((uint8_t *)pAddress + 240*degree);
        setSP = (FieldElement *)((uint8_t *)pAddress + 248*degree);
        setPC = (FieldElement *)((uint8_t *)pAddress + 256*degree);
        setGAS = (FieldElement *)((uint8_t *)pAddress + 264*degree);
        setMAXMEM = (FieldElement *)((uint8_t *)pAddress + 272*degree);
        setHASHPOS = (FieldElement *)((uint8_t *)pAddress + 280*degree);
        JMP = (FieldElement *)((uint8_t *)pAddress + 288*degree);
        JMPN = (FieldElement *)((uint8_t *)pAddress + 296*degree);
        JMPC = (FieldElement *)((uint8_t *)pAddress + 304*degree);
        setRR = (FieldElement *)((uint8_t *)pAddress + 312*degree);
        incStack = (FieldElement *)((uint8_t *)pAddress + 320*degree);
        incCode = (FieldElement *)((uint8_t *)pAddress + 328*degree);
        isStack = (FieldElement *)((uint8_t *)pAddress + 336*degree);
        isCode = (FieldElement *)((uint8_t *)pAddress + 344*degree);
        isMem = (FieldElement *)((uint8_t *)pAddress + 352*degree);
        ind = (FieldElement *)((uint8_t *)pAddress + 360*degree);
        indRR = (FieldElement *)((uint8_t *)pAddress + 368*degree);
        useCTX = (FieldElement *)((uint8_t *)pAddress + 376*degree);
        mOp = (FieldElement *)((uint8_t *)pAddress + 384*degree);
        mWR = (FieldElement *)((uint8_t *)pAddress + 392*degree);
        sWR = (FieldElement *)((uint8_t *)pAddress + 400*degree);
        sRD = (FieldElement *)((uint8_t *)pAddress + 408*degree);
        arith = (FieldElement *)((uint8_t *)pAddress + 416*degree);
        arithEq0 = (FieldElement *)((uint8_t *)pAddress + 424*degree);
        arithEq1 = (FieldElement *)((uint8_t *)pAddress + 432*degree);
        arithEq2 = (FieldElement *)((uint8_t *)pAddress + 440*degree);
        arithEq3 = (FieldElement *)((uint8_t *)pAddress + 448*degree);
        memAlign = (FieldElement *)((uint8_t *)pAddress + 456*degree);
        memAlignWR = (FieldElement *)((uint8_t *)pAddress + 464*degree);
        memAlignWR8 = (FieldElement *)((uint8_t *)pAddress + 472*degree);
        hashK = (FieldElement *)((uint8_t *)pAddress + 480*degree);
        hashKLen = (FieldElement *)((uint8_t *)pAddress + 488*degree);
        hashKDigest = (FieldElement *)((uint8_t *)pAddress + 496*degree);
        hashP = (FieldElement *)((uint8_t *)pAddress + 504*degree);
        hashPLen = (FieldElement *)((uint8_t *)pAddress + 512*degree);
        hashPDigest = (FieldElement *)((uint8_t *)pAddress + 520*degree);
        bin = (FieldElement *)((uint8_t *)pAddress + 528*degree);
        binOpcode = (FieldElement *)((uint8_t *)pAddress + 536*degree);
        assert = (FieldElement *)((uint8_t *)pAddress + 544*degree);
        opcodeRomMap = (FieldElement *)((uint8_t *)pAddress + 552*degree);
        line = (FieldElement *)((uint8_t *)pAddress + 560*degree);
        opCodeNum = (FieldElement *)((uint8_t *)pAddress + 568*degree);
        opCodeAddr = (FieldElement *)((uint8_t *)pAddress + 576*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 584; }
};

class Byte4ConstantPols
{
public:
    GeneratedPol SET;

    Byte4ConstantPols (void * pAddress)
    {
        SET = (FieldElement *)((uint8_t *)pAddress + 624);
    }

    Byte4ConstantPols (void * pAddress, uint64_t degree)
    {
        SET = (FieldElement *)((uint8_t *)pAddress + 0*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 8; }
};

class MemAlignConstantPols
{
public:
    GeneratedPol BYTE2A;
    GeneratedPol BYTE2B;
    GeneratedPol BYTE_C3072;
    GeneratedPol FACTOR[8];
    GeneratedPol FACTORV[8];
    GeneratedPol STEP;
    GeneratedPol WR256;
    GeneratedPol WR8;
    GeneratedPol OFFSET;
    GeneratedPol RESET;
    GeneratedPol SELM1;

    MemAlignConstantPols (void * pAddress)
    {
        BYTE2A = (FieldElement *)((uint8_t *)pAddress + 632);
        BYTE2B = (FieldElement *)((uint8_t *)pAddress + 640);
        BYTE_C3072 = (FieldElement *)((uint8_t *)pAddress + 648);
        FACTOR[0] = (FieldElement *)((uint8_t *)pAddress + 656);
        FACTOR[1] = (FieldElement *)((uint8_t *)pAddress + 664);
        FACTOR[2] = (FieldElement *)((uint8_t *)pAddress + 672);
        FACTOR[3] = (FieldElement *)((uint8_t *)pAddress + 680);
        FACTOR[4] = (FieldElement *)((uint8_t *)pAddress + 688);
        FACTOR[5] = (FieldElement *)((uint8_t *)pAddress + 696);
        FACTOR[6] = (FieldElement *)((uint8_t *)pAddress + 704);
        FACTOR[7] = (FieldElement *)((uint8_t *)pAddress + 712);
        FACTORV[0] = (FieldElement *)((uint8_t *)pAddress + 720);
        FACTORV[1] = (FieldElement *)((uint8_t *)pAddress + 728);
        FACTORV[2] = (FieldElement *)((uint8_t *)pAddress + 736);
        FACTORV[3] = (FieldElement *)((uint8_t *)pAddress + 744);
        FACTORV[4] = (FieldElement *)((uint8_t *)pAddress + 752);
        FACTORV[5] = (FieldElement *)((uint8_t *)pAddress + 760);
        FACTORV[6] = (FieldElement *)((uint8_t *)pAddress + 768);
        FACTORV[7] = (FieldElement *)((uint8_t *)pAddress + 776);
        STEP = (FieldElement *)((uint8_t *)pAddress + 784);
        WR256 = (FieldElement *)((uint8_t *)pAddress + 792);
        WR8 = (FieldElement *)((uint8_t *)pAddress + 800);
        OFFSET = (FieldElement *)((uint8_t *)pAddress + 808);
        RESET = (FieldElement *)((uint8_t *)pAddress + 816);
        SELM1 = (FieldElement *)((uint8_t *)pAddress + 824);
    }

    MemAlignConstantPols (void * pAddress, uint64_t degree)
    {
        BYTE2A = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        BYTE2B = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        BYTE_C3072 = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        FACTOR[0] = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        FACTOR[1] = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        FACTOR[2] = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        FACTOR[3] = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        FACTOR[4] = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        FACTOR[5] = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        FACTOR[6] = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        FACTOR[7] = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        FACTORV[0] = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        FACTORV[1] = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        FACTORV[2] = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        FACTORV[3] = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        FACTORV[4] = (FieldElement *)((uint8_t *)pAddress + 120*degree);
        FACTORV[5] = (FieldElement *)((uint8_t *)pAddress + 128*degree);
        FACTORV[6] = (FieldElement *)((uint8_t *)pAddress + 136*degree);
        FACTORV[7] = (FieldElement *)((uint8_t *)pAddress + 144*degree);
        STEP = (FieldElement *)((uint8_t *)pAddress + 152*degree);
        WR256 = (FieldElement *)((uint8_t *)pAddress + 160*degree);
        WR8 = (FieldElement *)((uint8_t *)pAddress + 168*degree);
        OFFSET = (FieldElement *)((uint8_t *)pAddress + 176*degree);
        RESET = (FieldElement *)((uint8_t *)pAddress + 184*degree);
        SELM1 = (FieldElement *)((uint8_t *)pAddress + 192*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 200; }
};

class ArithConstantPols
{
public:
    GeneratedPol BIT19;
    GeneratedPol GL_SIGNED_4BITS;
    GeneratedPol GL_SIGNED_18BITS;
    GeneratedPol ck[32];

    ArithConstantPols (void * pAddress)
    {
        BIT19 = (FieldElement *)((uint8_t *)pAddress + 832);
        GL_SIGNED_4BITS = (FieldElement *)((uint8_t *)pAddress + 840);
        GL_SIGNED_18BITS = (FieldElement *)((uint8_t *)pAddress + 848);
        ck[0] = (FieldElement *)((uint8_t *)pAddress + 856);
        ck[1] = (FieldElement *)((uint8_t *)pAddress + 864);
        ck[2] = (FieldElement *)((uint8_t *)pAddress + 872);
        ck[3] = (FieldElement *)((uint8_t *)pAddress + 880);
        ck[4] = (FieldElement *)((uint8_t *)pAddress + 888);
        ck[5] = (FieldElement *)((uint8_t *)pAddress + 896);
        ck[6] = (FieldElement *)((uint8_t *)pAddress + 904);
        ck[7] = (FieldElement *)((uint8_t *)pAddress + 912);
        ck[8] = (FieldElement *)((uint8_t *)pAddress + 920);
        ck[9] = (FieldElement *)((uint8_t *)pAddress + 928);
        ck[10] = (FieldElement *)((uint8_t *)pAddress + 936);
        ck[11] = (FieldElement *)((uint8_t *)pAddress + 944);
        ck[12] = (FieldElement *)((uint8_t *)pAddress + 952);
        ck[13] = (FieldElement *)((uint8_t *)pAddress + 960);
        ck[14] = (FieldElement *)((uint8_t *)pAddress + 968);
        ck[15] = (FieldElement *)((uint8_t *)pAddress + 976);
        ck[16] = (FieldElement *)((uint8_t *)pAddress + 984);
        ck[17] = (FieldElement *)((uint8_t *)pAddress + 992);
        ck[18] = (FieldElement *)((uint8_t *)pAddress + 1000);
        ck[19] = (FieldElement *)((uint8_t *)pAddress + 1008);
        ck[20] = (FieldElement *)((uint8_t *)pAddress + 1016);
        ck[21] = (FieldElement *)((uint8_t *)pAddress + 1024);
        ck[22] = (FieldElement *)((uint8_t *)pAddress + 1032);
        ck[23] = (FieldElement *)((uint8_t *)pAddress + 1040);
        ck[24] = (FieldElement *)((uint8_t *)pAddress + 1048);
        ck[25] = (FieldElement *)((uint8_t *)pAddress + 1056);
        ck[26] = (FieldElement *)((uint8_t *)pAddress + 1064);
        ck[27] = (FieldElement *)((uint8_t *)pAddress + 1072);
        ck[28] = (FieldElement *)((uint8_t *)pAddress + 1080);
        ck[29] = (FieldElement *)((uint8_t *)pAddress + 1088);
        ck[30] = (FieldElement *)((uint8_t *)pAddress + 1096);
        ck[31] = (FieldElement *)((uint8_t *)pAddress + 1104);
    }

    ArithConstantPols (void * pAddress, uint64_t degree)
    {
        BIT19 = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        GL_SIGNED_4BITS = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        GL_SIGNED_18BITS = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        ck[0] = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        ck[1] = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        ck[2] = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        ck[3] = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        ck[4] = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        ck[5] = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        ck[6] = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        ck[7] = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        ck[8] = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        ck[9] = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        ck[10] = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        ck[11] = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        ck[12] = (FieldElement *)((uint8_t *)pAddress + 120*degree);
        ck[13] = (FieldElement *)((uint8_t *)pAddress + 128*degree);
        ck[14] = (FieldElement *)((uint8_t *)pAddress + 136*degree);
        ck[15] = (FieldElement *)((uint8_t *)pAddress + 144*degree);
        ck[16] = (FieldElement *)((uint8_t *)pAddress + 152*degree);
        ck[17] = (FieldElement *)((uint8_t *)pAddress + 160*degree);
        ck[18] = (FieldElement *)((uint8_t *)pAddress + 168*degree);
        ck[19] = (FieldElement *)((uint8_t *)pAddress + 176*degree);
        ck[20] = (FieldElement *)((uint8_t *)pAddress + 184*degree);
        ck[21] = (FieldElement *)((uint8_t *)pAddress + 192*degree);
        ck[22] = (FieldElement *)((uint8_t *)pAddress + 200*degree);
        ck[23] = (FieldElement *)((uint8_t *)pAddress + 208*degree);
        ck[24] = (FieldElement *)((uint8_t *)pAddress + 216*degree);
        ck[25] = (FieldElement *)((uint8_t *)pAddress + 224*degree);
        ck[26] = (FieldElement *)((uint8_t *)pAddress + 232*degree);
        ck[27] = (FieldElement *)((uint8_t *)pAddress + 240*degree);
        ck[28] = (FieldElement *)((uint8_t *)pAddress + 248*degree);
        ck[29] = (FieldElement *)((uint8_t *)pAddress + 256*degree);
        ck[30] = (FieldElement *)((uint8_t *)pAddress + 264*degree);
        ck[31] = (FieldElement *)((uint8_t *)pAddress + 272*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 280; }
};

class BinaryConstantPols
{
public:
    GeneratedPol P_OPCODE;
    GeneratedPol P_A;
    GeneratedPol P_B;
    GeneratedPol P_CIN;
    GeneratedPol P_LAST;
    GeneratedPol P_USE_CARRY;
    GeneratedPol P_C;
    GeneratedPol P_COUT;
    GeneratedPol RESET;
    GeneratedPol FACTOR[8];

    BinaryConstantPols (void * pAddress)
    {
        P_OPCODE = (FieldElement *)((uint8_t *)pAddress + 1112);
        P_A = (FieldElement *)((uint8_t *)pAddress + 1120);
        P_B = (FieldElement *)((uint8_t *)pAddress + 1128);
        P_CIN = (FieldElement *)((uint8_t *)pAddress + 1136);
        P_LAST = (FieldElement *)((uint8_t *)pAddress + 1144);
        P_USE_CARRY = (FieldElement *)((uint8_t *)pAddress + 1152);
        P_C = (FieldElement *)((uint8_t *)pAddress + 1160);
        P_COUT = (FieldElement *)((uint8_t *)pAddress + 1168);
        RESET = (FieldElement *)((uint8_t *)pAddress + 1176);
        FACTOR[0] = (FieldElement *)((uint8_t *)pAddress + 1184);
        FACTOR[1] = (FieldElement *)((uint8_t *)pAddress + 1192);
        FACTOR[2] = (FieldElement *)((uint8_t *)pAddress + 1200);
        FACTOR[3] = (FieldElement *)((uint8_t *)pAddress + 1208);
        FACTOR[4] = (FieldElement *)((uint8_t *)pAddress + 1216);
        FACTOR[5] = (FieldElement *)((uint8_t *)pAddress + 1224);
        FACTOR[6] = (FieldElement *)((uint8_t *)pAddress + 1232);
        FACTOR[7] = (FieldElement *)((uint8_t *)pAddress + 1240);
    }

    BinaryConstantPols (void * pAddress, uint64_t degree)
    {
        P_OPCODE = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        P_A = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        P_B = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        P_CIN = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        P_LAST = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        P_USE_CARRY = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        P_C = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        P_COUT = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        RESET = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        FACTOR[0] = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        FACTOR[1] = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        FACTOR[2] = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        FACTOR[3] = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        FACTOR[4] = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        FACTOR[5] = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        FACTOR[6] = (FieldElement *)((uint8_t *)pAddress + 120*degree);
        FACTOR[7] = (FieldElement *)((uint8_t *)pAddress + 128*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 136; }
};

class PoseidonGConstantPols
{
public:
    GeneratedPol LAST;
    GeneratedPol LATCH;
    GeneratedPol LASTBLOCK;
    GeneratedPol PARTIAL;
    GeneratedPol C[12];

    PoseidonGConstantPols (void * pAddress)
    {
        LAST = (FieldElement *)((uint8_t *)pAddress + 1248);
        LATCH = (FieldElement *)((uint8_t *)pAddress + 1256);
        LASTBLOCK = (FieldElement *)((uint8_t *)pAddress + 1264);
        PARTIAL = (FieldElement *)((uint8_t *)pAddress + 1272);
        C[0] = (FieldElement *)((uint8_t *)pAddress + 1280);
        C[1] = (FieldElement *)((uint8_t *)pAddress + 1288);
        C[2] = (FieldElement *)((uint8_t *)pAddress + 1296);
        C[3] = (FieldElement *)((uint8_t *)pAddress + 1304);
        C[4] = (FieldElement *)((uint8_t *)pAddress + 1312);
        C[5] = (FieldElement *)((uint8_t *)pAddress + 1320);
        C[6] = (FieldElement *)((uint8_t *)pAddress + 1328);
        C[7] = (FieldElement *)((uint8_t *)pAddress + 1336);
        C[8] = (FieldElement *)((uint8_t *)pAddress + 1344);
        C[9] = (FieldElement *)((uint8_t *)pAddress + 1352);
        C[10] = (FieldElement *)((uint8_t *)pAddress + 1360);
        C[11] = (FieldElement *)((uint8_t *)pAddress + 1368);
    }

    PoseidonGConstantPols (void * pAddress, uint64_t degree)
    {
        LAST = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        LATCH = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        LASTBLOCK = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        PARTIAL = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        C[0] = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        C[1] = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        C[2] = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        C[3] = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        C[4] = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        C[5] = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        C[6] = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        C[7] = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        C[8] = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        C[9] = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        C[10] = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        C[11] = (FieldElement *)((uint8_t *)pAddress + 120*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 128; }
};

class PaddingPGConstantPols
{
public:
    GeneratedPol F[8];
    GeneratedPol lastBlock;
    GeneratedPol k_crOffset;
    GeneratedPol k_crF0;
    GeneratedPol k_crF1;
    GeneratedPol k_crF2;
    GeneratedPol k_crF3;
    GeneratedPol k_crF4;
    GeneratedPol k_crF5;
    GeneratedPol k_crF6;
    GeneratedPol k_crF7;

    PaddingPGConstantPols (void * pAddress)
    {
        F[0] = (FieldElement *)((uint8_t *)pAddress + 1376);
        F[1] = (FieldElement *)((uint8_t *)pAddress + 1384);
        F[2] = (FieldElement *)((uint8_t *)pAddress + 1392);
        F[3] = (FieldElement *)((uint8_t *)pAddress + 1400);
        F[4] = (FieldElement *)((uint8_t *)pAddress + 1408);
        F[5] = (FieldElement *)((uint8_t *)pAddress + 1416);
        F[6] = (FieldElement *)((uint8_t *)pAddress + 1424);
        F[7] = (FieldElement *)((uint8_t *)pAddress + 1432);
        lastBlock = (FieldElement *)((uint8_t *)pAddress + 1440);
        k_crOffset = (FieldElement *)((uint8_t *)pAddress + 1448);
        k_crF0 = (FieldElement *)((uint8_t *)pAddress + 1456);
        k_crF1 = (FieldElement *)((uint8_t *)pAddress + 1464);
        k_crF2 = (FieldElement *)((uint8_t *)pAddress + 1472);
        k_crF3 = (FieldElement *)((uint8_t *)pAddress + 1480);
        k_crF4 = (FieldElement *)((uint8_t *)pAddress + 1488);
        k_crF5 = (FieldElement *)((uint8_t *)pAddress + 1496);
        k_crF6 = (FieldElement *)((uint8_t *)pAddress + 1504);
        k_crF7 = (FieldElement *)((uint8_t *)pAddress + 1512);
    }

    PaddingPGConstantPols (void * pAddress, uint64_t degree)
    {
        F[0] = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        F[1] = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        F[2] = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        F[3] = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        F[4] = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        F[5] = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        F[6] = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        F[7] = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        lastBlock = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        k_crOffset = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        k_crF0 = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        k_crF1 = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        k_crF2 = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        k_crF3 = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        k_crF4 = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        k_crF5 = (FieldElement *)((uint8_t *)pAddress + 120*degree);
        k_crF6 = (FieldElement *)((uint8_t *)pAddress + 128*degree);
        k_crF7 = (FieldElement *)((uint8_t *)pAddress + 136*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 144; }
};

class StorageConstantPols
{
public:
    GeneratedPol rHash;
    GeneratedPol rHashType;
    GeneratedPol rLatchGet;
    GeneratedPol rLatchSet;
    GeneratedPol rClimbRkey;
    GeneratedPol rClimbSiblingRkey;
    GeneratedPol rClimbSiblingRkeyN;
    GeneratedPol rRotateLevel;
    GeneratedPol rJmpz;
    GeneratedPol rJmp;
    GeneratedPol rConst0;
    GeneratedPol rConst1;
    GeneratedPol rConst2;
    GeneratedPol rConst3;
    GeneratedPol rAddress;
    GeneratedPol rLine;

    StorageConstantPols (void * pAddress)
    {
        rHash = (FieldElement *)((uint8_t *)pAddress + 1520);
        rHashType = (FieldElement *)((uint8_t *)pAddress + 1528);
        rLatchGet = (FieldElement *)((uint8_t *)pAddress + 1536);
        rLatchSet = (FieldElement *)((uint8_t *)pAddress + 1544);
        rClimbRkey = (FieldElement *)((uint8_t *)pAddress + 1552);
        rClimbSiblingRkey = (FieldElement *)((uint8_t *)pAddress + 1560);
        rClimbSiblingRkeyN = (FieldElement *)((uint8_t *)pAddress + 1568);
        rRotateLevel = (FieldElement *)((uint8_t *)pAddress + 1576);
        rJmpz = (FieldElement *)((uint8_t *)pAddress + 1584);
        rJmp = (FieldElement *)((uint8_t *)pAddress + 1592);
        rConst0 = (FieldElement *)((uint8_t *)pAddress + 1600);
        rConst1 = (FieldElement *)((uint8_t *)pAddress + 1608);
        rConst2 = (FieldElement *)((uint8_t *)pAddress + 1616);
        rConst3 = (FieldElement *)((uint8_t *)pAddress + 1624);
        rAddress = (FieldElement *)((uint8_t *)pAddress + 1632);
        rLine = (FieldElement *)((uint8_t *)pAddress + 1640);
    }

    StorageConstantPols (void * pAddress, uint64_t degree)
    {
        rHash = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        rHashType = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        rLatchGet = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        rLatchSet = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        rClimbRkey = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        rClimbSiblingRkey = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        rClimbSiblingRkeyN = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        rRotateLevel = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        rJmpz = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        rJmp = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        rConst0 = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        rConst1 = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        rConst2 = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        rConst3 = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        rAddress = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        rLine = (FieldElement *)((uint8_t *)pAddress + 120*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 128; }
};

class NormGate9ConstantPols
{
public:
    GeneratedPol Value3;
    GeneratedPol Value3Norm;
    GeneratedPol Gate9Type;
    GeneratedPol Gate9A;
    GeneratedPol Gate9B;
    GeneratedPol Gate9C;
    GeneratedPol Latch;
    GeneratedPol Factor;

    NormGate9ConstantPols (void * pAddress)
    {
        Value3 = (FieldElement *)((uint8_t *)pAddress + 1648);
        Value3Norm = (FieldElement *)((uint8_t *)pAddress + 1656);
        Gate9Type = (FieldElement *)((uint8_t *)pAddress + 1664);
        Gate9A = (FieldElement *)((uint8_t *)pAddress + 1672);
        Gate9B = (FieldElement *)((uint8_t *)pAddress + 1680);
        Gate9C = (FieldElement *)((uint8_t *)pAddress + 1688);
        Latch = (FieldElement *)((uint8_t *)pAddress + 1696);
        Factor = (FieldElement *)((uint8_t *)pAddress + 1704);
    }

    NormGate9ConstantPols (void * pAddress, uint64_t degree)
    {
        Value3 = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        Value3Norm = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        Gate9Type = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        Gate9A = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        Gate9B = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        Gate9C = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        Latch = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        Factor = (FieldElement *)((uint8_t *)pAddress + 56*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 64; }
};

class KeccakFConstantPols
{
public:
    GeneratedPol ConnA;
    GeneratedPol ConnB;
    GeneratedPol ConnC;
    GeneratedPol NormalizedGate;
    GeneratedPol GateType;

    KeccakFConstantPols (void * pAddress)
    {
        ConnA = (FieldElement *)((uint8_t *)pAddress + 1712);
        ConnB = (FieldElement *)((uint8_t *)pAddress + 1720);
        ConnC = (FieldElement *)((uint8_t *)pAddress + 1728);
        NormalizedGate = (FieldElement *)((uint8_t *)pAddress + 1736);
        GateType = (FieldElement *)((uint8_t *)pAddress + 1744);
    }

    KeccakFConstantPols (void * pAddress, uint64_t degree)
    {
        ConnA = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        ConnB = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        ConnC = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        NormalizedGate = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        GateType = (FieldElement *)((uint8_t *)pAddress + 32*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 40; }
};

class Nine2OneConstantPols
{
public:
    GeneratedPol Field9latch;
    GeneratedPol Factor;

    Nine2OneConstantPols (void * pAddress)
    {
        Field9latch = (FieldElement *)((uint8_t *)pAddress + 1752);
        Factor = (FieldElement *)((uint8_t *)pAddress + 1760);
    }

    Nine2OneConstantPols (void * pAddress, uint64_t degree)
    {
        Field9latch = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        Factor = (FieldElement *)((uint8_t *)pAddress + 8*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 16; }
};

class PaddingKKBitConstantPols
{
public:
    GeneratedPol r8Id;
    GeneratedPol sOutId;
    GeneratedPol latchR8;
    GeneratedPol Fr8;
    GeneratedPol rBitValid;
    GeneratedPol latchSOut;
    GeneratedPol FSOut0;
    GeneratedPol FSOut1;
    GeneratedPol FSOut2;
    GeneratedPol FSOut3;
    GeneratedPol FSOut4;
    GeneratedPol FSOut5;
    GeneratedPol FSOut6;
    GeneratedPol FSOut7;
    GeneratedPol ConnSOutBit;
    GeneratedPol ConnSInBit;
    GeneratedPol ConnNine2OneBit;

    PaddingKKBitConstantPols (void * pAddress)
    {
        r8Id = (FieldElement *)((uint8_t *)pAddress + 1768);
        sOutId = (FieldElement *)((uint8_t *)pAddress + 1776);
        latchR8 = (FieldElement *)((uint8_t *)pAddress + 1784);
        Fr8 = (FieldElement *)((uint8_t *)pAddress + 1792);
        rBitValid = (FieldElement *)((uint8_t *)pAddress + 1800);
        latchSOut = (FieldElement *)((uint8_t *)pAddress + 1808);
        FSOut0 = (FieldElement *)((uint8_t *)pAddress + 1816);
        FSOut1 = (FieldElement *)((uint8_t *)pAddress + 1824);
        FSOut2 = (FieldElement *)((uint8_t *)pAddress + 1832);
        FSOut3 = (FieldElement *)((uint8_t *)pAddress + 1840);
        FSOut4 = (FieldElement *)((uint8_t *)pAddress + 1848);
        FSOut5 = (FieldElement *)((uint8_t *)pAddress + 1856);
        FSOut6 = (FieldElement *)((uint8_t *)pAddress + 1864);
        FSOut7 = (FieldElement *)((uint8_t *)pAddress + 1872);
        ConnSOutBit = (FieldElement *)((uint8_t *)pAddress + 1880);
        ConnSInBit = (FieldElement *)((uint8_t *)pAddress + 1888);
        ConnNine2OneBit = (FieldElement *)((uint8_t *)pAddress + 1896);
    }

    PaddingKKBitConstantPols (void * pAddress, uint64_t degree)
    {
        r8Id = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        sOutId = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        latchR8 = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        Fr8 = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        rBitValid = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        latchSOut = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        FSOut0 = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        FSOut1 = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        FSOut2 = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        FSOut3 = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        FSOut4 = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        FSOut5 = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        FSOut6 = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        FSOut7 = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        ConnSOutBit = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        ConnSInBit = (FieldElement *)((uint8_t *)pAddress + 120*degree);
        ConnNine2OneBit = (FieldElement *)((uint8_t *)pAddress + 128*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 136; }
};

class PaddingKKConstantPols
{
public:
    GeneratedPol r8Id;
    GeneratedPol lastBlock;
    GeneratedPol lastBlockLatch;
    GeneratedPol r8valid;
    GeneratedPol sOutId;
    GeneratedPol forceLastHash;
    GeneratedPol k_crOffset;
    GeneratedPol k_crF0;
    GeneratedPol k_crF1;
    GeneratedPol k_crF2;
    GeneratedPol k_crF3;
    GeneratedPol k_crF4;
    GeneratedPol k_crF5;
    GeneratedPol k_crF6;
    GeneratedPol k_crF7;
    GeneratedPol crValid;

    PaddingKKConstantPols (void * pAddress)
    {
        r8Id = (FieldElement *)((uint8_t *)pAddress + 1904);
        lastBlock = (FieldElement *)((uint8_t *)pAddress + 1912);
        lastBlockLatch = (FieldElement *)((uint8_t *)pAddress + 1920);
        r8valid = (FieldElement *)((uint8_t *)pAddress + 1928);
        sOutId = (FieldElement *)((uint8_t *)pAddress + 1936);
        forceLastHash = (FieldElement *)((uint8_t *)pAddress + 1944);
        k_crOffset = (FieldElement *)((uint8_t *)pAddress + 1952);
        k_crF0 = (FieldElement *)((uint8_t *)pAddress + 1960);
        k_crF1 = (FieldElement *)((uint8_t *)pAddress + 1968);
        k_crF2 = (FieldElement *)((uint8_t *)pAddress + 1976);
        k_crF3 = (FieldElement *)((uint8_t *)pAddress + 1984);
        k_crF4 = (FieldElement *)((uint8_t *)pAddress + 1992);
        k_crF5 = (FieldElement *)((uint8_t *)pAddress + 2000);
        k_crF6 = (FieldElement *)((uint8_t *)pAddress + 2008);
        k_crF7 = (FieldElement *)((uint8_t *)pAddress + 2016);
        crValid = (FieldElement *)((uint8_t *)pAddress + 2024);
    }

    PaddingKKConstantPols (void * pAddress, uint64_t degree)
    {
        r8Id = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        lastBlock = (FieldElement *)((uint8_t *)pAddress + 8*degree);
        lastBlockLatch = (FieldElement *)((uint8_t *)pAddress + 16*degree);
        r8valid = (FieldElement *)((uint8_t *)pAddress + 24*degree);
        sOutId = (FieldElement *)((uint8_t *)pAddress + 32*degree);
        forceLastHash = (FieldElement *)((uint8_t *)pAddress + 40*degree);
        k_crOffset = (FieldElement *)((uint8_t *)pAddress + 48*degree);
        k_crF0 = (FieldElement *)((uint8_t *)pAddress + 56*degree);
        k_crF1 = (FieldElement *)((uint8_t *)pAddress + 64*degree);
        k_crF2 = (FieldElement *)((uint8_t *)pAddress + 72*degree);
        k_crF3 = (FieldElement *)((uint8_t *)pAddress + 80*degree);
        k_crF4 = (FieldElement *)((uint8_t *)pAddress + 88*degree);
        k_crF5 = (FieldElement *)((uint8_t *)pAddress + 96*degree);
        k_crF6 = (FieldElement *)((uint8_t *)pAddress + 104*degree);
        k_crF7 = (FieldElement *)((uint8_t *)pAddress + 112*degree);
        crValid = (FieldElement *)((uint8_t *)pAddress + 120*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 128; }
};

class MemConstantPols
{
public:
    GeneratedPol INCS;
    GeneratedPol ISNOTLAST;

    MemConstantPols (void * pAddress)
    {
        INCS = (FieldElement *)((uint8_t *)pAddress + 2032);
        ISNOTLAST = (FieldElement *)((uint8_t *)pAddress + 2040);
    }

    MemConstantPols (void * pAddress, uint64_t degree)
    {
        INCS = (FieldElement *)((uint8_t *)pAddress + 0*degree);
        ISNOTLAST = (FieldElement *)((uint8_t *)pAddress + 8*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 16; }
};

class MainConstantPols
{
public:
    GeneratedPol STEP;

    MainConstantPols (void * pAddress)
    {
        STEP = (FieldElement *)((uint8_t *)pAddress + 2048);
    }

    MainConstantPols (void * pAddress, uint64_t degree)
    {
        STEP = (FieldElement *)((uint8_t *)pAddress + 0*degree);
    }

    static uint64_t degree (void) { return 2097152; }
    static uint64_t size (void) { return 8; }
};

class ConstantPols
{
public:
    GlobalConstantPols Global;
    RomConstantPols Rom;
    Byte4ConstantPols Byte4;
    MemAlignConstantPols MemAlign;
    ArithConstantPols Arith;
    BinaryConstantPols Binary;
    PoseidonGConstantPols PoseidonG;
    PaddingPGConstantPols PaddingPG;
    StorageConstantPols Storage;
    NormGate9ConstantPols NormGate9;
    KeccakFConstantPols KeccakF;
    Nine2OneConstantPols Nine2One;
    PaddingKKBitConstantPols PaddingKKBit;
    PaddingKKConstantPols PaddingKK;
    MemConstantPols Mem;
    MainConstantPols Main;

    ConstantPols (void * pAddress) : Global(pAddress), Rom(pAddress), Byte4(pAddress), MemAlign(pAddress), Arith(pAddress), Binary(pAddress), PoseidonG(pAddress), PaddingPG(pAddress), Storage(pAddress), NormGate9(pAddress), KeccakF(pAddress), Nine2One(pAddress), PaddingKKBit(pAddress), PaddingKK(pAddress), Mem(pAddress), Main(pAddress) {}

    static uint64_t size (void) { return 4311744512; }
};

#endif // CONSTANT_POLS_HPP