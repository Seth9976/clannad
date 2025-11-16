// 函数: sub_7343c0
// 地址: 0x7343c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t eax_3 = *(*(arg3 + 0x1c0) + 0x18)
int32_t edx_1 = arg5 s>> 2
int32_t ebx_1 = arg2 s>> 2
int32_t edi_1 = arg4 s>> 3
int32_t ebx_2 = ebx_1 << 5
char var_188[0x100]
int32_t eax_5 = sub_734010(&var_188, ebx_2 + 4, arg3, (edi_1 << 5) + 2, (edx_1 << 5) + 4, &var_188)
char var_88[0x80]
sub_734200(eax_5, ebx_2 + 4, arg3, (edi_1 << 5) + 2, (edx_1 << 5) + 4, eax_5, &var_188, &var_88)
char (* result)[0x80] = &var_88
int32_t esi_7 = ((edi_1 << 8) + (edx_1 << 2)) * 2
int32_t var_190_1 = esi_7
int32_t i_1 = 4
void** ebx_3 = eax_3 + (ebx_1 << 4)
int32_t i

do
    int32_t j_1 = 8
    int32_t j
    
    do
        int16_t* edx_7 = *ebx_3 + esi_7
        esi_7 += 0x40
        *edx_7 = zx.w(*result) + 1
        edx_7[1] = zx.w((*result)[1]) + 1
        edx_7[2] = zx.w((*result)[2]) + 1
        uint16_t ecx_7 = zx.w((*result)[3])
        result = &(*result)[4]
        edx_7[3] = ecx_7 + 1
        j = j_1
        j_1 -= 1
    while (j != 1)
    esi_7 = var_190_1
    ebx_3 = &ebx_3[1]
    i = i_1
    i_1 -= 1
while (i != 1)
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
