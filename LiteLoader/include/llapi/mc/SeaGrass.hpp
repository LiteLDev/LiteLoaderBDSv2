/**
 * @file  SeaGrass.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BlockLegacy.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SeaGrass.
 *
 */
class SeaGrass : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SEAGRASS
public:
    class SeaGrass& operator=(class SeaGrass const &) = delete;
    SeaGrass(class SeaGrass const &) = delete;
    SeaGrass() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   42647665
     */
    virtual ~SeaGrass();
    /**
     * @vftbl  8
     * @symbol ?randomlyModifyPosition@SeaGrass@@UEBA?AVVec3@@AEBVBlockPos@@@Z
     * @hash   -817426484
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @vftbl  10
     * @symbol ?getAABB@SeaGrass@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -1938753049
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  19
     * @hash   -323784916
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -295155765
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -274838303
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -272991261
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -272067740
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -271144219
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -269297177
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -268373656
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -267450135
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -266526614
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -246209152
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -245285631
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -244362110
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -242515068
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -241591547
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -240668026
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -239744505
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -238820984
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -237897463
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -213885917
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  55
     * @symbol ?isValidAuxValue@SeaGrass@@UEBA_NH@Z
     * @hash   -349639059
     */
    virtual bool isValidAuxValue(int) const;
    /**
     * @vftbl  60
     * @hash   -196162194
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -188027329
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  75
     * @hash   -155704094
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @hash   -129845506
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  86
     * @symbol ?onFertilized@SeaGrass@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     * @hash   151187759
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @vftbl  87
     * @symbol ?mayConsumeFertilizer@SeaGrass@@UEBA_NAEAVBlockSource@@@Z
     * @hash   -713619608
     */
    virtual bool mayConsumeFertilizer(class BlockSource &) const;
    /**
     * @vftbl  88
     * @symbol ?canBeFertilized@SeaGrass@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   872252524
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  92
     * @symbol ?mayPlace@SeaGrass@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1770531607
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@SeaGrass@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -363721207
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  102
     * @symbol ?asItemInstance@SeaGrass@@UEBA?AVItemInstance@@AEBVBlock@@PEBVBlockActor@@@Z
     * @hash   1124796707
     */
    virtual class ItemInstance asItemInstance(class Block const &, class BlockActor const *) const;
    /**
     * @vftbl  105
     * @hash   1335894854
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  123
     * @hash   1391306114
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1393153156
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1394076677
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1418088223
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  133
     * @symbol ?buildDescriptionId@SeaGrass@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     * @hash   -1408330338
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @vftbl  135
     * @symbol ?getColor@SeaGrass@@UEBAHAEBVBlock@@@Z
     * @hash   22573385
     */
    virtual int getColor(class Block const &) const;
    /**
     * @vftbl  136
     * @symbol ?getColor@SeaGrass@@UEBAHAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   2065913171
     */
    virtual int getColor(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  156
     * @hash   1479964130
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  167
     * @hash   1459544802
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1460468323
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @hash   1461391844
     */
    virtual void __unk_vfn_169();
    /**
     * @vftbl  170
     * @symbol ?onPlace@SeaGrass@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1874257341
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  172
     * @symbol ?playerDestroy@SeaGrass@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   951011467
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  173
     * @symbol ?tick@SeaGrass@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -2059967091
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1537222432
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  179
     * @symbol ?canSurvive@SeaGrass@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1237447383
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  186
     * @symbol ?getMapColor@SeaGrass@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1666004529
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  188
     * @symbol ?getResourceCount@SeaGrass@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -1262054931
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SEAGRASS
    /**
     * @symbol ?canBeSilkTouched@SeaGrass@@MEBA_NXZ
     * @hash   746142656
     */
    MCVAPI bool canBeSilkTouched() const;
    /**
     * @symbol ?waterSpreadCausesSpawn@SeaGrass@@UEBA_NXZ
     * @hash   462694312
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0SeaGrass@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1615229867
     */
    MCAPI SeaGrass(std::string const &, int);
    /**
     * @symbol ?trySpawnSeaGrass@SeaGrass@@SA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1864002012
     */
    MCAPI static bool trySpawnSeaGrass(class BlockSource &, class BlockPos const &);

};