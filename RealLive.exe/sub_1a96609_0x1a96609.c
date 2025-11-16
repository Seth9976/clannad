// 函数: sub_1a96609
// 地址: 0x1a96609
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t ecx
int32_t var_8 = ecx
void* esi = *(arg1 + 0x10)
int32_t i = *(arg1 + 8)
int32_t result = 0

while (i s>= 0)
    i <<= 1
    result += 1

int32_t i_2 = 0x3f
void* eax_2 = result * 0x204 + esi + 0x144
void* var_8_1 = eax_2
int32_t i_1

do
    *(eax_2 + 8) = eax_2
    *(eax_2 + 4) = eax_2
    eax_2 += 8
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
void* lpAddress = (result << 0xf) + *(arg1 + 0xc)

if (VirtualAlloc(lpAddress, 0x8000, MEM_COMMIT, PAGE_READWRITE) == 0)
    return 0xffffffff

if (lpAddress u<= lpAddress + 0x7000)
    void** eax_5 = lpAddress + 0x10
    
    do
        eax_5[-2] = 0xffffffff
        eax_5[0x3fb] = 0xffffffff
        eax_5[-1] = 0xff0
        *eax_5 = &eax_5[0x3ff]
        eax_5[1] = &eax_5[-0x401]
        eax_5[0x3fa] = 0xff0
        eax_5 = &eax_5[0x400]
    while (&eax_5[-4] u<= lpAddress + 0x7000)

*(var_8_1 + 0x1fc) = lpAddress + 0xc
*(lpAddress + 0x14) = var_8_1 + 0x1f8
*(var_8_1 + 0x200) = lpAddress + 0x700c
*(lpAddress + 0x7010) = var_8_1 + 0x1f8
*(esi + (result << 2) + 0x44) = 0
*(esi + (result << 2) + 0xc4) = 1
void* eax_7
eax_7.b = *(esi + 0x43)
void* ecx_6
ecx_6.b = eax_7.b
ecx_6.b += 1
*(esi + 0x43) = ecx_6.b

if (eax_7.b == 0)
    *(arg1 + 4) |= 1

*(arg1 + 8) &= not.d(0x80000000 u>> result.b)
return result
