// 函数: sub_45dee0
// 地址: 0x45dee0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

bool p = unimplemented  {sub esp, 0x10}
bool a = unimplemented  {sub esp, 0x10}
int32_t var_14
int32_t __saved_ebp
bool d
int32_t var_1c = (add_overflow(&__saved_ebp, 0xfffffff0) ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa
    | (&var_14 s< 0 ? 1 : 0) << 7 | (&__saved_ebp == 0x10 ? 1 : 0) << 6 | (a ? 1 : 0) << 4
    | (p ? 1 : 0) << 2 | (&__saved_ebp u< 0x10 ? 1 : 0)
int32_t eax_1 = var_1c ^ 0x200000
int32_t var_1c_2 = (test_bit(eax_1, 0xb) ? 1 : 0) << 0xb | (test_bit(eax_1, 0xa) ? 1 : 0) << 0xa
    | (test_bit(eax_1, 7) ? 1 : 0) << 7 | (test_bit(eax_1, 6) ? 1 : 0) << 6
    | (test_bit(eax_1, 4) ? 1 : 0) << 4 | (test_bit(eax_1, 2) ? 1 : 0) << 2
    | (test_bit(eax_1, 0) ? 1 : 0)
int32_t result

if (var_1c != var_1c_2)
    int32_t ecx
    int32_t edx_1
    int32_t ebx_1
    result, ebx_1, ecx, edx_1 = __cpuid(0, arg1)
    
    if (result s>= 1)
        int32_t eax_3
        int32_t ecx_1
        int32_t edx_2
        int32_t ebx_2
        eax_3, ebx_2, ecx_1, edx_2 = __cpuid(1, ecx)
        return (edx_2 u>> 0x17).b & 1

result.b = 0
return result
