/**
 * @file  SHPortalRoom.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "StructurePiece.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SHPortalRoom.
 *
 */
class SHPortalRoom : public StructurePiece {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHPORTALROOM
public:
    class SHPortalRoom& operator=(class SHPortalRoom const &) = delete;
    SHPortalRoom(class SHPortalRoom const &) = delete;
    SHPortalRoom() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1327516730
     */
    virtual ~SHPortalRoom();
    /**
     * @vftbl  2
     * @symbol ?getType@SHPortalRoom@@UEBA?AW4StructurePieceType@@XZ
     * @hash   802282287
     */
    virtual enum class StructurePieceType getType() const;
    /**
     * @vftbl  3
     * @symbol ?addChildren@SHPortalRoom@@UEAAXAEAVStructurePiece@@AEAV?$vector@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePiece@@U?$default_delete@VStructurePiece@@@std@@@std@@@2@@std@@AEAVRandom@@@Z
     * @hash   680365889
     */
    virtual void addChildren(class StructurePiece &, std::vector<std::unique_ptr<class StructurePiece>> &, class Random &);
    /**
     * @vftbl  4
     * @symbol ?postProcess@SHPortalRoom@@UEAA_NAEAVBlockSource@@AEAVRandom@@AEBVBoundingBox@@@Z
     * @hash   315485481
     */
    virtual bool postProcess(class BlockSource &, class Random &, class BoundingBox const &);

};