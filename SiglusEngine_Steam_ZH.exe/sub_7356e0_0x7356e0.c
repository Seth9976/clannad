// 函数: sub_7356e0
// 地址: 0x7356e0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = *(arg1 + 0x19c)

if (*(edi + 0x30) != 0)
    goto label_73571c

int32_t result = (*(*(arg1 + 0x1a0) + 0xc))(arg1, edi + 8)

if (result != 0)
    *(edi + 0x30) = 1
label_73571c:
    int32_t esi_1 = *(arg1 + 0x124)
    result = (*(*(arg1 + 0x1a4) + 4))(arg1, edi + 8, edi + 0x34, esi_1, arg2, arg3, arg4)
    
    if (*(edi + 0x34) u>= esi_1)
        *(edi + 0x30) = 0
        *(edi + 0x34) = 0

return result
