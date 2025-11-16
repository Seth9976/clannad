// 函数: sub_4888a0
// 地址: 0x4888a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = 0xffffffff
data_1320e68 = 0xffffffff
bool cond:0 = data_1320e5c != 0
data_1320e70 = 0xffffffff
int32_t eax_1

if (not(cond:0))
    if (data_13702a0 != 0)
        eax_1 = data_1320e6c
        
        if (eax_1 == 0xffffffff)
            int32_t eax_2 = data_1320e60
            data_1320e68 = eax_2
            data_1320e6c = eax_2
            return eax_2
        
        int32_t ecx_2 = data_1320e60
        
        if (eax_1 != ecx_2)
            return eax_1
        
        data_1320e68 = ecx_2
        return eax_1
    
    int32_t ecx_1 = data_1320e60
    
    if (data_13702a2 != 0)
        if (data_1320e6c == ecx_1)
            eax = ecx_1
        
        data_1320e70 = eax
    
    data_1320e68 = ecx_1
else if (data_13702a0 != 0)
    eax_1 = data_1320e6c
    
    if (eax_1 == 0xffffffff)
        eax_1 = 0xfffffffe
    
    data_1320e6c = eax_1
    return eax_1
data_1320e6c = 0xffffffff
return eax
