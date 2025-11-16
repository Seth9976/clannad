// 函数: sub_6ddd90
// 地址: 0x6ddd90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg5 != 0)
    arg5[1] = *arg5

if (arg6 != 0)
    *arg6 = 0

if (arg7 != 0)
    *arg7 = 0

if (arg3 == 0 || arg4 s<= 0 || arg5 == 0)
    int32_t* eax_3
    eax_3.b = 0
    return eax_3

*(arg1 + 0x10) = sub_729180(&arg1[0xec])
*(arg1 + 0x1d8) = sub_6ddc60
int32_t __saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD* edi
__setjmp3(&__saved_ebp, arg1, edi, &arg1[0x12e], 0, edi, arg2)
int32_t edx_1 = 0
char* ecx_2 = arg3

if (arg4 s> 0)
    do
        void* eax_8 = edx_1 & 0x800000ff
        
        if (eax_8 s< 0)
            eax_8 = ((eax_8 - 1) | 0xffffff00) + 1
        
        eax_8.b = *(eax_8 + 0xadb820)
        edx_1 += 1
        *ecx_2 ^= eax_8.b
        ecx_2 = &ecx_2[1]
    while (edx_1 s< arg4)

char* var_1c = ecx_2
sub_7289e0(sub_728a70(&arg1[8]), arg3, &arg1[8], arg4)
sub_728d80(&arg1[8])
sub_728690(&arg1[8])
int32_t eax_13 = *(arg1 + 0x78) * *(arg1 + 0x6c)
void* ecx_7 = *(arg1 + 0x14)
*(arg1 + 0x2a0) = eax_13
int32_t eax_15 = (*(ecx_7 + 8))(&arg1[8], 1, eax_13, 1)
int32_t ecx_8 = *(arg1 + 0x70)
*(arg1 + 0x29c) = eax_15
*(arg1 + 4) = 0
*(arg1 + 8) = ecx_8
*(arg1 + 0xc) = 0
*(arg1 + 0x2b4) = ecx_8
*(arg1 + 0x2a4) = arg3
int32_t eax_19 = *(arg1 + 0x6c)
*(arg1 + 0x2a8) = arg4
*(arg1 + 0x2b0) = eax_19

if (arg6 != 0)
    *arg6 = eax_19

if (arg7 != 0)
    *arg7 = *(arg1 + 0x2b4)

int32_t eax_22 = *(arg1 + 0x2b0) * *(arg1 + 0x2b4)
*(arg1 + 0x2ac) = arg5
sub_5979b0(arg5, eax_22 << 2)
*(arg1 + 0x2b8) = **(arg1 + 0x2ac)
int32_t eax_25
eax_25.b = 1
*arg1 = 0x101
arg1[1].b = 0
return eax_25
