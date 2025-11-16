// 函数: sub_482db7
// 地址: 0x482db7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_c = edi
int32_t* ecx = *(arg1 + 0x1c)
int32_t result = 0

if (ecx != 0)
    int32_t ecx_1 = *ecx
    int32_t esi_1 = 0
    
    if (ecx_1 u> 0)
        do
            result = sub_482d2c(*(*(*(arg1 + 0x1c) + 0xc) + (esi_1 << 2)), arg2, arg3, arg4, arg1)
            
            if (result != 0)
                break
            
            if (*(arg2 + 0x40) == 1)
                int32_t var_18_2 = 0x3b
                sub_4605c1(arg2)
            
            result = 0
            
            if (arg4 != 0 && esi_1 != ecx_1 - 1)
                result = sub_4613b7(arg2, 2)
            
            esi_1 += 1
        while (esi_1 u< ecx_1)

return result
