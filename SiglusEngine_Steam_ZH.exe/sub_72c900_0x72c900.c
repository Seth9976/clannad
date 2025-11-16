// 函数: sub_72c900
// 地址: 0x72c900
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* ebx = arg3
int32_t* eax = arg1[1]

if (ebx u> 0x3b9ac9f0)
    *(*arg1 + 0x14) = 0x38
    *(*arg1 + 0x18) = 1
    (**arg1)(arg1)

void* ecx_1 = ebx & 7

if (ecx_1 u> 0)
    ebx += 8 - ecx_1

if (arg2 s< 0 || arg2 s>= 2)
    *(*arg1 + 0x14) = 0xf
    *(*arg1 + 0x18) = arg2
    (**arg1)(arg1)

void** i_1 = nullptr
arg3 = nullptr
void** i

for (i = eax[arg2 + 0xd]; i != 0; i = *i)
    if (i[2] u>= ebx)
        goto label_72ca27
    
    i_1 = i
    arg3 = i

uint32_t esi_1

if (i_1 != 0)
    esi_1 = *((arg2 << 2) + &data_add2f8)
else
    esi_1 = *((arg2 << 2) + &data_add678)

if (esi_1 u> 0x3b9aca00 - (ebx + 0x10))
    esi_1 = 0x3b9aca00 - (ebx + 0x10)

for (i = _malloc(esi_1 + ebx + 0x10); i == 0; i = _malloc(ebx + 0x10 + esi_1))
    esi_1 u>>= 1
    
    if (esi_1 u< 0x32)
        *(*arg1 + 0x14) = 0x38
        *(*arg1 + 0x18) = 2
        (**arg1)(arg1)

eax[0x13] += ebx + 0x10 + esi_1
i[2] = esi_1 + ebx
void* ecx_5 = arg3
*i = nullptr
i[1] = 0

if (ecx_5 == 0)
    ecx_5 = &eax[arg2 + 0xd]

*ecx_5 = i
label_72ca27:
void* ecx_6 = i[1]
i[2] -= ebx
i[1] = ecx_6 + ebx
return i + ecx_6 + 0x10
