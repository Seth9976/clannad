// 函数: sub_6d9320
// 地址: 0x6d9320
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char eax_2 = (*(arg3 + 0x74)).b

if ((eax_2 & 1) == 0)
    sub_6d47a0(arg3, "missing IHDR")
    noreturn

if ((eax_2 & 6) != 0)
    int32_t eax_3 = sub_6d8610(arg3, arg4)
    
    if ((*(arg3 + 0x78) & 0x100000) == 0)
        sub_6d47a0(arg3, "out of place")
        noreturn
    
    char var_e0[0xd8]
    sub_6d4690(eax_3, &var_e0, arg3, "out of place")
    int32_t* eax_4 = sub_6d4470(arg3, &var_e0)
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_4

if (arg2 != 0 && (*(arg2 + 8) & 2) != 0)
    sub_6d8610(arg3, arg4)
    int32_t* eax_5 = sub_6d4840(arg3, "duplicate")
    sub_745f2b(eax_1 ^ &__saved_ebp)
    return eax_5

int32_t ebx
uint32_t edi

if (*(arg3 + 0x14f) != 3)
    edi = zx.d(*(arg3 + 0x153))
    ebx.b = *(arg3 + 0x150)
else
    edi = 3
    ebx.b = 8

uint32_t eax_7

if (arg4 != edi || arg4 u> 4)
    sub_6d4840(arg3, "invalid")
    eax_7 = sub_6d8610(arg3, arg4)
else
    char var_e1_1 = ebx.b
    char var_e2_1 = ebx.b
    char var_e3_1 = ebx.b
    char var_e4 = ebx.b
    sub_6d85d0(arg4, &var_e4, arg3, edi)
    eax_7 = sub_6d8610(arg3, 0)
    
    if (eax_7 == 0)
        if (edi != 0)
            do
                char ecx_8 = (&var_e4)[eax_7]
                
                if (ecx_8 == 0 || ecx_8 u> ebx.b)
                    int32_t* eax_11 = sub_6d4840(arg3, "invalid")
                    sub_745f2b(eax_1 ^ &__saved_ebp)
                    return eax_11
                
                eax_7 += 1
            while (eax_7 u< edi)
        
        if ((*(arg3 + 0x14f) & 2) == 0)
            eax_7.b = var_e4
            *(arg3 + 0x1a3) = eax_7.b
            *(arg3 + 0x1a0) = eax_7.b
            *(arg3 + 0x1a1) = eax_7.b
            *(arg3 + 0x1a2) = eax_7.b
            eax_7 = zx.d(var_e3_1)
        else
            *(arg3 + 0x1a0) = var_e4
            *(arg3 + 0x1a1) = var_e3_1
            *(arg3 + 0x1a2) = var_e2_1
            eax_7 = zx.d(var_e1_1)
        
        *(arg3 + 0x1a4) = eax_7.b
        
        if (arg2 != 0 && arg3 != 0xfffffe60)
            int32_t eax_12 = *(arg3 + 0x1a0)
            *(arg2 + 8) |= 2
            *(arg2 + 0x94) = eax_12
            eax_12.b = *(arg3 + 0x1a4)
            *(arg2 + 0x98) = eax_12.b
            sub_745f2b(eax_1 ^ &__saved_ebp)
            return eax_12

sub_745f2b(eax_1 ^ &__saved_ebp)
return eax_7
