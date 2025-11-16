// 函数: sub_6a65f0
// 地址: 0x6a65f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

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
int32_t arg_c
sub_6a6570(&arg_c, arg6)
*esi = arg_c
esi[1] = arg5
esi[2] = *arg6
esi[3] = arg6[1]
esi[4] = arg6[2]
esi[5] = arg6[3]
esi[6] = arg6[4]
esi[7] = arg6[5]
esi[8] = arg6[6]
esi[9] = arg6[7]
esi[0xb] = arg4
esi[0xc] = arg3
esi[0x10] = arg13
esi[0xa] = 0
esi[0xd] = arg10
esi[0xe] = arg11
esi[0xf] = arg12
esi[0x11] = arg1
esi[0x12] = arg2

if (arg9 != 0)
    if (arg1 == 1)
        void* ecx_7 = data_bac41c
        
        if (*(ecx_7 + 0x864) != 0)
            sub_608ed0(ecx_7 + 0x614, arg10, arg11, arg12, arg13)
    else if (arg1 == 0)
        sub_608ed0(data_bac408, arg10, arg11, arg12, arg13)

esi[0x19] = 0

if (arg7 != 0)
    sub_6a6960(arg8, 0)

void* result = data_bac4e4

if (*(result + 0x195) == 0)
    return result

if (*esi s>= 0)
    int32_t eax_17 = esi[0x11]
    
    if (eax_17 == 1)
        void* ecx_9 = data_bac41c
        
        if (*(ecx_9 + 0x864) != 0)
            sub_6086f0(*(ecx_9 + 0x6b8) + 0x11d8, 0)
    else if (eax_17 == 0)
        sub_6086f0(*(data_bac408 + 0xa4) + 0x11d8, 0)

return sub_6a64d0(esi)
