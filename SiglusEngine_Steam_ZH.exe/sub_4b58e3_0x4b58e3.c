// 函数: sub_4b58e3
// 地址: 0x4b58e3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_8_1 = 0
int32_t edi
int32_t var_14 = edi

if (arg3 u> 0)
    void* ecx_1 = &data_b596e8
    
    do
        int32_t* eax_1 = arg2
        int32_t esi_1 = 1
        int32_t i_1 = 4
        int32_t i
        
        do
            if (*(arg1 - arg2 + eax_1) != *ecx_1 && *eax_1 != 0xffffffff)
                esi_1 = 0
            
            ecx_1 += 4
            eax_1 = &eax_1[1]
            i = i_1
            i_1 -= 1
        while (i != 1)
        
        if (esi_1 != 0)
            return 1
        
        var_8_1 += 1
    while (var_8_1 u< arg3)

return 0
