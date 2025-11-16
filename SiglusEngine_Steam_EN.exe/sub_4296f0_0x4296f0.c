// 函数: sub_4296f0
// 地址: 0x4296f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_1 = result

if (data_1374758 != 0)
    int32_t var_230_1 = 0x3e7
    void* hMem_1 = nullptr
    int32_t var_220 = 0
    void var_214
    sub_4c84d0(&var_214, "save%03d.sav")
    BOOL var_21c = 0
    int32_t var_218 = 0
    result = sub_4c4810(&var_21c, &var_218, &var_214, &var_21c, "AVG_G_TMP", 4, 0x1e)
    
    if (var_218 != 0)
        BOOL esi_1 = var_21c
        
        if (sub_4d0f10(esi_1 + 0x18, "AVG_GLOBAL_SAVE") == 0 && *esi_1 == 0xa4
                && *(esi_1 + 0x9c) == 0xc860 && sub_48e930(*(esi_1 + 4)) != 0)
            sub_4d1c30(sub_4bb540(&var_220, &hMem_1, *(esi_1 + 0x98) + esi_1, &var_220), var_220, 
                &data_13262d0, 0xc860)
            int32_t* eax_6 = data_63ece0
            
            if (eax_6 s> 0)
                sub_4a4e90(eax_6, &data_1390760, 0x132fbce, &data_1353040, 4, 4, eax_6, 0x2710, 
                    "AVG_M")
            
            void* hMem = hMem_1
            GlobalUnlock(hMem)
            GlobalFree(hMem)
        
        result = sub_4d6c40(&var_218, &var_21c)

sub_5f02dd(result_1 ^ &__saved_ebp)
return result
