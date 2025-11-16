// 函数: sub_460e20
// 地址: 0x460e20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg3
int32_t ebx
ebx.w = arg2
BOOL eax

if (*esi != 0)
    eax = esi[3]
    
    if (esi[2] s>= eax)
        esi[3] = eax + 0x100
        void* eax_2 = (eax + 0x100) << 5
        eax, arg3, arg2 = sub_4d6ae0(eax_2, &esi[1], arg3, eax_2)
else
    esi[3] = 0x100
    eax, arg3, arg2 = sub_4d6960(arg1, &esi[1], arg3, 0x2000, "MSGST_MESS")

eax.w = arg4
arg3.b = arg5
int16_t* edi_2 = (esi[2] << 5) + esi[1]
edi_2[1] = eax.w
eax.b = arg6
*(edi_2 + 5) = eax.b
eax.w = arg7
edi_2[3] = eax.w
eax.b = arg8
edi_2[4].b = eax.b
eax.w = arg9
edi_2[5] = eax.w
eax.w = arg10
edi_2[6] = eax.w
*(edi_2 + 0x10) = arg11
*edi_2 = ebx.w
edi_2[2].b = arg3.b
*(edi_2 + 0x14) = arg12
*(edi_2 + 0x18) = 0xffffffff

if (arg3.b != 3)
    int32_t ecx = data_1af0f3c
    
    if (ecx != 0xffffffff)
        arg2.b = data_1af17c9
        
        if (sub_4a2390(ecx, arg2.b) != 0)
            *(edi_2 + 0x18) = data_1af0f3c
            int32_t eax_6
            eax_6.b = data_1af17c9
            edi_2[0xe].b = eax_6.b
        
        data_1af0f3c = 0xffffffff

int32_t ecx_1 = esi[2]

if (ecx_1 == 0)
    esi[0x16] = data_719b6c
    esi[0x17] = data_72d6ac

esi[2] = ecx_1 + 1
return ecx_1 + 1
