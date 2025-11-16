// 函数: sub_464820
// 地址: 0x464820
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg1
int32_t ecx = esi[5]

if (ecx != 0xcd)
    void* eax_1 = *esi
    *(eax_1 + 0x14) = 0x14
    *(eax_1 + 0x18) = ecx
    (*eax_1)(esi)

int32_t ecx_1 = esi[0x23]
int32_t edx = esi[0x1d]

if (ecx_1 u>= edx)
    void* eax_2 = *esi
    *(eax_2 + 0x14) = 0x7b
    (*(eax_2 + 4))(esi, 0xffffffff)
    return 0

void* eax_4 = esi[2]

if (eax_4 != 0)
    *(eax_4 + 4) = ecx_1
    *(eax_4 + 8) = edx
    (*eax_4)(esi)

int32_t eax_5 = esi[0x6b]
arg1 = nullptr
(*(eax_5 + 4))(esi, arg2, &arg1, arg3)
int32_t* result = arg1
esi[0x23] += result
return result
