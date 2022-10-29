/**
 * @file  InMemoryEnv.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "TransactionalWorldBlockTarget.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class InMemoryEnv.
 *
 */
class InMemoryEnv : public TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INMEMORYENV
public:
    class InMemoryEnv& operator=(class InMemoryEnv const &) = delete;
    InMemoryEnv(class InMemoryEnv const &) = delete;
    InMemoryEnv() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1998489003
     */
    virtual ~InMemoryEnv();
    /**
     * @vftbl  1
     * @symbol ?NewSequentialFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVSequentialFile@3@@Z
     * @hash   1511271547
     */
    virtual class leveldb::Status NewSequentialFile(std::string const &, class leveldb::SequentialFile **);
    /**
     * @vftbl  2
     * @symbol ?NewRandomAccessFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVRandomAccessFile@3@@Z
     * @hash   -1683089765
     */
    virtual class leveldb::Status NewRandomAccessFile(std::string const &, class leveldb::RandomAccessFile **);
    /**
     * @vftbl  3
     * @symbol ?NewWritableFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
     * @hash   -1358848787
     */
    virtual class leveldb::Status NewWritableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @vftbl  4
     * @symbol ?NewAppendableFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAPEAVWritableFile@3@@Z
     * @hash   -1090008815
     */
    virtual class leveldb::Status NewAppendableFile(std::string const &, class leveldb::WritableFile **);
    /**
     * @vftbl  5
     * @symbol ?FileExists@InMemoryEnv@@UEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -635574542
     */
    virtual bool FileExists(std::string const &);
    /**
     * @vftbl  6
     * @symbol ?GetChildren@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@5@@Z
     * @hash   -97216148
     */
    virtual class leveldb::Status GetChildren(std::string const &, std::vector<std::string> *);
    /**
     * @vftbl  7
     * @symbol ?DeleteFileA@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1825249645
     */
    virtual class leveldb::Status DeleteFileA(std::string const &);
    /**
     * @vftbl  11
     * @symbol ?RenameFile@InMemoryEnv@@UEAA?AVStatus@leveldb@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     * @hash   746140815
     */
    virtual class leveldb::Status RenameFile(std::string const &, std::string const &);
    /**
     * @vftbl  20
     * @symbol ?flushToPermanentStorage@InMemoryEnv@@UEAAXXZ
     * @hash   184938828
     */
    virtual void flushToPermanentStorage();
    /**
     * @symbol ??0InMemoryEnv@@QEAA@PEAVEnv@leveldb@@AEBVPath@Core@@@Z
     * @hash   -1153288554
     */
    MCAPI InMemoryEnv(class leveldb::Env *, class Core::Path const &);

//private:
    /**
     * @symbol ?_flushWithTransaction@InMemoryEnv@@AEAAXXZ
     * @hash   -1574968056
     */
    MCAPI void _flushWithTransaction();

private:

};