// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MultifaceBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class SculkVeinBlock : public MultifaceBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKVEINBLOCK
public:
    class SculkVeinBlock& operator=(class SculkVeinBlock const &) = delete;
    SculkVeinBlock(class SculkVeinBlock const &) = delete;
    SculkVeinBlock() = delete;
#endif

public:
    /*0*/ virtual ~SculkVeinBlock();
    /*19*/ virtual void __unk_vfn_19();
    /*30*/ virtual void __unk_vfn_30();
    /*31*/ virtual void __unk_vfn_31();
    /*32*/ virtual void __unk_vfn_32();
    /*34*/ virtual void __unk_vfn_34();
    /*35*/ virtual void __unk_vfn_35();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*43*/ virtual void __unk_vfn_43();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*58*/ virtual void __unk_vfn_58();
    /*59*/ virtual void __unk_vfn_59();
    /*66*/ virtual bool checkIsPathable(class Actor &, class BlockPos const &, class BlockPos const &) const;
    /*72*/ virtual void __unk_vfn_72();
    /*79*/ virtual void __unk_vfn_79();
    /*99*/ virtual int getResourceCount(class Randomize &, class Block const &, int) const;
    /*104*/ virtual void __unk_vfn_104();
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*148*/ virtual void __unk_vfn_148();
    /*165*/ virtual void __unk_vfn_165();
    /*179*/ virtual void __unk_vfn_179();
    /*180*/ virtual void __unk_vfn_180();
    /*187*/ virtual void __unk_vfn_187();
    /*199*/ virtual void __unk_vfn_199();
    /*204*/ virtual class MultifaceSpreader const & getMultifaceSpreader() const;
    /*
    inline class Block const & getMultifaceBlock() const{
        class Block const & (SculkVeinBlock::*rv)() const;
        *((void**)&rv) = dlsym("?getMultifaceBlock@SculkVeinBlock@@UEBAAEBVBlock@@XZ");
        return (this->*rv)();
    }
    */
    MCAPI SculkVeinBlock(std::string const &, int, class Material const &);

protected:

private:

};