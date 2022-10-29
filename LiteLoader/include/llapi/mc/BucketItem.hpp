/**
 * @file  BucketItem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BucketItem.
 *
 */
class BucketItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BUCKETITEM
public:
    class BucketItem& operator=(class BucketItem const &) = delete;
    BucketItem(class BucketItem const &) = delete;
    BucketItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   546138983
     */
    virtual ~BucketItem();
    /**
     * @vftbl  7
     * @hash   -1350044025
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @hash   -331173084
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @hash   -335613865
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @hash   -326555479
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @hash   -216656480
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @hash   -214809438
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl  56
     * @symbol ?isDestructive@BucketItem@@UEBA_NH@Z
     * @hash   570812666
     */
    virtual bool isDestructive(int) const;
    /**
     * @vftbl  57
     * @symbol ?isLiquidClipItem@BucketItem@@UEBA_NH@Z
     * @hash   987048921
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @vftbl  66
     * @hash   -183409724
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  67
     * @symbol ?isValidAuxValue@BucketItem@@UEBA_NH@Z
     * @hash   -897755997
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  70
     * @hash   -160321699
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @hash   -159398178
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @hash   -165686001
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @hash   -1024298074
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @hash   -1003980612
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  83
     * @symbol ?canUseOnSimTick@BucketItem@@UEBA_NXZ
     * @hash   -941433287
     */
    virtual bool canUseOnSimTick() const;
    /**
     * @vftbl  84
     * @symbol ?use@BucketItem@@UEBAAEAVItemStack@@AEAV2@AEAVPlayer@@@Z
     * @hash   1632923985
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @vftbl  85
     * @symbol ?dispense@BucketItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     * @hash   -528434407
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl  86
     * @symbol ?useTimeDepleted@BucketItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z
     * @hash   2010854381
     */
    virtual enum class ItemUseMethod useTimeDepleted(class ItemStack &, class Level *, class Player *) const;
    /**
     * @vftbl  87
     * @symbol ?releaseUsing@BucketItem@@UEBAXAEAVItemStack@@PEAVPlayer@@H@Z
     * @hash   1119529199
     */
    virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /**
     * @vftbl  95
     * @symbol ?buildDescriptionId@BucketItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVItemDescriptor@@PEBVCompoundTag@@@Z
     * @hash   171543741
     */
    virtual std::string buildDescriptionId(class ItemDescriptor const &, class CompoundTag const *) const;
    /**
     * @vftbl  100
     * @symbol ?getMaxStackSize@BucketItem@@UEBAEAEBVItemDescriptor@@@Z
     * @hash   988153782
     */
    virtual unsigned char getMaxStackSize(class ItemDescriptor const &) const;
    /**
     * @vftbl  111
     * @symbol ?validFishInteraction@BucketItem@@UEBA_NH@Z
     * @hash   -1818329532
     */
    virtual bool validFishInteraction(int) const;
    /**
     * @vftbl  117
     * @symbol ?setIconInfo@BucketItem@@UEAAAEAVItem@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -281339555
     */
    virtual class Item & setIconInfo(std::string const &, int);
    /**
     * @vftbl  122
     * @symbol ?getLightEmission@BucketItem@@UEBA?AUBrightness@@H@Z
     * @hash   585848072
     */
    virtual struct Brightness getLightEmission(int) const;
    /**
     * @vftbl  129
     * @symbol ?getAuxValuesDescription@BucketItem@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -623348839
     */
    virtual std::string getAuxValuesDescription() const;
    /**
     * @vftbl  132
     * @symbol ?_useOn@BucketItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     * @hash   -402610085
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BUCKETITEM
    /**
     * @symbol ?isBucket@BucketItem@@UEBA_NXZ
     * @hash   -1086490209
     */
    MCVAPI bool isBucket() const;
    /**
     * @symbol ?uniqueAuxValues@BucketItem@@UEBA_NXZ
     * @hash   -574743232
     */
    MCVAPI bool uniqueAuxValues() const;
#endif
    /**
     * @symbol ??0BucketItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4BucketFillType@@@Z
     * @hash   1813978658
     */
    MCAPI BucketItem(std::string const &, int, enum class BucketFillType);
    /**
     * @symbol ?DRINK_DURATION@BucketItem@@2HB
     * @hash   -498451027
     */
    MCAPI static int const DRINK_DURATION;

//protected:
    /**
     * @symbol ?addBucketEntitySaveData@BucketItem@@IEBAXAEAVActor@@AEAVItemStack@@@Z
     * @hash   1466079818
     */
    MCAPI void addBucketEntitySaveData(class Actor &, class ItemStack &) const;
    /**
     * @symbol ?readBucketEntitySaveData@BucketItem@@IEBA_NAEAVBlockSource@@PEAVActor@@EVBlockPos@@AEBVItemInstance@@@Z
     * @hash   1507230376
     */
    MCAPI bool readBucketEntitySaveData(class BlockSource &, class Actor *, unsigned char, class BlockPos, class ItemInstance const &) const;

//private:
    /**
     * @symbol ?_canEmptyBucketIntoBlock@BucketItem@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@2@Z
     * @hash   1538151885
     */
    MCAPI bool _canEmptyBucketIntoBlock(class BlockSource &, class BlockPos const &, class Block const &, class Block const &) const;
    /**
     * @symbol ?_emptyBucket@BucketItem@@AEBA_NAEAVBlockSource@@AEBVBlock@@AEBVBlockPos@@PEAVActor@@AEBVItemStack@@E@Z
     * @hash   -1740289278
     */
    MCAPI bool _emptyBucket(class BlockSource &, class Block const &, class BlockPos const &, class Actor *, class ItemStack const &, unsigned char) const;
    /**
     * @symbol ?_removeBubbleColumn@BucketItem@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -435817039
     */
    MCAPI void _removeBubbleColumn(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_takeLiquid@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z
     * @hash   -564866362
     */
    MCAPI bool _takeLiquid(class ItemStack &, class Actor &, class BlockPos const &) const;
    /**
     * @symbol ?_takePowderSnow@BucketItem@@AEBA_NAEAVItemStack@@AEAVActor@@AEBVBlockPos@@@Z
     * @hash   -466397706
     */
    MCAPI bool _takePowderSnow(class ItemStack &, class Actor &, class BlockPos const &) const;
    /**
     * @symbol ?_tryGetBlock@BucketItem@@AEBAPEBVBlockLegacy@@W4BucketFillType@@@Z
     * @hash   -1239240787
     */
    MCAPI class BlockLegacy const * _tryGetBlock(enum class BucketFillType) const;

protected:

private:
    /**
     * @symbol ?mFillTypeToEntityType@BucketItem@@0V?$vector@U?$pair@W4BucketFillType@@W4ActorType@@@std@@V?$allocator@U?$pair@W4BucketFillType@@W4ActorType@@@std@@@2@@std@@B
     * @hash   -1676114041
     */
    MCAPI static std::vector<struct std::pair<enum class BucketFillType, enum class ActorType>> const mFillTypeToEntityType;

};