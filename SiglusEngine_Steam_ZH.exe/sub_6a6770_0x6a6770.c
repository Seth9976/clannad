// 函数: sub_6a6770
// 地址: 0x6a6770
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t* esi = data_bac450

if (*esi s>= 0)
    int32_t eax_1 = esi[0x11]
    
    if (eax_1 == 1)
        void* ecx_1 = data_bac41c
        
        if (*(ecx_1 + 0x864) != 0)
            sub_6086f0(*(ecx_1 + 0x6b8) + 0x11d8, 0)
    else if (eax_1 == 0)
        sub_6086f0(*(data_bac408 + 0xa4) + 0x11d8, 0)

sub_6a64d0(esi)
int32_t arg_10
sub_6a6570(&arg_10, arg7)
*esi = arg_10
esi[1] = arg6
esi[2] = *arg7
esi[3] = arg7[1]
esi[4] = arg7[2]
esi[5] = arg7[3]
esi[6] = arg7[4]
esi[7] = arg7[5]
esi[8] = arg7[6]
esi[9] = arg7[7]
esi[0xb] = arg5
esi[0xc] = arg4
esi[0xd] = arg10
esi[0xe] = arg11
esi[0xf] = arg12
esi[0x10] = arg13
esi[0x11] = arg2
esi[0x12] = arg3
esi[0xa] = 0

if (&esi[0x13] != arg1)
    sub_52e3c0(&esi[0x13], arg1, 0, 0xffffffff)

int32_t eax_22 = esi[0x11]

if (eax_22 == 1)
    void* ecx_7 = data_bac41c
    
    if (*(ecx_7 + 0x864) != 0)
        sub_608ed0(ecx_7 + 0x614, esi[0xd], esi[0xe], esi[0xf], esi[0x10])
else if (eax_22 == 0)
    sub_608ed0(data_bac408, esi[0xd], esi[0xe], esi[0xf], esi[0x10])

esi[0x19] = 0

if (arg8 != 0)
    sub_6a6960(arg9, 0)

void* result = data_bac4e4

if (*(result + 0x195) == 0)
    return result

if (*esi s>= 0)
    int32_t eax_23 = esi[0x11]
    
    if (eax_23 == 1)
        void* ecx_9 = data_bac41c
        
        if (*(ecx_9 + 0x864) != 0)
            sub_6086f0(*(ecx_9 + 0x6b8) + 0x11d8, 0)
    else if (eax_23 == 0)
        sub_6086f0(*(data_bac408 + 0xa4) + 0x11d8, 0)

return sub_6a64d0(esi)
