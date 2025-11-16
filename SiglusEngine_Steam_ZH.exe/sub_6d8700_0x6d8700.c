// 函数: sub_6d8700
// 地址: 0x6d8700
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t edi = 1

if ((*(arg1 + 0x11c) & 0x20000000) == 0)
    if ((*(arg1 + 0x78) & 0x800) != 0)
        edi = 0
else if ((*(arg1 + 0x78) & 0x300) == 0x300)
    edi = 0

int32_t eax_3 = *(arg1 + 0x5c)
*(arg1 + 0x2a4) = 0x81

if (eax_3 == 0)
    sub_6d42e0(arg1, "Call to NULL read function")
    noreturn

eax_3(arg1, &var_8, 4)

if (edi == 0)
    return 0

int16_t eax_4 = var_8.w
int32_t result
result.b =
    (((((zx.d(eax_4.b) << 8) + zx.d(eax_4:1.b)) << 8) + zx.d(var_8:2.b)) << 8) + zx.d(var_8:3.b)
    != *(arg1 + 0x138)
return result
