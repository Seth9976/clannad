// 函数: sub_4dcf90
// 地址: 0x4dcf90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = arg2

if (esi != 0)
    *esi = 0

if (arg3 != 0)
    *arg3 = 0

if (esi == 0 || arg3 == 0 || arg4 == 0 || arg5 == 0)
    return 0x80004003

int32_t result

if (*(arg1 + 0x3c) == 0)
    result = sub_4dfc60(&arg2)
    
    if (result s< 0)
        return result
    
    (*arg2[9])(&arg2[9], 0x61d620, arg1 + 0x3c)

if (*(arg1 + 0x40) == 0)
    result = sub_4dfd20(&arg2)
    
    if (result s< 0)
        return result
    
    (*arg2[9])(&arg2[9], 0x61d610, arg1 + 0x40)

*esi = *(arg1 + 0x3c)
int32_t* ecx_5 = *(arg1 + 0x3c)

if (ecx_5 != 0)
    (*(*ecx_5 + 4))(ecx_5)

*arg3 = *(arg1 + 0x40)
int32_t* ecx_6 = *(arg1 + 0x40)

if (ecx_6 != 0)
    (*(*ecx_6 + 4))(ecx_6)

GetClientRect(*(arg1 - 0x28), arg4)
GetClientRect(*(arg1 - 0x28), arg5)

if (*(arg1 + 0x98) == 0)
    ACCEL paccel
    paccel.fVirt = 0
    paccel.key = 0
    paccel.cmd = 0
    *(arg1 + 0x98) = CreateAcceleratorTableA(&paccel, 1)

*arg6 = 0x14
arg6[1] = *(arg1 + 0x6c) u>> 2 & 1
arg6[2] = GetParent(*(arg1 - 0x28))
arg6[3] = *(arg1 + 0x98)
int32_t eax_15
eax_15.b = *(arg1 + 0x98) != 0
arg6[4] = eax_15
return 0
