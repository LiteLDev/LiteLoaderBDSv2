// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "PredictableProjectile.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FallingBlock : public PredictableProjectile {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FALLINGBLOCK
public:
    class FallingBlock& operator=(class FallingBlock const &) = delete;
    FallingBlock(class FallingBlock const &) = delete;
    FallingBlock() = delete;
#endif

public:
    /*8*/ virtual void reloadHardcoded(enum Actor::InitializationMethod, class VariantParameterList const &);
    /*14*/ virtual ~FallingBlock();
    /*40*/ virtual void __unk_vfn_40();
    /*43*/ virtual void teleportTo(class Vec3 const &, bool, int, int);
    /*48*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*79*/ virtual float getShadowHeightOffs();
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*88*/ virtual void __unk_vfn_88();
    /*94*/ virtual bool isPickable();
    /*95*/ virtual void __unk_vfn_95();
    /*98*/ virtual void __unk_vfn_98();
    /*105*/ virtual void __unk_vfn_105();
    /*107*/ virtual void __unk_vfn_107();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*180*/ virtual bool canChangeDimensions() const;
    /*181*/ virtual void __unk_vfn_181();
    /*185*/ virtual void causeFallDamage(float, float, class ActorDamageSource);
    /*190*/ virtual void onSynchedDataUpdate(int);
    /*195*/ virtual void __unk_vfn_195();
    /*220*/ virtual void __unk_vfn_220();
    /*221*/ virtual void __unk_vfn_221();
    /*246*/ virtual void __unk_vfn_246();
    /*249*/ virtual void __unk_vfn_249();
    /*261*/ virtual void __unk_vfn_261();
    /*262*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*265*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*266*/ virtual void addAdditionalSaveData(class CompoundTag &);
    /*269*/ virtual void __unk_vfn_269();
    /*
    inline float getDeletionDelayTimeSeconds() const{
        float (FallingBlock::*rv)() const;
        *((void**)&rv) = dlsym("?getDeletionDelayTimeSeconds@FallingBlock@@UEBAMXZ");
        return (this->*rv)();
    }
    */
    MCAPI FallingBlock(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI class Block const & getFallingBlock() const;
    MCAPI void setFallDamageAmount(float);
    MCAPI void setFallingBlock(class Block const &, bool);

protected:

private:
    MCAPI void _breakBlock();
    MCAPI void _waitRemoval();

};