// 函数: sub_5b3c70
// 地址: 0x5b3c70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_9ba611
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3f4 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 + 0x290 != arg2)
    sub_52e3c0(arg1 + 0x290, arg2, 0, 0xffffffff)

int32_t edi = 0
*(arg1 + 0x2a8) = arg3
*(arg1 + 0x2ac) = arg7
int32_t var_3d4 = 0
void* i_2

if (arg2[5] u< 8)
    i_2 = arg2
else
    i_2 = *arg2

int32_t ebx_1 = arg4
void* i_1 = i_2
uint32_t var_3d0

while (true)
    void** eax_5
    
    if (arg2[5] u< 8)
        eax_5 = arg2
    else
        eax_5 = *arg2
    
    int32_t edx_2 = arg2[4] * 2
    
    if (i_2 == eax_5 + edx_2)
        break
    
    bool cond:1_1 = arg2[5] u< 8
    int32_t var_3e0 = 0
    var_3d0 = 0xffffffff
    void** eax_7
    
    if (cond:1_1)
        eax_7 = arg2
    else
        eax_7 = *arg2
    
    void* eax_8 = eax_7 + edx_2
    sub_64f180(eax_8, &var_3e0, &i_1, eax_8, &var_3d0)
    int32_t var_3cc
    sub_5db1c0(&var_3cc)
    int32_t eax_9 = arg7
    int32_t var_8_1 = 0
    int32_t edi_1 = var_3e0
    int32_t var_3b4_1 = arg10 + edi
    
    if (edi_1 == 1)
        eax_9 = 0
    
    int32_t var_3c0_1 = eax_9
    int32_t var_3bc_1 = arg8
    int32_t var_3b8_1 = arg9
    uint32_t var_3c8_1 = var_3d0
    ebx_1 = arg4
    var_3cc = edi_1
    int32_t var_3c4_1 = ebx_1
    int32_t var_3b0_1 = arg11
    sub_5b4a00(arg1 + 0x304, &var_3cc)
    
    if (edi_1 == 0)
        int32_t eax_12 = data_b9c398
        
        if ((eax_12.b & 1) == 0)
            data_b9c398 = eax_12 | 1
            sub_6ad730()
    
    int32_t eax_20
    
    if (edi_1 != 0 || *(zx.d(var_3d0.w) + 0xb9c3a0) != 1)
        eax_20 = arg12 + ebx_1
    else
        int32_t eax_18
        int32_t edx_5
        edx_5:eax_18 = sx.q(arg12 + ebx_1)
        eax_20 = (eax_18 - edx_5) s>> 1
    
    edi = var_3d4 + eax_20
    var_3d4 = edi
    int32_t var_8_2 = 2
    void var_148
    sub_6efc80(&var_148)
    var_8_2.b = 1
    void var_278
    sub_6efc80(&var_278)
    int32_t var_8_3 = 0xffffffff
    void var_3a8
    sub_6efc80(&var_3a8)
    i_2 = i_1

int32_t edi_3 = edi - arg12
i_1 = nullptr
int32_t result = (*(arg1 + 0x308) - *(arg1 + 0x304)) s/ 0x3b4

if (result s> 0)
    int32_t ecx_12 = arg6
    result = arg5
    var_3d0 = 0
    void* i
    
    do
        int32_t esi_2 = 0
        int32_t edi_4 = 0
        
        if (result == 1)
            int32_t eax_27
            int32_t edx_9
            edx_9:eax_27 = sx.q(edi_3)
            esi_2 = neg.d((eax_27 - edx_9) s>> 1)
        else if (result == 2)
            esi_2 = neg.d(edi_3)
        
        if (ecx_12 == 1)
            int32_t eax_31
            int32_t edx_10
            edx_10:eax_31 = sx.q(ebx_1)
            edi_4 = neg.d((eax_31 - edx_10) s>> 1)
        else if (ecx_12 == 2)
            edi_4 = neg.d(ebx_1)
        
        uint32_t edx_11 = var_3d0
        var_3d0 += 0x3b4
        void* edx_12 = edx_11 + *(arg1 + 0x304)
        int32_t eax_36 = *(edx_12 + 0x18)
        *(edx_12 + 0x1c) += edi_4
        *(edx_12 + 0x18) = eax_36 + esi_2
        i = i_1 + 1
        i_1 = i
        ecx_12 = arg6
        result = arg5
    while (i s< (*(arg1 + 0x308) - *(arg1 + 0x304)) s/ 0x3b4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_745f2b(eax_2 ^ &__saved_ebp)
return result
