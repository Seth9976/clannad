// 函数: sub_616e90
// 地址: 0x616e90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* esi = data_bac4a0
RECT rect
rect.left = 0
rect.top = 0
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x51eb851f, arg1 * *(esi + 8))
int32_t edx_1 = edx s>> 5
int32_t edi_2 = (edx_1 u>> 0x1f) + edx_1
int32_t eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x51eb851f, arg2 * *(esi + 0xc))
rect.right = edi_2
int32_t edx_3 = edx_2 s>> 5
rect.bottom = (edx_3 u>> 0x1f) + edx_3
BOOL bMenu
bMenu.b = *esi != 0
AdjustWindowRect(&rect, 0x12ce0000, bMenu)
int32_t* eax_8 = *(data_bac4a4 + 0xc)
int32_t ecx_4 = eax_8[3]
int32_t result = *eax_8

if (edi_2 s<= *(result + (ecx_4 << 3)) && rect.bottom - rect.top s<= *(result + (ecx_4 << 3) + 4))
    result.b = 1
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return result

result.b = 0
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
