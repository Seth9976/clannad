// 函数: sub_410d80
// 地址: 0x410d80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t eax = arg2 - *(arg1 + 0x14)
int32_t edi
int32_t var_10 = edi
uint32_t edi_1 = zx.d(eax)
*(*(arg1 + 0x10) + edi_1 * 6) = 1
sub_40d521(arg1, eax)
uint32_t result = zx.d(arg2) * 3
int16_t* ebx = *(arg1 + 4) + (result << 1)
arg2.d = 3
int32_t i

do
    int32_t ecx_2
    ecx_2.w = *ebx
    
    if (ecx_2.w != 0xffff)
        result = (zx.d(ecx_2.w) - zx.d(*(arg1 + 0x14))) * 3
        
        if (*(*(arg1 + 0x10) + (result << 1)) == 0)
            result, ecx_2 = sub_40d600(arg1, ecx_2.w)
    
    ebx = &ebx[1]
    i = arg2.d
    arg2.d -= 1
while (i != 1)
int32_t esi_1 = *(arg1 + 0x20)

if (esi_1 != 0)
    *(esi_1 + (edi_1 << 2)) = 0xffffffff

return result
