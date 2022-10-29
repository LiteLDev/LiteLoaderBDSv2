/**
 * @file  PlayerUIContainer.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "SimpleContainer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PlayerUIContainer.
 *
 */
class PlayerUIContainer : public SimpleContainer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERUICONTAINER
public:
    class PlayerUIContainer& operator=(class PlayerUIContainer const &) = delete;
    PlayerUIContainer(class PlayerUIContainer const &) = delete;
    PlayerUIContainer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2005262490
     */
    virtual ~PlayerUIContainer();
    /**
     * @vftbl  22
     * @hash   -308831756
     */
    virtual void __unk_vfn_22();
    /**
     * @vftbl  23
     * @hash   -307908235
     */
    virtual void __unk_vfn_23();
    /**
     * @symbol ??0PlayerUIContainer@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_NH@Z
     * @hash   846684969
     */
    MCAPI PlayerUIContainer(std::string const &, bool, int);
    /**
     * @symbol ?load@PlayerUIContainer@@QEAAXAEBVListTag@@AEBVSemVersion@@@Z
     * @hash   986434867
     */
    MCAPI void load(class ListTag const &, class SemVersion const &);
    /**
     * @symbol ?save@PlayerUIContainer@@QEBA?AV?$unique_ptr@VListTag@@U?$default_delete@VListTag@@@std@@@std@@XZ
     * @hash   -1056977448
     */
    MCAPI std::unique_ptr<class ListTag> save() const;

};