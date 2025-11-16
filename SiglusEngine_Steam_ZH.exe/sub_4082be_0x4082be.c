// 函数: sub_4082be
// 地址: 0x4082be
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t edi
int32_t var_c = edi

if (arg1[0xf] u> 0)
    int32_t ecx = 0x10
    
    do
        *(arg2 + (i << 2)) = *(((*arg1 u>> ecx.b & 3) << 2) + &data_ab5588)
        i += 1
        ecx += 2
    while (i u< arg1[0xf])

if (arg1[0xf] u<= 0 || i u< 8)
    int32_t edi_5 = arg2 + (i << 2)
    int32_t ecx_2 = 8 - i
    i = 0
    __builtin_memset(edi_5, 0, ecx_2 << 2)

return i
