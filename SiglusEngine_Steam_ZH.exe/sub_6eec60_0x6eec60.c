// 函数: sub_6eec60
// 地址: 0x6eec60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
bool c = &__saved_ebp u< 8
bool p = unimplemented  {sub esp, 0x8}
bool a = unimplemented  {sub esp, 0x8}
bool z = &__saved_ebp == 8
int32_t var_c
bool s = &var_c s< 0
bool o = add_overflow(&__saved_ebp, 0xfffffff8)
bool d
int32_t var_14 = (o ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (s ? 1 : 0) << 7 | (z ? 1 : 0) << 6
    | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c ? 1 : 0)
int32_t var_18 = (o ? 1 : 0) << 0xb | (d ? 1 : 0) << 0xa | (s ? 1 : 0) << 7 | (z ? 1 : 0) << 6
    | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2 | (c ? 1 : 0)
int32_t eax_1 = var_18 ^ 0x200000
int32_t result = (test_bit(eax_1, 0xb) ? 1 : 0) << 0xb | (test_bit(eax_1, 0xa) ? 1 : 0) << 0xa
    | (test_bit(eax_1, 7) ? 1 : 0) << 7 | (test_bit(eax_1, 6) ? 1 : 0) << 6
    | (test_bit(eax_1, 4) ? 1 : 0) << 4 | (test_bit(eax_1, 2) ? 1 : 0) << 2
    | (test_bit(eax_1, 0) ? 1 : 0)
*arg1 = result
*arg2 = var_18
return result
