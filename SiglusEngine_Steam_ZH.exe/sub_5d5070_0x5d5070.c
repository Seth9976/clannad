// 函数: sub_5d5070
// 地址: 0x5d5070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx
int32_t* result = sub_5d53a0(ecx)
void* edi = &result[4]
result[3].w = 0

if (edi != 0)
    *edi = *arg1
    *(edi + 8) = arg1[1].d
    int32_t eax
    eax.w = *(arg1 + 0xc)
    *(edi + 0xc) = eax.w
    *(edi + 0x10) = arg1[2].d
    *(edi + 0x14) = 0
    int32_t ecx_1 = *(arg1 + 0x14)
    *(arg1 + 0x14) = *(edi + 0x14)
    *(edi + 0x14) = ecx_1
    arg1[2].d = 0

return result
