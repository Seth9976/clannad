// 函数: sub_6d0065
// 地址: 0x6d0065
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eflags
int16_t* edi
int16_t temp0
temp0, edi = __insd(arg6, arg2, eflags)
*edi = temp0
void* entry_ebx
*(entry_ebx - 0x7974fb3c) += arg1.b
int32_t eax = sx.d(arg1)
eax.b += *eax
entry_ebx:1.b += eax.b
char temp0_1 = *(eax + 2)
*(eax + 2) = arg3:1.b
arg3:1.b = temp0_1
*eax += eax.b
*(arg4 - 0x74e48b40) += eax.b
*(eax + 2)
*eax += eax.b

if (arg3 == 0)
    _free(eax)
else
    arg3(arg5, eax)

int32_t eax_1 = *(arg5 + 0x200)
*(arg5 + 0x298) = 0

if (eax_1 != 0)
    int32_t ecx = *(arg5 + 0x258)
    
    if (ecx == 0)
        _free(eax_1)
    else
        ecx(arg5, eax_1)

int32_t eax_2 = *(arg5 + 0x204)
*(arg5 + 0x200) = 0

if (eax_2 != 0)
    int32_t ecx_1 = *(arg5 + 0x258)
    
    if (ecx_1 == 0)
        _free(eax_2)
    else
        ecx_1(arg5, eax_2)

bool cond:0 = (*(arg5 + 0x228) & 0x1000) == 0
*(arg5 + 0x204) = 0

if (not(cond:0))
    int32_t eax_3 = *(arg5 + 0x13c)
    
    if (eax_3 != 0)
        int32_t ecx_2 = *(arg5 + 0x258)
        
        if (ecx_2 == 0)
            _free(eax_3)
        else
            ecx_2(arg5, eax_3)
    
    *(arg5 + 0x13c) = 0

*(arg5 + 0x228) &= 0xffffefff

if ((*(arg5 + 0x228) & 0x2000) != 0)
    int32_t eax_4 = *(arg5 + 0x1ac)
    
    if (eax_4 != 0)
        int32_t ecx_3 = *(arg5 + 0x258)
        
        if (ecx_3 == 0)
            _free(eax_4)
        else
            ecx_3(arg5, eax_4)
    
    *(arg5 + 0x1ac) = 0

*(arg5 + 0x228) &= 0xffffdfff

if (arg5 != 0xffffff7c)
    void* eax_5 = *(arg5 + 0xa0)
    
    if (eax_5 != 0)
        int32_t ecx_4 = *(arg5 + 0xa8)
        
        if (ecx_4 != 0)
            int32_t eax_6 = *(eax_5 + 0x34)
            
            if (eax_6 != 0)
                ecx_4(*(arg5 + 0xac), eax_6, edi)
            
            (*(arg5 + 0xa8))(*(arg5 + 0xac), *(arg5 + 0xa0), edi)
            *(arg5 + 0xa0) = 0

int32_t eax_8 = *(arg5 + 0x1d4)

if (eax_8 != 0)
    int32_t ecx_5 = *(arg5 + 0x258)
    
    if (ecx_5 == 0)
        _free(eax_8)
    else
        ecx_5(arg5, eax_8)

int32_t eax_9 = *(arg5 + 0x288)
*(arg5 + 0x1d4) = 0

if (eax_9 != 0)
    int32_t ecx_6 = *(arg5 + 0x258)
    
    if (ecx_6 == 0)
        _free(eax_9)
    else
        ecx_6(arg5, eax_9)

int32_t eax_11 = *(arg5 + 0x23c)
*(arg5 + 0x288) = 0

if (eax_11 != 0)
    int32_t ecx_7 = *(arg5 + 0x258)
    
    if (ecx_7 != 0)
        int32_t eax_10 = ecx_7(arg5, eax_11)
        *(arg5 + 0x23c) = 0
        return eax_10
    
    eax_11 = _free(eax_11)

*(arg5 + 0x23c) = 0
return eax_11
