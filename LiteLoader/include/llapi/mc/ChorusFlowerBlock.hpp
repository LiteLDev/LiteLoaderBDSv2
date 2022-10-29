/**
 * @file  ChorusFlowerBlock.hpp
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
 * @brief MC class ChorusFlowerBlock.
 *
 */
class ChorusFlowerBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHORUSFLOWERBLOCK
public:
    class ChorusFlowerBlock& operator=(class ChorusFlowerBlock const &) = delete;
    ChorusFlowerBlock(class ChorusFlowerBlock const &) = delete;
    ChorusFlowerBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   706635578
     */
    virtual ~ChorusFlowerBlock();
    /**
     * @vftbl  19
     * @hash   -323784916
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  22
     * @symbol ?canProvideSupport@ChorusFlowerBlock@@UEBA_NAEBVBlock@@EW4BlockSupportType@@@Z
     * @hash   -1764393781
     */
    virtual bool canProvideSupport(class Block const &, unsigned char, enum class BlockSupportType) const;
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
     * @vftbl  35
     * @symbol ?isWaterBlocking@ChorusFlowerBlock@@UEBA_NXZ
     * @hash   1158880910
     */
    virtual bool isWaterBlocking() const;
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
     * @vftbl  62
     * @symbol ?canContainLiquid@ChorusFlowerBlock@@UEBA_NXZ
     * @hash   -42135828
     */
    virtual bool canContainLiquid() const;
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
     * @vftbl  92
     * @symbol ?mayPlace@ChorusFlowerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1263114044
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@ChorusFlowerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   -1613011970
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
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
     * @vftbl  146
     * @symbol ?getVariant@ChorusFlowerBlock@@UEBAHAEBVBlock@@@Z
     * @hash   -1182145524
     */
    virtual int getVariant(class Block const &) const;
    /**
     * @vftbl  156
     * @hash   1472752786
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
     * @vftbl  172
     * @symbol ?playerDestroy@ChorusFlowerBlock@@UEBAXAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1563632928
     */
    virtual void playerDestroy(class Player &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  173
     * @symbol ?tick@ChorusFlowerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1074376014
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  174
     * @symbol ?randomTick@ChorusFlowerBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -1246372369
     */
    virtual void randomTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1537222432
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  179
     * @symbol ?canSurvive@ChorusFlowerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -742391580
     */
    virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  188
     * @symbol ?getResourceCount@ChorusFlowerBlock@@UEBAHAEAVRandomize@@AEBVBlock@@H@Z
     * @hash   -526415214
     */
    virtual int getResourceCount(class Randomize &, class Block const &, int) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CHORUSFLOWERBLOCK
    /**
     * @symbol ?waterSpreadCausesSpawn@ChorusFlowerBlock@@UEBA_NXZ
     * @hash   -156360093
     */
    MCVAPI bool waterSpreadCausesSpawn() const;
#endif
    /**
     * @symbol ??0ChorusFlowerBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     * @hash   -1079899622
     */
    MCAPI ChorusFlowerBlock(std::string const &, int);
    /**
     * @symbol ?BRANCH_DIRECTIONS@ChorusFlowerBlock@@2HB
     * @hash   -312091669
     */
    MCAPI static int const BRANCH_DIRECTIONS;
    /**
     * @symbol ?DEAD_AGE@ChorusFlowerBlock@@2GB
     * @hash   -1779983676
     */
    MCAPI static unsigned short const DEAD_AGE;
    /**
     * @symbol ?GROW_RATE@ChorusFlowerBlock@@2HB
     * @hash   -1615465635
     */
    MCAPI static int const GROW_RATE;
    /**
     * @symbol ?generatePlant@ChorusFlowerBlock@@SAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@H@Z
     * @hash   -1829148147
     */
    MCAPI static void generatePlant(class BlockSource &, class BlockPos const &, class Random &, int);

//private:
    /**
     * @symbol ?_placeDeadFlower@ChorusFlowerBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1632398004
     */
    MCAPI void _placeDeadFlower(class BlockSource &, class BlockPos const &) const;
    /**
     * @symbol ?_placeGrownFlower@ChorusFlowerBlock@@AEBAXAEAVBlockSource@@AEBVBlockPos@@H@Z
     * @hash   663840690
     */
    MCAPI void _placeGrownFlower(class BlockSource &, class BlockPos const &, int) const;
    /**
     * @symbol ?_growTreeRecursive@ChorusFlowerBlock@@CAXAEAVBlockSource@@AEBVBlockPos@@1AEAVRandom@@HH@Z
     * @hash   -2132505445
     */
    MCAPI static void _growTreeRecursive(class BlockSource &, class BlockPos const &, class BlockPos const &, class Random &, int, int);

private:

};