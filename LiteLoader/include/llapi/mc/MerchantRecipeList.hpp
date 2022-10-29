/**
 * @file  MerchantRecipeList.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "MerchantRecipe.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class MerchantRecipeList.
 *
 */
class MerchantRecipeList {

#define AFTER_EXTRA
// Add Member There
    std::vector<MerchantRecipe> mRecipes;
    std::vector<int> mTierExpRequirements;

public:
    inline MerchantRecipe* getRecipeByNetId(unsigned int recipeNetId)
    {
        for (auto& recipe : mRecipes)
        {
            if (recipe.getRecipeNetId() == recipeNetId)
                return &recipe;
        }
        return nullptr;
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MERCHANTRECIPELIST
public:
    class MerchantRecipeList& operator=(class MerchantRecipeList const &) = delete;
    MerchantRecipeList(class MerchantRecipeList const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   2101863678
     */
    virtual ~MerchantRecipeList();
    /**
     * @vftbl  1
     * @symbol ?getRecipeFor@MerchantRecipeList@@UEAAPEAVMerchantRecipe@@AEBVItemInstance@@0H@Z
     * @hash   2089471775
     */
    virtual class MerchantRecipe * getRecipeFor(class ItemInstance const &, class ItemInstance const &, int);
    /**
     * @vftbl  2
     * @symbol ?addIfNewOrBetter@MerchantRecipeList@@UEAAXPEAVMerchantRecipe@@@Z
     * @hash   789088146
     */
    virtual void addIfNewOrBetter(class MerchantRecipe *);
    /**
     * @vftbl  3
     * @symbol ?getMatchingRecipeFor@MerchantRecipeList@@UEAAPEAVMerchantRecipe@@AEBVItemInstance@@00@Z
     * @hash   140566718
     */
    virtual class MerchantRecipe * getMatchingRecipeFor(class ItemInstance const &, class ItemInstance const &, class ItemInstance const &);
    /**
     * @vftbl  4
     * @symbol ?getMatchingRecipeFor@MerchantRecipeList@@UEAAPEAVMerchantRecipe@@AEBV2@@Z
     * @hash   191316080
     */
    virtual class MerchantRecipe * getMatchingRecipeFor(class MerchantRecipe const &);
    /**
     * @vftbl  5
     * @symbol ?load@MerchantRecipeList@@UEAAXAEBVCompoundTag@@@Z
     * @hash   835835425
     */
    virtual void load(class CompoundTag const &);
    /**
     * @vftbl  6
     * @symbol ?createTag@MerchantRecipeList@@UEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@_N@Z
     * @hash   -624986185
     */
    virtual std::unique_ptr<class CompoundTag> createTag(bool) const;
    /**
     * @symbol ??0MerchantRecipeList@@QEAA@XZ
     * @hash   -1825715872
     */
    MCAPI MerchantRecipeList();
    /**
     * @symbol ?assignNetIds@MerchantRecipeList@@QEAAXXZ
     * @hash   1665812133
     */
    MCAPI void assignNetIds();
    /**
     * @symbol ?getRecipeByNetId@MerchantRecipeList@@QEBAPEBVMerchantRecipe@@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
     * @hash   1238515829
     */
    MCAPI class MerchantRecipe const * getRecipeByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &) const;
    /**
     * @symbol ?getRecipeIndexByNetId@MerchantRecipeList@@QEBA?AV?$optional@_K@std@@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
     * @hash   547508877
     */
    MCAPI class std::optional<unsigned __int64> getRecipeIndexByNetId(class TypedServerNetId<struct RecipeNetIdTag, unsigned int, 0> const &) const;
    /**
     * @symbol ?isRequiredItem@MerchantRecipeList@@QEAA_NAEBVItemInstance@@0@Z
     * @hash   1893816942
     */
    MCAPI bool isRequiredItem(class ItemInstance const &, class ItemInstance const &);

};