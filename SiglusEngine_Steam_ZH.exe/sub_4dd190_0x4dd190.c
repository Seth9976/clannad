// 函数: sub_4dd190
// 地址: 0x4dd190
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1[0x6b]
int32_t edi
int32_t var_c = edi

if (arg2 != 0)
    void* eax_1 = *arg1
    *(eax_1 + 0x14) = 4
    return (*eax_1)(arg1)

void* eax_3 = arg1[0x72]

if (*(eax_3 + 8) == 0)
    *(esi + 0x30) = 0
    *(esi + 0x34) = 0
    *(esi + 4) = sub_4dcfe0
    return eax_3

*(esi + 4) = sub_4dd060
void* eax_4 = sub_4dcd10(arg1)
*(esi + 0x40) = 0
*(esi + 0x44) = 0
*(esi + 0x4c) = 0
*(esi + 0x30) = 0
*(esi + 0x34) = 0
return eax_4
