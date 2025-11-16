// 函数: sub_53ff80
// 地址: 0x53ff80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = data_bac4a0
void* edi = data_bac4a4
*(edx + 0x70) = arg1
int32_t result

if (arg1 s>= 0)
    int32_t* ecx_3 = (*(edx + 0x6c) << 4) + *(edi + 0xc)
    result = (ecx_3[1] - *ecx_3) s>> 3

if (arg1 s< 0 || result s<= arg1)
    result = *(*(edi + 0xc) + *(edx + 0x6c) * 0x10 + 0xc)
    *(edx + 0x70) = result

return result
