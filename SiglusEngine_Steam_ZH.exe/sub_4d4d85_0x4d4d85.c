// 函数: sub_4d4d85
// 地址: 0x4d4d85
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi
int32_t var_10 = edi
int32_t result = 1

if ((**(arg1 + 0x100) & 0xfff00000) == 0x20500000)
    int32_t* eax_3 = *(arg1 + 0x100)
    void* eax_6 = *(*(arg1 + 0x14) + (*(eax_3[2] + ((*eax_3 & 0xfffff) << 2)) << 2))
    
    if ((*(*(*(arg1 + 0x10) + (*(eax_6 + 4) << 2)) + 5) & 1) == 0)
        return 1
    
    long double x87_r7_1 = fconvert.t(-1.0)
    long double x87_r6_1 = fconvert.t(*(eax_6 + 0x20))
    x87_r6_1 - x87_r7_1
    eax_6.w = (x87_r6_1 < x87_r7_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe
    bool p_1 = unimplemented  {test ah, 0x44}
    
    if (p_1)
        return 1

int32_t* eax_7 = *(arg1 + 0x100)
int32_t* eax_11 = sub_4d10f4(arg1, (*eax_7 & 0xfffff) | 0x20400000, eax_7, nullptr, 2, 1)

if (eax_11 != 0)
    int32_t result_1 = sub_4d4bfd(arg1, eax_11)
    result = result_1
    
    if (result_1 == 0)
        *eax_11 &= result_1

return result
