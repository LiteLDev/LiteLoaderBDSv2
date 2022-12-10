/**
 * @file  OceanMonumentDoubleZRoom.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "OceanMonumentPiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OceanMonumentDoubleZRoom.
 *
 */
class OceanMonumentDoubleZRoom : public OceanMonumentPiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OCEANMONUMENTDOUBLEZROOM
public:
    class OceanMonumentDoubleZRoom& operator=(class OceanMonumentDoubleZRoom const &) = delete;
    OceanMonumentDoubleZRoom(class OceanMonumentDoubleZRoom const &) = delete;
    OceanMonumentDoubleZRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2050639049
     */
    virtual ~OceanMonumentDoubleZRoom();
    /**
     * @vftbl  2
     * @symbol ?getType@OceanMonumentDoubleZRoom@@UEBA?AW4StructurePieceType@@XZ
     * @hash   -1905200516
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  4
     * @symbol ?postProcess@OceanMonumentDoubleZRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   397000252
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};