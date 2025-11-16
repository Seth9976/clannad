// 函数: sub_49e2a0
// 地址: 0x49e2a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char var_4a0
int32_t eax_1 = __security_cookie ^ &var_4a0
int32_t var_c = eax_1

if (arg3 != 0)
    eax_1 = sub_49d230(eax_1, arg4, arg3, arg5, arg6, 6, 0x1a, *(arg3 + 0x238), *(arg3 + 0x23c), 
        *(arg3 + 0x240), *(arg3 + 0x244), *(arg3 + 0x270), *(arg3 + 0x274))

if (arg6 != 0)
    sub_4cfdf0(eax_1, arg6, &var_4a0, 0x1fe)
    char* esi_1 = &var_4a0
    int32_t eax_2 = sub_4d1610(&var_4a0, 0x5c)
    void var_49f
    
    if (eax_2 != 0xffffffff)
        esi_1 = &var_49f + eax_2
    
    int32_t eax_3 = sub_4d1610(esi_1, 0x2e)
    
    if (eax_3 == 0xffffffff)
        eax_3 = sub_4cfc80(esi_1)
        esi_1 -= 1
    
    void* const var_4ac_2 = &data_61737c
    char* ecx_5 = &var_4a0
    int32_t var_4b4_3
    void var_298
    char* eax_7
    
    if (sub_4c3da0(sub_4c84d0(&esi_1[eax_3], ".%s"), 6, &var_4a0, 0x1a) != 1)
        char* ecx_10 = &var_4a0
        
        if (sub_4c3da0(sub_4c3960(ecx_5, &data_617380), 6, &var_4a0, 0x1a) == 1)
            eax_7 = sub_4c36f0(&var_298, 6, ecx_10, 0x1a, &var_298)
            var_4b4_3 = 2
            goto label_49e395
        
        char* ecx_12 = &var_4a0
        
        if (sub_4c3da0(sub_4c3960(ecx_10, &data_617384), 6, &var_4a0, 0x1a) == 1)
            eax_7 = sub_4c36f0(&var_298, 6, ecx_12, 0x1a, &var_298)
            var_4b4_3 = 0
            goto label_49e395
        
        char* esi_3 = &var_4a0
        int32_t eax_16 = sub_4d1610(ecx_12, 0x5c)
        
        if (eax_16 != 0xffffffff)
            esi_3 = &var_49f + eax_16
        
        int32_t eax_17 = sub_4d1610(esi_3, 0x2e)
        
        if (eax_17 == 0xffffffff)
            eax_17 = sub_4cfc80(esi_3)
            esi_3 -= 1
        
        char* var_4ac_6 = &var_4a0
        esi_3[eax_17] = 0
        char* eax_18 = sub_4c84d0(&data_7027c0, "%s.nwa ( wav ) ")
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_18, data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                    data_72d6ac, data_719b6c, 0x613340, &data_7027c0), 
                data_72d6ac, data_719b6c, 0x613340, &data_7027c0)
            sub_4a1e40(3)
        
        sub_446a50()
    else
        eax_7 = sub_4c36f0(&var_298, 6, ecx_5, 0x1a, &var_298)
        var_4b4_3 = 1
    label_49e395:
        
        if (sub_4c3110(eax_7, &var_298, arg2, var_4b4_3) != 0)
            sub_5f02dd(var_c ^ &var_4a0)
            return 1

sub_5f02dd(var_c ^ &var_4a0)
return 0
