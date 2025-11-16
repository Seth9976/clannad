// 函数: sub_410eeb
// 地址: 0x410eeb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = arg2
int32_t edi
int32_t var_10 = edi
int32_t edi_2 = ebx - *(arg1 + 0x1c)
*(*(arg1 + 0x18) + edi_2 * 0xc) = 1
sub_40d883(arg1, edi_2)
arg2 = 0
int32_t ebx_1 = *(arg1 + 4) + ebx * 0xc
int32_t result

do
    result = arg2
    int32_t ecx_3 = *(ebx_1 + (result << 2))
    
    if (ecx_3 != 0xffffffff)
        result = (ecx_3 - *(arg1 + 0x1c)) * 3
        
        if (*(*(arg1 + 0x18) + (result << 2)) == 0)
            result = sub_40d93b(arg1, ecx_3)
    
    arg2 += 1
while (arg2 u< 3)

int32_t esi_1 = *(arg1 + 0x2c)

if (esi_1 != 0)
    *(esi_1 + (edi_2 << 2)) = 0xffffffff

return result
