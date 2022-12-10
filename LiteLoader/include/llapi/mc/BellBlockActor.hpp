/**
 * @file  BellBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Direction.hpp"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BellBlockActor.
 *
 */
class BellBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BELLBLOCKACTOR
public:
    class BellBlockActor& operator=(class BellBlockActor const &) = delete;
    BellBlockActor(class BellBlockActor const &) = delete;
    BellBlockActor() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -737837035
     */
    virtual ~BellBlockActor();
    /**
     * @vftbl  1
     * @symbol ?load@BellBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -1540261678
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl  2
     * @symbol ?save@BellBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   1543123329
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl  7
     * @symbol ?tick@BellBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1127728539
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl  12
     * @hash   -291256027
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @hash   -285714901
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl  31
     * @hash   -234921246
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @hash   -233997725
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -233074204
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -232150683
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @hash   -190772906
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @hash   -189849385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @symbol ?_getUpdatePacket@BellBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   1972309044
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl  38
     * @symbol ?_onUpdatePacket@BellBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   827161262
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ??0BellBlockActor@@QEAA@AEBVBlockPos@@@Z
     * @hash   859118414
     */
    MCAPI BellBlockActor(class BlockPos const &);
    /**
     * @symbol ?ejectItem@BellBlockActor@@QEBAXAEBVBlockPos@@AEAVActor@@@Z
     * @hash   -1263991233
     */
    MCAPI void ejectItem(class BlockPos const &, class Actor &) const;
    /**
     * @symbol ?isRinging@BellBlockActor@@QEBA_NXZ
     * @hash   -1736089910
     */
    MCAPI bool isRinging() const;
    /**
     * @symbol ?ring@BellBlockActor@@QEAA_NW4Type@Direction@@AEAVBlockSource@@PEAVActor@@_N@Z
     * @hash   -2111684317
     */
    MCAPI bool ring(enum class Direction::Type, class BlockSource &, class Actor *, bool);

};