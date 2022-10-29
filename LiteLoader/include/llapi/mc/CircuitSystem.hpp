/**
 * @file  CircuitSystem.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CircuitSystem.
 *
 */
class CircuitSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITSYSTEM
public:
    class CircuitSystem& operator=(class CircuitSystem const &) = delete;
    CircuitSystem(class CircuitSystem const &) = delete;
#endif

public:
    /**
     * @symbol ??0CircuitSystem@@QEAA@XZ
     * @hash   1902085508
     */
    MCAPI CircuitSystem();
    /**
     * @symbol ?evaluate@CircuitSystem@@QEAAXPEAVBlockSource@@@Z
     * @hash   -409680495
     */
    MCAPI void evaluate(class BlockSource *);
    /**
     * @symbol ?getStrength@CircuitSystem@@QEAAHAEBVBlockPos@@@Z
     * @hash   1044055031
     */
    MCAPI int getStrength(class BlockPos const &);
    /**
     * @symbol ?invalidatePos@CircuitSystem@@QEAAXAEBVBlockPos@@@Z
     * @hash   256141900
     */
    MCAPI void invalidatePos(class BlockPos const &);
    /**
     * @symbol ?isAvailableAt@CircuitSystem@@QEAA_NAEBVBlockPos@@@Z
     * @hash   -32077091
     */
    MCAPI bool isAvailableAt(class BlockPos const &);
    /**
     * @symbol ?preSetupPoweredBlocks@CircuitSystem@@QEAAXAEBVChunkPos@@@Z
     * @hash   1017309788
     */
    MCAPI void preSetupPoweredBlocks(class ChunkPos const &);
    /**
     * @symbol ?removeComponents@CircuitSystem@@QEAAXAEBVBlockPos@@@Z
     * @hash   -1122552822
     */
    MCAPI void removeComponents(class BlockPos const &);
    /**
     * @symbol ?setStrength@CircuitSystem@@QEAAXAEBVBlockPos@@H@Z
     * @hash   1679912519
     */
    MCAPI void setStrength(class BlockPos const &, int);
    /**
     * @symbol ?updateBlocks@CircuitSystem@@QEAAXAEAVBlockSource@@AEBVBlockPos@@@Z
     * @hash   -423764491
     */
    MCAPI void updateBlocks(class BlockSource &, class BlockPos const &);
    /**
     * @symbol ?updateDependencies@CircuitSystem@@QEAAXPEAVBlockSource@@@Z
     * @hash   843134431
     */
    MCAPI void updateDependencies(class BlockSource *);

//private:
    /**
     * @symbol ?createComponent@CircuitSystem@@AEAAPEAVBaseCircuitComponent@@AEBVBlockPos@@EV?$unique_ptr@VBaseCircuitComponent@@U?$default_delete@VBaseCircuitComponent@@@std@@@std@@@Z
     * @hash   -1040580212
     */
    MCAPI class BaseCircuitComponent * createComponent(class BlockPos const &, unsigned char, std::unique_ptr<class BaseCircuitComponent>);
    /**
     * @symbol ?evaluateComponents@CircuitSystem@@AEAAX_N@Z
     * @hash   1479555233
     */
    MCAPI void evaluateComponents(bool);
    /**
     * @symbol ?updateIndividualBlock@CircuitSystem@@AEAAXV?$not_null@PEAVBaseCircuitComponent@@@gsl@@AEBVBlockPos@@1AEAVBlockSource@@@Z
     * @hash   -1882643042
     */
    MCAPI void updateIndividualBlock(class gsl::not_null<class BaseCircuitComponent *>, class BlockPos const &, class BlockPos const &, class BlockSource &);

private:

};