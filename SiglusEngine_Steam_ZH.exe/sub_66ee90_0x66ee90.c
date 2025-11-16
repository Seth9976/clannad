// 函数: sub_66ee90
// 地址: 0x66ee90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t var_8 = arg3
int16_t* edi = arg3
void* edx = arg2 - edi
void* i

for (i = edx & 0xfffffffe; i s> 2; i = edx & 0xfffffffe)
    var_8 = zx.d(*(edi + edx - 2))
    uint32_t eax_1
    eax_1.w = *edi
    *(edi + edx - 2) = eax_1.w
    int32_t var_18_1 = arg4
    int32_t eax_3 = (edx - 2) s>> 1
    sub_66f1b0(eax_3, nullptr, edi, eax_3, &var_8)
    edx -= 2

return i
