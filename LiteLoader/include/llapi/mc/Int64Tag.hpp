/**
 * @file  Int64Tag.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Tag.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Int64Tag.
 *
 */
class Int64Tag : public Tag {

#define AFTER_EXTRA
// Add Member There
int64_t val;

public:
    LIAPI int64_t& value();
    LIAPI Int64Tag& operator=(int64_t val);
    LIAPI static std::unique_ptr<Int64Tag> create(int64_t val = 0);
    LIAPI bool set(int64_t val);
    LIAPI int64_t get();
    LIAPI operator int64_t() const;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INT64TAG
public:
    class Int64Tag& operator=(class Int64Tag const &) = delete;
    Int64Tag(class Int64Tag const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1123181623
     */
    virtual ~Int64Tag();
    /**
     * @vftbl  2
     * @symbol ?write@Int64Tag@@UEBAXAEAVIDataOutput@@@Z
     * @hash   -1833501202
     */
    virtual void write(class IDataOutput &) const;
    /**
     * @vftbl  3
     * @symbol ?load@Int64Tag@@UEAAXAEAVIDataInput@@@Z
     * @hash   -1480210371
     */
    virtual void load(class IDataInput &);
    /**
     * @vftbl  4
     * @symbol ?toString@Int64Tag@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -212099191
     */
    virtual std::string toString() const;
    /**
     * @vftbl  5
     * @symbol ?getId@Int64Tag@@UEBA?AW4Type@Tag@@XZ
     * @hash   1544439918
     */
    virtual enum class Tag::Type getId() const;
    /**
     * @vftbl  6
     * @symbol ?equals@Int64Tag@@UEBA_NAEBVTag@@@Z
     * @hash   -885498413
     */
    virtual bool equals(class Tag const &) const;
    /**
     * @vftbl  9
     * @symbol ?copy@Int64Tag@@UEBA?AV?$unique_ptr@VTag@@U?$default_delete@VTag@@@std@@@std@@XZ
     * @hash   1723387835
     */
    virtual std::unique_ptr<class Tag> copy() const;
    /**
     * @vftbl  10
     * @symbol ?hash@Int64Tag@@UEBA_KXZ
     * @hash   -814408671
     */
    virtual unsigned __int64 hash() const;
    /**
     * @symbol ??0Int64Tag@@QEAA@_J@Z
     * @hash   -217188013
     */
    MCAPI Int64Tag(__int64);
    /**
     * @symbol ??0Int64Tag@@QEAA@XZ
     * @hash   -55511895
     */
    MCAPI Int64Tag();

};