// 函数: sub_499eeb
// 地址: 0x499eeb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x68) = 0
int32_t edi
int32_t var_c = edi
sub_468b80(arg1)
uint32_t eax = *(arg1 + 0xbc)
int32_t ecx
int32_t edi_1

if (arg1[0x113] == 0)
    edi_1 = *(arg1 + 0xb8)
    *(arg1 + 0xc0) = eax
    int32_t eax_7 = *(arg1 + 0xc8) + 1
    *(arg1 + 0xd0) = edi_1
    *(arg1 + 0xcc) = eax_7
else
    if ((arg1[0x60] & 2) == 0)
        eax = (eax + 7) u>> 3
    
    edi_1 = *(arg1 + 0xb8)
    *(arg1 + 0xc0) = eax
    uint32_t eax_3 = zx.d(arg1[0x114]) << 2
    int32_t ecx_1 = *(eax_3 + &data_ac8548)
    uint32_t temp0_1 = divu.dp.d(0:(edi_1 - *(eax_3 + 0xac852c) + ecx_1 - 1), ecx_1)
    ecx = ((zx.d(arg1[0x119]) * temp0_1 + 7) u>> 3) + 1
    *(arg1 + 0xd0) = temp0_1
    *(arg1 + 0xcc) = ecx

uint32_t eax_8 = zx.d(arg1[0x119])
int16_t ebx = (*(arg1 + 0x60)).w

if ((ebx.b & 4) != 0 && arg1[0x117] u< 8)
    eax_8 = 8

if ((ebx:1.b & 0x10) != 0)
    ecx.b = arg1[0x116]
    
    if (ecx.b == 3)
        int32_t eax_9
        eax_9.b = *(arg1 + 0x10a) != 0
        eax_8 = (eax_9 << 3) + 0x18
    else if (ecx.b == 0)
        if (eax_8 s< 8)
            eax_8 = 8
        
        if (*(arg1 + 0x10a) != 0)
            eax_8 *= 2
    else if (ecx.b == 2 && *(arg1 + 0x10a) != 0)
        eax_8 = divs.dp.d(sx.q(eax_8 << 2), 3)

if (ebx:1.b s< 0)
    ecx.b = arg1[0x116]
    
    if (ecx.b == 3)
        eax_8 = 0x20
    else if (ecx.b == 0)
        int32_t ecx_6
        ecx_6.b = eax_8 s> 8
        eax_8 = ((ecx_6 - 1) & 0xfffffff0) + 0x20
    else if (ecx.b == 2)
        int32_t ecx_10
        ecx_10.b = eax_8 s> 0x20
        eax_8 = ((ecx_10 - 1) & 0xffffffe0) + 0x40

*(arg1 + 0xdc) =
    sub_498671(arg1, ((((edi_1 + 7) & 0xfffffff8) * eax_8 + 7) u>> 3) + ((eax_8 + 7) s>> 3) + 1)
int32_t eax_18 = sub_498671(arg1, *(arg1 + 0xc8) + 1)
int32_t __saved_ebx_3 = *(arg1 + 0xc8) + 1
*(arg1 + 0xd8) = eax_18
int32_t result = sub_4986f0(arg1, eax_18.b, 0)
*(arg1 + 0x5c) |= 0x40
return result
