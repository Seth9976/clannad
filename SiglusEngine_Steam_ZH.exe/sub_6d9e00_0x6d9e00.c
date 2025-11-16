// 函数: sub_6d9e00
// 地址: 0x6d9e00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = *(arg3 + 0x278)

if (eax != 0)
    if (eax == 1)
        return sub_6d8610(arg3, arg4)
    
    *(arg3 + 0x278) = eax - 1
    
    if (eax == 2)
        sub_6d4470(arg3, "No space in chunk cache for sPLT")
        return sub_6d8610(arg3, arg4)

int32_t eax_4 = *(arg3 + 0x74)

if ((eax_4.b & 1) == 0)
    sub_6d47a0(arg3, "missing IHDR")
    noreturn

if ((eax_4.b & 4) != 0)
    sub_6d8610(arg3, arg4)
    return sub_6d4840(arg3, "out of place")

int32_t eax_6 = sub_6d87a0(eax_4, arg4 + 1, arg3, 2)
char* esi = eax_6
char* var_10 = esi

if (esi == 0)
    sub_6d8610(arg3, arg4)
    return sub_6d4840(arg3, "out of memory")

sub_6d85d0(eax_6, esi, arg3, arg4)
int32_t* result = sub_6d8610(arg3, 0)

if (result != 0)
    return result

char* edx_6 = esi
*(esi + arg4) = result.b

if (*edx_6 != result.b)
    do
        esi = &esi[1]
    while (*esi != 0)

if (arg4 u< 2 || &esi[1] u> arg4 - 2 + edx_6)
    return sub_6d4470(arg3, "malformed sPLT chunk")

void* eax_9
eax_9.b = esi[1]
void* esi_2 = &esi[2]
char var_9 = eax_9.b
char var_24 = eax_9.b
int32_t ecx_5
ecx_5.b = eax_9.b != 8
void* eax_12 = edx_6 - esi_2 + arg4
int32_t edx_7 = 0
uint32_t i_1 = divu.dp.d(edx_7:eax_12, (ecx_5 << 2) + 6)

if (modu.dp.d(edx_7:eax_12, (ecx_5 << 2) + 6) != 0)
    return sub_6d4470(arg3, "sPLT chunk has bad length")

if (i_1 u> 0x19999999)
    return sub_6d4470(arg3, "sPLT chunk too long")

uint32_t i_2 = i_1
void* eax_16
uint32_t ecx_9
eax_16, ecx_9 = sub_6d8360(arg3, i_1 * 0xa)

if (eax_16 == 0)
    return sub_6d4470(arg3, "sPLT chunk requires too much memory")

if (i_1 s> 0)
    void* edx_11 = eax_16 + 4
    uint32_t i
    
    do
        void* esi_3
        
        if (var_9 != 8)
            *(edx_11 - 4) = zx.w(*esi_2) * 0x100 + zx.w(*(esi_2 + 1))
            *(edx_11 - 2) = zx.w(*(esi_2 + 2)) * 0x100 + zx.w(*(esi_2 + 3))
            *edx_11 = zx.w(*(esi_2 + 4)) * 0x100 + zx.w(*(esi_2 + 5))
            esi_3 = esi_2 + 8
            *(edx_11 + 2) = zx.w(*(esi_2 + 6)) * 0x100 + zx.w(*(esi_2 + 7))
        else
            *(edx_11 - 4) = zx.w(*esi_2)
            *(edx_11 - 2) = zx.w(*(esi_2 + 1))
            *edx_11 = zx.w(*(esi_2 + 2))
            esi_3 = esi_2 + 4
            *(edx_11 + 2) = zx.w(*(esi_2 + 3))
        
        esi_2 = esi_3 + 2
        ecx_9.w = zx.w(*esi_3) * 0x100
        ecx_9.w += zx.w(*(esi_3 + 1))
        *(edx_11 + 4) = ecx_9.w
        edx_11 += 0xa
        i = i_1
        i_1 -= 1
    while (i != 1)

char* var_28 = var_10
uint32_t var_3c_1 = ecx_9
sub_6cec30(&var_28, arg2, arg3, &var_28)
return sub_6d83a0(arg3, eax_16)
