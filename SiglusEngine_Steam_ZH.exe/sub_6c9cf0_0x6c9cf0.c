// 函数: sub_6c9cf0
// 地址: 0x6c9cf0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || arg2 == 0 || (*(arg1 + 0x74) & 0x400) != 0)
    return 

sub_6d4a20(arg1)

if ((*(arg1 + 0x74) & 0x1000) != 0 && *(arg1 + 0x248) != 0)
    sub_6d4470(arg1, "MNG features are not allowed in a PNG datastream")
    *(arg1 + 0x248) = 0

uint32_t eax_5 = zx.d(arg2[6].b)
sub_6d5310(eax_5, *arg2, arg1, arg2[1], eax_5, zx.d(*(arg2 + 0x19)), zx.d(*(arg2 + 0x1a)), 
    zx.d(*(arg2 + 0x1b)), zx.d(arg2[7].b))
uint32_t eax_6 = zx.d(*(arg2 + 0x72))

if ((eax_6 & 0x8000) == 0 && (eax_6.b & 8) != 0 && (arg2[2].b & 1) != 0)
    sub_6d5990(arg1, arg2[0xa])

eax_6.w = *(arg2 + 0x72)
eax_6.w &= 0x8000
int32_t ecx_3

if (eax_6.w == 0)
    ecx_3 = arg2[2]

if (eax_6.w == 0 && (ecx_3 & 0x1000) != 0)
    if ((ecx_3 & 0x800) != 0)
        if ((*(arg1 + 0x78) & 0x200000) == 0)
            sub_6d42e0(arg1, "profile matches sRGB but writing iCCP instead")
            noreturn
        
        eax_6 = sub_6d4470(arg1, "profile matches sRGB but writing iCCP instead")
    
    sub_6d5a70(eax_6, arg2[0x1d], arg1, arg2[0x1e])
else if (eax_6.w == 0 && (arg2[2] & 0x800) != 0)
    sub_6d5a00(arg1, zx.d(arg2[0x1c].w))

if ((arg2[2].b & 2) != 0)
    uint32_t eax_7 = zx.d(*(arg2 + 0x19))
    sub_6d5de0(eax_7.w, &arg2[0x25], arg1, eax_7)

uint32_t eax_8 = zx.d(*(arg2 + 0x72))

if ((eax_8 & 0x8000) == 0 && (eax_8.b & 0x10) != 0 && (arg2[2].b & 4) != 0)
    eax_8 = sub_6d5ea0(arg1, &arg2[0xb])

sub_6c9bc0(eax_8, arg2, arg1, 1)
*(arg1 + 0x74) |= 0x400
