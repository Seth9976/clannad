// 函数: sub_4dcfe0
// 地址: 0x4dcfe0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
void* esi = *(arg1 + 0x1ac)

if (*(esi + 0x30) != 0)
    goto label_4dd013

int32_t result = (*(*(arg1 + 0x1b0) + 0xc))(arg1, esi + 8)

if (result != 0)
    *(esi + 0x30) = 1
label_4dd013:
    void* eax_2 = *(arg1 + 0x140)
    result = (*(*(arg1 + 0x1b4) + 4))(arg1, esi + 8, esi + 0x34, eax_2, arg2, arg3, arg4)
    
    if (*(esi + 0x34) u>= eax_2)
        *(esi + 0x30) = 0
        *(esi + 0x34) = 0

return result
