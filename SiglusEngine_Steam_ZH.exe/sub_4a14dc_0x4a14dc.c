// 函数: sub_4a14dc
// 地址: 0x4a14dc
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1c = edi
int32_t esi_1 = *arg2 & 0xfffff
uint32_t temp0 = divu.dp.d(0:(arg2[1]), esi_1)
int32_t var_8 = 0

if (temp0 u> 0)
    int32_t eax_2 = arg2[2]
    int32_t ebx_1 = *(arg1 + 0x14)
    arg2 = eax_2 + (arg4 << 2)
    int32_t* esi_2 = eax_2 + (arg3 << 2)
    
    do
        int32_t eax_4 = *arg2
        int32_t ecx_6 = *esi_2
        int32_t eax_6 = *(arg1 + 0x10)
        
        if ((*(*(eax_6 + (*(*(ebx_1 + (ecx_6 << 2)) + 4) << 2)) + 4) & 0x40) != 0
                && (*(*(eax_6 + (*(*(ebx_1 + (eax_4 << 2)) + 4) << 2)) + 4) & 0x40) != 0
                && sub_4a143a(arg1, ecx_6, eax_4) == 0)
            return 1
        
        var_8 += 1
        arg2 = &arg2[esi_1]
        esi_2 = &esi_2[esi_1]
    while (var_8 u< temp0)

return 0
