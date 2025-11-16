// 函数: sub_42aba3
// 地址: 0x42aba3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__chkstk(0x1004)
uint32_t __security_cookie_1 = __security_cookie
int32_t ebx
int32_t var_8 = ebx
int32_t edi
int32_t var_10 = edi
void var_1008
void* esi = &var_1008
int32_t edi_1 = 0xffe

if (arg2 != 0)
    int32_t eax = *(arg2 + 0x10)
    
    if (eax != 0)
        int32_t var_14_1 = eax
        int32_t eax_1 = sub_74aa1b(&var_1008, 0xffe, "%s")
        
        if (eax_1 s< 0)
            eax_1 = 0xffe
        
        int32_t __saved_ebp
        esi = &__saved_ebp + eax_1 - 0x1004
        edi_1 = 0xffe - eax_1
    
    int32_t eax_2 = *(arg2 + 0x14)
    
    if (eax_2 == 0)
        eax_2 += 1
    
    int32_t var_14_2 = eax_2
    int32_t eax_3 = sub_74aa1b(esi, edi_1, "(%u): ")
    
    if (eax_3 s< 0)
        eax_3 = edi_1
    
    esi += eax_3
    edi_1 -= eax_3

if (arg3 != 0)
    int32_t var_14_3 = arg3
    int32_t eax_4 = sub_74aa1b(esi, edi_1, "error X%u: ")
    
    if (eax_4 s< 0)
        eax_4 = edi_1
    
    esi += eax_4
    edi_1 -= eax_4

void arg_14
int32_t eax_5 = __vsprintf_p(esi, edi_1, arg4, &arg_14)

if (eax_5 s< 0)
    eax_5 = edi_1

void* esi_1 = esi + eax_5
*esi_1 = 0xa
*(esi_1 + 1) = 0
arg1[2] += 1
int32_t result = sub_42a5a2(arg1, &var_1008)
sub_745f2b(__security_cookie_1)
return result
