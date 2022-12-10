/**
 * @file  HeavyBlock.hpp
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
 * @brief MC class HeavyBlock.
 *
 */
class HeavyBlock : public BlockLegacy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_HEAVYBLOCK
public:
    class HeavyBlock& operator=(class HeavyBlock const &) = delete;
    HeavyBlock(class HeavyBlock const &) = delete;
    HeavyBlock() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   572744400
     */
    virtual ~HeavyBlock();
    /**
     * @vftbl  19
     * @hash   -227039124
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl  29
     * @hash   -198409973
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @hash   -178092511
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @hash   -176245469
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @hash   -175321948
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @hash   -174398427
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  36
     * @hash   -172551385
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl  37
     * @hash   -171627864
     */
    virtual void __unk_vfn_37();
    /**
     * @vftbl  38
     * @hash   -170704343
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl  39
     * @hash   -169780822
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl  40
     * @hash   -149463360
     */
    virtual void __unk_vfn_40();
    /**
     * @vftbl  41
     * @hash   -148539839
     */
    virtual void __unk_vfn_41();
    /**
     * @vftbl  42
     * @hash   -147616318
     */
    virtual void __unk_vfn_42();
    /**
     * @vftbl  44
     * @hash   -145769276
     */
    virtual void __unk_vfn_44();
    /**
     * @vftbl  45
     * @hash   -144845755
     */
    virtual void __unk_vfn_45();
    /**
     * @vftbl  46
     * @hash   -143922234
     */
    virtual void __unk_vfn_46();
    /**
     * @vftbl  47
     * @hash   -142998713
     */
    virtual void __unk_vfn_47();
    /**
     * @vftbl  48
     * @hash   -142075192
     */
    virtual void __unk_vfn_48();
    /**
     * @vftbl  49
     * @hash   -141151671
     */
    virtual void __unk_vfn_49();
    /**
     * @vftbl  54
     * @hash   -117140125
     */
    virtual void __unk_vfn_54();
    /**
     * @vftbl  60
     * @hash   -92205058
     */
    virtual void __unk_vfn_60();
    /**
     * @vftbl  61
     * @hash   -91281537
     */
    virtual void __unk_vfn_61();
    /**
     * @vftbl  75
     * @hash   -58958302
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  82
     * @hash   -33099714
     */
    virtual void __unk_vfn_82();
    /**
     * @vftbl  100
     * @symbol ?neighborChanged@HeavyBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@1@Z
     * @hash   185177800
     */
    virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /**
     * @vftbl  105
     * @hash   1432640646
     */
    virtual void __unk_vfn_105();
    /**
     * @vftbl  123
     * @hash   1488051906
     */
    virtual void __unk_vfn_123();
    /**
     * @vftbl  125
     * @hash   1489898948
     */
    virtual void __unk_vfn_125();
    /**
     * @vftbl  126
     * @hash   1490822469
     */
    virtual void __unk_vfn_126();
    /**
     * @vftbl  131
     * @hash   1514834015
     */
    virtual void __unk_vfn_131();
    /**
     * @vftbl  151
     * @symbol ?animateTick@HeavyBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   103458475
     */
    virtual void animateTick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  156
     * @hash   1569252562
     */
    virtual void __unk_vfn_156();
    /**
     * @vftbl  166
     * @hash   1547586817
     */
    virtual void __unk_vfn_166();
    /**
     * @vftbl  167
     * @hash   1548510338
     */
    virtual void __unk_vfn_167();
    /**
     * @vftbl  168
     * @hash   1549433859
     */
    virtual void __unk_vfn_168();
    /**
     * @vftbl  169
     * @symbol ?onPlace@HeavyBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -141497250
     */
    virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  172
     * @hash   1630274140
     */
    virtual void __unk_vfn_172();
    /**
     * @vftbl  173
     * @symbol ?tick@HeavyBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
     * @hash   -2127171156
     */
    virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /**
     * @vftbl  176
     * @hash   1633968224
     */
    virtual void __unk_vfn_176();
    /**
     * @vftbl  186
     * @hash   1662597375
     */
    virtual void __unk_vfn_186();
    /**
     * @vftbl  192
     * @symbol ?getDustColor@TopSnowBlock@@UEBA?AVColor@mce@@AEBVBlock@@@Z
     * @hash   -1403806291
     */
    virtual class mce::Color getDustColor(class Block const &) const = 0;
    /**
     * @vftbl  193
     * @symbol ?getDustParticleName@TopSnowBlock@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlock@@@Z
     * @hash   1086664648
     */
    virtual std::string getDustParticleName(class Block const &) const = 0;
    /**
     * @vftbl  194
     * @hash   1689379484
     */
    virtual void __unk_vfn_194();
    /**
     * @vftbl  195
     * @symbol ?onLand@HeavyBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1164846432
     */
    virtual void onLand(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  196
     * @symbol ?isFreeToFall@HeavyBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -949255404
     */
    virtual bool isFreeToFall(class BlockSource &, class BlockPos const &) const;
    /**
     * @vftbl  197
     * @symbol ?startFalling@HeavyBlock@@MEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@_N@Z
     * @hash   -1712952812
     */
    virtual void startFalling(class BlockSource &, class BlockPos const &, class Block const &, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_HEAVYBLOCK
    /**
     * @symbol ?falling@HeavyBlock@@UEBA_NXZ
     * @hash   1785661881
     */
    MCVAPI bool falling() const;
#endif
    /**
     * @symbol ??0HeavyBlock@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HAEBVMaterial@@@Z
     * @hash   1433716589
     */
    MCAPI HeavyBlock(std::string const &, int, class Material const &);
    /**
     * @symbol ?triggerFallCheck@HeavyBlock@@QEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   283126865
     */
    MCAPI void triggerFallCheck(class BlockSource &, class BlockPos const &) const;

//protected:
    /**
     * @symbol ?_tickBlocksAround2D@HeavyBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVBlock@@@Z
     * @hash   1525454687
     */
    MCAPI void _tickBlocksAround2D(class BlockSource &, class BlockPos const &, class Block const &) const;
    /**
     * @symbol ?checkSlide@HeavyBlock@@IEBAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -1395451853
     */
    MCAPI void checkSlide(class BlockSource &, class BlockPos const &) const;

protected:

};