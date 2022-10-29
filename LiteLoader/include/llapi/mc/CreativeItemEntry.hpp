/**
 * @file  CreativeItemEntry.hpp
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
 * @brief MC class CreativeItemEntry.
 *
 */
class CreativeItemEntry {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CREATIVEITEMENTRY
public:
    class CreativeItemEntry& operator=(class CreativeItemEntry const &) = delete;
    CreativeItemEntry(class CreativeItemEntry const &) = delete;
    CreativeItemEntry() = delete;
#endif

public:
    /**
     * @symbol ??0CreativeItemEntry@@QEAA@PEAVCreativeItemRegistry@@AEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@AEBVItemInstance@@I@Z
     * @hash   -1622244362
     */
    MCAPI CreativeItemEntry(class CreativeItemRegistry *, class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const &, class ItemInstance const &, unsigned int);
    /**
     * @symbol ??0CreativeItemEntry@@QEAA@$$QEAV0@@Z
     * @hash   14780921
     */
    MCAPI CreativeItemEntry(class CreativeItemEntry &&);
    /**
     * @symbol ?getCreativeNetId@CreativeItemEntry@@QEBAAEBV?$TypedServerNetId@UCreativeItemNetIdTag@@I$0A@@@XZ
     * @hash   -2081115117
     */
    MCAPI class TypedServerNetId<struct CreativeItemNetIdTag, unsigned int, 0> const & getCreativeNetId() const;
    /**
     * @symbol ?getGroup@CreativeItemEntry@@QEBAPEAVCreativeGroupInfo@@XZ
     * @hash   972204183
     */
    MCAPI class CreativeGroupInfo * getGroup() const;
    /**
     * @symbol ?getIndex@CreativeItemEntry@@QEBAIXZ
     * @hash   -1195013368
     */
    MCAPI unsigned int getIndex() const;
    /**
     * @symbol ?getItemInstance@CreativeItemEntry@@QEBAAEBVItemInstance@@XZ
     * @hash   789810986
     */
    MCAPI class ItemInstance const & getItemInstance() const;

//private:
    /**
     * @symbol ?_setGroup@CreativeItemEntry@@AEAAXPEAVCreativeGroupInfo@@@Z
     * @hash   436032466
     */
    MCAPI void _setGroup(class CreativeGroupInfo *);

private:

};