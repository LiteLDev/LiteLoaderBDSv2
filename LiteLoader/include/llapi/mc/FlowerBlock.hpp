/**
 * @file  FlowerBlock.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BushBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlowerBlock.
 *
 */
class FlowerBlock : public BushBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOWERBLOCK
public:
    class FlowerBlock& operator=(class FlowerBlock const &) = delete;
    FlowerBlock(class FlowerBlock const &) = delete;
    FlowerBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1404030144
     */
    virtual ~FlowerBlock();
    /**
     * @vftbl  8
     * @symbol ?randomlyModifyPosition@FlowerBlock@@UEBA?AVVec3@@AEBVBlockPos@@@Z
     * @hash   464919207
     */
    virtual class Vec3 randomlyModifyPosition(class BlockPos const &) const;
    /**
     * @vftbl  10
     * @symbol ?getAABB@FlowerBlock@@UEBAAEBVAABB@@AEBVIConstBlockSource@@AEBVBlockPos@@AEBVBlock@@AEAV2@_N@Z
     * @hash   -1873609902
     */
    virtual class AABB const & getAABB(class IConstBlockSource const &, class BlockPos const &, class Block const &, class AABB &, bool) const;
    /**
     * @vftbl  18
     * @symbol ?isSolid@FlowerBlock@@UEBA_NXZ
     * @hash   1058143895
     */
    virtual bool isSolid() const;
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
     * @symbol ?canContainLiquid@FlowerBlock@@UEBA_NXZ
     * @hash   1739134438
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
     * @vftbl  86
     * @symbol ?onFertilized@FlowerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@W4FertilizerType@@@Z
     * @hash   -20476908
     */
    virtual bool onFertilized(class BlockSource &, class BlockPos const &, class Actor *, enum class FertilizerType) const;
    /**
     * @vftbl  88
     * @symbol ?canBeFertilized@FlowerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   -1396560985
     */
    virtual bool canBeFertilized(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @vftbl  92
     * @symbol ?mayPlace@FlowerBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1176589854
     */
    virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  93
     * @symbol ?mayPlaceOn@FlowerBlock@@MEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1539769638
     */
    virtual bool mayPlaceOn(class BlockSource &, class BlockPos const &) const;
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
     * @symbol ?buildDescriptionId@FlowerBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     * @hash   1773183689
     */
    virtual std::string buildDescriptionId(class Block const &) const;
    /**
     * @vftbl  134
     * @symbol ?isAuxValueRelevantForPicking@FlowerBlock@@UEBA_NXZ
     * @hash   910755106
     */
    virtual bool isAuxValueRelevantForPicking() const;
    /**
     * @vftbl  156
     * @hash   1472752786
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  157
     * @symbol ?getSilkTouchItemInstance@FlowerBlock@@MEBA?AVItemInstance@@AEBVBlock@@@Z
     * @hash   -687018400
     */
    virtual class ItemInstance getSilkTouchItemInstance(class Block const &) const;
    /**
     * @vftbl  162
     * @symbol ?_addHardCodedBlockComponents@FlowerBlock@@UEAAXXZ
     * @hash   -1498722178
     */
    virtual void _addHardCodedBlockComponents();
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
     * @vftbl  176
     * @hash   1537222432
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  180
     * @symbol ?getRenderLayer@FlowerBlock@@UEBA?AW4BlockRenderLayer@@XZ
     * @hash   1795011013
     */
    virtual enum class BlockRenderLayer getRenderLayer() const;
    /**
     * @vftbl  181
     * @symbol ?getRenderLayer@FlowerBlock@@UEBA?AW4BlockRenderLayer@@AEBVBlock@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1960712363
     */
    virtual enum class BlockRenderLayer getRenderLayer(class Block const &, class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  186
     * @symbol ?getMapColor@FlowerBlock@@UEBA?AVColor@mce@@AEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   1098086260
     */
    virtual class mce::Color getMapColor(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  187
     * @hash   1566775104
     */
    virtual void __unk_vfn_187();
    /**
     * @vftbl  189
     * @symbol ?getResourceItem@FlowerBlock@@MEBA?AVItemInstance@@AEAVRandomize@@AEBVBlock@@H@Z
     * @hash   1642488119
     */
    virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /**
     * @symbol ??0FlowerBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HW4Type@0@AEBVMaterial@@@Z
     * @hash   255987698
     */
    MCAPI FlowerBlock(std::string const &, int, enum class FlowerBlock::Type, class Material const &);

};