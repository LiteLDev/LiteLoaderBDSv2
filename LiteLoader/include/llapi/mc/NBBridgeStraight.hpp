/**
 * @file  NBBridgeStraight.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetherFortressPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NBBridgeStraight.
 *
 */
class NBBridgeStraight : public NetherFortressPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NBBRIDGESTRAIGHT
public:
    class NBBridgeStraight& operator=(class NBBridgeStraight const &) = delete;
    NBBridgeStraight(class NBBridgeStraight const &) = delete;
    NBBridgeStraight() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   558439457
     */
    virtual ~NBBridgeStraight();
    /**
     * @vftbl  2
     * @symbol ?getType@NBBridgeStraight@@UEBA?AW4StructurePieceType@@XZ
     * @hash   -81675964
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  3
     * @symbol ?addChildren@NBBridgeStraight@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     * @hash   -1464227236
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @vftbl  4
     * @symbol ?postProcess@NBBridgeStraight@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   -301993788
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};