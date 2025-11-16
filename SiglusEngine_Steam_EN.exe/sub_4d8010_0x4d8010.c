// 函数: sub_4d8010
// 地址: 0x4d8010
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edi = arg1[1]
int32_t esi = arg1[2]

if (edi != esi)
    int32_t eax_1 = *(arg2 + 8)
    int32_t ecx = *(arg2 + 0xc)
    int32_t var_c_1
    
    if (eax_1 u> ecx)
        var_c_1 = eax_1 - ecx
    else
        var_c_1 = 0
    
    int32_t ecx_1 = *(arg2 + 0x10)
    char edx
    
    if (ecx_1 == 0)
        if (edi s<= esi)
            ecx_1 = esi - edi
        else
            ecx_1 = edi - esi
        
        uint32_t eax_3 = zx.d(*(arg2 + 0x14))
        
        if (eax_3 == 1)
            edx = 4
        else if (eax_3 == 2)
            edx = 3
        else
            edx = 0
    else
        edx = 0
    
    int32_t var_1c_1 = data_131310c
    int32_t var_28_1 = 0
    int32_t eax_7 = *(arg2 + 4)
    edi = arg1[1]
    int32_t var_34 = ecx_1
    int32_t var_30_1 = 0
    int32_t var_10_1 = 0
    
    if (eax_7 s< 0)
        eax_7 = neg.d(eax_7)
    
    int32_t var_14_1 = eax_7
    int32_t var_18_1 = 0
    int32_t var_24_1 = ecx_1
    int32_t var_20_1 = ecx_1
    
    if (edx != 0xff)
        if (edx != 1)
            char var_2c_2 = edx
        
        if (edx == 1 || edx == 2)
            char var_2c_3 = 0
    else
        int32_t var_24_2 = 0
        int32_t var_20_2 = 0
        var_34 = 0
        char var_2c_1 = edx
    
    sub_4d1fd0(&var_34, var_c_1)
    
    if (edi s<= esi)
        int32_t esi_1 = esi - var_30_1
        
        if (esi_1 s< edi)
            esi_1 = edi
        
        *arg1 = esi_1
        return 
    
    int32_t eax = var_30_1 + esi
    *arg1 = eax
    
    if (eax s<= edi)
        return 

*arg1 = edi
