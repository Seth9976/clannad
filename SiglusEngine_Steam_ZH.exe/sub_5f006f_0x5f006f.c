// 函数: sub_5f006f
// 地址: 0x5f006f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = sub_54d980(arg1, &arg2[-7], arg3)
*(arg2 - 0x11) = 1

if (*eax == 0)
    *(arg2 - 0x11) = 0

int32_t* esi = arg2[-6]

if (esi != 0)
    bool cond:0_1 = esi[1] != 1
    esi[1]
    esi[1] -= 1
    
    if (not(cond:0_1))
        (*(*esi + 4))()
        bool cond:2_1 = esi[2] != 1
        esi[2]
        esi[2] -= 1
        
        if (not(cond:2_1))
            (*(*esi + 8))()

TEB* fsbase

if (*(arg2 - 0x11) == 0)
    fsbase->NtTib.ExceptionList = arg2[-3]
    *arg2
    return 0

void* entry_ebx
int32_t* eax_6 = sub_54d980(*(entry_ebx + 0x1568), &arg2[-7], arg2[4])
int32_t var_4_1 = arg2[3]
arg2[-1] = 0
uint32_t result = zx.d(*(sub_6f54d0(*eax_6, &arg2[4], arg2[2], var_4_1) + 3))
arg2[-1] = 0xffffffff
int32_t* esi_1 = arg2[-6]

if (esi_1 != 0)
    bool cond:1_1 = esi_1[1] != 1
    esi_1[1]
    esi_1[1] -= 1
    
    if (not(cond:1_1))
        (*(*esi_1 + 4))()
        int32_t edi_1 = esi_1[2]
        esi_1[2] -= 1
        
        if (edi_1 == 1)
            (*(*esi_1 + 8))()

fsbase->NtTib.ExceptionList = arg2[-3]
*arg2
return result
