// 函数: sub_6e7140
// 地址: 0x6e7140
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg2 + 0xbb4) = 4 << ((not.d(*(arg1 + 0x30) u>> 1)).b & 1)
__builtin_memcpy(arg2 + 0x200, arg1 + 0xcb38, 0x300)
__builtin_memcpy(arg2 + 0x800, arg1 + 0xce38, 0x300)
int32_t ecx_4 = *(arg1 + 0x100)
int32_t edx = ecx_4 + (*(arg1 + 0xdc) << 2)
*(arg2 + 0xb00) = ecx_4
*(arg2 + 0xb0c) = edx
int32_t eax_2 = *(arg1 + 0x104)
int32_t esi_2 = ecx_4 + (eax_2 << 2)
int32_t eax_3 = eax_2 - *(arg1 + 0x7c)
*(arg2 + 0xb04) = esi_2
int32_t ecx_5 = edx + (eax_3 << 2)
*(arg2 + 0xb10) = ecx_5
int32_t edx_1 = *(arg1 + 0x108)
*(arg2 + 0xb14) = ecx_5 + ((edx_1 - *(arg1 + 0x9c)) << 2)
*(arg2 + 0xb08) = esi_2 + (edx_1 << 2)
int32_t i = 0
void* ecx_8 = arg2 + 0xb30
void* var_c = ecx_8

do
    if (*(arg1 + 0x392) u> 0)
        void* esi_3 = ecx_8
        void* eax_7 = arg1 + 0x393
        
        do
            esi_3 += 8
            *(esi_3 - 8) = *(arg1 + ((zx.d(*eax_7) * 3 + i) << 3) + 0x398)
            uint32_t edx_3 = zx.d(*eax_7)
            eax_7 += 1
            *(esi_3 - 4) = *(arg1 + ((edx_3 * 3 + i) << 3) + 0x39c)
        while (0xfffffc6d - arg1 + eax_7 s< zx.d(*(arg1 + 0x392)))
        
        ecx_8 = var_c
    
    i += 1
    ecx_8 += 0x18
    var_c = ecx_8
while (i s< 3)

__builtin_memset(arg2 + 0xb90, 0, 0x24)
uint32_t ecx_18 = zx.d(*(zx.d(*(arg1 + 0x393)) + arg1 + 0xc9a0))
int32_t eax_9
eax_9.b = ecx_18 != 0
*(arg2 + 0xbb8) = eax_9

if (ecx_18 != 0)
    (*(arg1 + 0x5c))(arg2 + 0x100, ecx_18)

int32_t result

if (sub_6e6e30(arg1) != 0)
    *(arg2 + 0xbbc) = 0
    result = *(arg1 + 0x11c) * 6
    *(arg1 + 0xd358) = *(arg1 + (result << 3) + 0x12c)
    *(arg1 + 0xd368) = *(arg1 + (result << 3) + 0x13c)
    *(arg1 + 0xd378) = *(arg1 + (result << 3) + 0x14c)
else
    result = *(arg1 + 0xd144)
    *(arg2 + 0xbbc) = result

__builtin_memset(arg2, 0, 0x80)
return result
