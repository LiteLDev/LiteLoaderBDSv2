/**
 * @file  OpCommand.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Command.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OpCommand.
 *
 */
class OpCommand : public Command {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OPCOMMAND
public:
    class OpCommand& operator=(class OpCommand const &) = delete;
    OpCommand(class OpCommand const &) = delete;
    OpCommand() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -909052168
     */
    virtual ~OpCommand();
    /**
     * @vftbl  1
     * @symbol ?execute@OpCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
     * @hash   1115040985
     */
    virtual void execute(class CommandOrigin const &, class CommandOutput &) const;
    /**
     * @symbol ?setup@OpCommand@@SAXAEAVCommandRegistry@@@Z
     * @hash   1691856480
     */
    MCAPI static void setup(class CommandRegistry &);

};