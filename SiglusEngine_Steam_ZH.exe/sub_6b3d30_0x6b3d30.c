// 函数: sub_6b3d30
// 地址: 0x6b3d30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg3)
int32_t result = 1
int32_t ebx_2 = (eax_1 ^ edx) - edx

if (arg4 - 1 s>= 0)
    int32_t edi_2 = arg4 - 1
    int32_t temp1_1
    
    do
        *(arg2 + (edi_2 << 2)) = ebx_2 s% 0xa
        ebx_2 s/= 0xa
        
        if (ebx_2 s> 0)
            result += 1
        
        temp1_1 = edi_2
        edi_2 -= 1
    while (temp1_1 - 1 s>= 0)

return result
