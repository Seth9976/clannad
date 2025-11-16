// 函数: sub_6cfc00
// 地址: 0x6cfc00
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
uint32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t var_8 = eax_1

if (arg1 != 0)
    if ((*(arg1 + 0x78) & 0x40) == 0)
        sub_6dca30(arg1)
    
    int32_t edx = *(arg1 + 0x114)
    char var_c_1 = *(arg1 + 0x14f)
    char var_b_1 = *(arg1 + 0x150)
    char var_a_1 = *(arg1 + 0x153)
    char eax_4 = *(arg1 + 0x152)
    int32_t var_14 = edx
    uint32_t ecx = zx.d(eax_4)
    uint32_t ecx_2
    
    if (eax_4 u< 8)
        ecx_2 = (ecx * edx + 7) u>> 3
    else
        ecx_2 = (ecx u>> 3) * edx
    
    if (*(arg1 + 0x14c) != 0 && (*(arg1 + 0x7c) & 2) != 0)
        uint32_t eax_5 = zx.d(*(arg1 + 0x14d))
        
        if (eax_5 u<= 5)
            switch (eax_5)
                case 0
                    if ((*(arg1 + 0x118) & 7) != 0)
                        goto label_6cfcb2
                case 1
                    if ((*(arg1 + 0x118) & 7) != 0 || *(arg1 + 0x100) u< 5)
                        uint32_t eax_7 = sub_6dc940(arg1)
                        sub_745f2b(var_8 ^ &__saved_ebp)
                        return eax_7
                case 2
                    if (((*(arg1 + 0x118)).b & 7) != 4)
                        uint32_t eax_9 = sub_6dc940(arg1)
                        sub_745f2b(var_8 ^ &__saved_ebp)
                        return eax_9
                case 3
                    if ((*(arg1 + 0x118) & 3) != 0 || *(arg1 + 0x100) u< 3)
                        uint32_t eax_10 = sub_6dc940(arg1)
                        sub_745f2b(var_8 ^ &__saved_ebp)
                        return eax_10
                case 4
                    if (((*(arg1 + 0x118)).b & 3) != 2)
                        uint32_t eax_12 = sub_6dc940(arg1)
                        sub_745f2b(var_8 ^ &__saved_ebp)
                        return eax_12
                case 5
                    if ((*(arg1 + 0x118) & 1) != 0 || *(arg1 + 0x100) u< 2)
                        uint32_t eax_13 = sub_6dc940(arg1)
                        sub_745f2b(var_8 ^ &__saved_ebp)
                        return eax_13
        else if ((*(arg1 + 0x118) & 1) == 0)
        label_6cfcb2:
            uint32_t eax_6 = sub_6dc940(arg1)
            sub_745f2b(var_8 ^ &__saved_ebp)
            return eax_6
    
    if ((*(arg1 + 0x74) & 4) == 0)
        sub_6d42e0(arg1, "Invalid attempt to read row data")
        noreturn
    
    sub_6dc630(ecx_2 + 1, *(arg1 + 0x124), arg1, ecx_2 + 1)
    char* ecx_24 = *(arg1 + 0x124)
    char eax_15 = *ecx_24
    
    if (eax_15 != 0)
        if (eax_15 u>= 5)
            sub_6d42e0(arg1, "bad adaptive filter value")
            noreturn
        
        sub_6dc5b0(&ecx_24[1], &var_14, arg1, &ecx_24[1], *(arg1 + 0x120) + 1, zx.d(eax_15))
    
    int32_t* ebx_1 = *(arg1 + 0x124)
    sub_748840(*(arg1 + 0x120), ebx_1, ecx_2 + 1)
    
    if ((*(arg1 + 0x248) & 4) != 0 && *(arg1 + 0x24c) == 0x40)
        sub_6cfb20(&var_14, ebx_1 + 1)
    
    if (*(arg1 + 0x7c) != 0)
        sub_6d3f00(arg1, &var_14)
    
    int32_t* eax_22
    eax_22.b = *(arg1 + 0x157)
    
    if (eax_22.b == 0)
        eax_22.b = eax_4
        *(arg1 + 0x157) = eax_22.b
        
        if (eax_22.b u> *(arg1 + 0x156))
            sub_6d42e0(arg1, "sequential row overflow")
            noreturn
    else if (eax_22.b != eax_4)
        sub_6d42e0(arg1, "internal sequential row size calculation error")
        noreturn
    
    int32_t ecx_28
    
    if (*(arg1 + 0x14c) != 0)
        ecx_28 = *(arg1 + 0x7c)
    
    if (*(arg1 + 0x14c) != 0 && (ecx_28.b & 2) != 0)
        eax_22.b = *(arg1 + 0x14d)
        
        if (eax_22.b u< 6)
            uint32_t eax_23 = zx.d(eax_22.b)
            eax_22 = sub_6dbee0(eax_23, *(arg1 + 0x124) + 1, &var_14, eax_23, ecx_28)
        
        if (arg2 != 0)
            sub_6dba30(eax_22, arg2, arg1, 0)
    else if (arg2 != 0)
        sub_6dba30(eax_22, arg2, arg1, 0xffffffff)
    
    eax_1 = sub_6dc940(arg1)
    int32_t ecx_32 = *(arg1 + 0x1bc)
    
    if (ecx_32 != 0)
        eax_1 = ecx_32(arg1, *(arg1 + 0x118), zx.d(*(arg1 + 0x14d)))

sub_745f2b(var_8 ^ &__saved_ebp)
return eax_1
