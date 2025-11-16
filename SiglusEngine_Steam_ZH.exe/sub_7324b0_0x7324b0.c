// 函数: sub_7324b0
// 地址: 0x7324b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t (** eax_2)() = (*arg1[1])(arg1, 1, 0x1c)
arg1[0x6f] = eax_2
*eax_2 = sub_52e4f0
int32_t ecx_1 = arg1[0xa] - 1

if (ecx_1 u<= 4)
    switch (ecx_1)
        case 0
            if (arg1[9] != 1)
                *(*arg1 + 0x14) = 0xb
                (**arg1)(arg1)
        case 1, 2
            if (arg1[9] != 3)
                *(*arg1 + 0x14) = 0xb
                (**arg1)(arg1)
        case 3, 4
            if (arg1[9] != 4)
                *(*arg1 + 0x14) = 0xb
                (**arg1)(arg1)
else if (arg1[9] s< 1)
    *(*arg1 + 0x14) = 0xb
    (**arg1)(arg1)

if (arg1[0x43] != 0 && arg1[0xa] != 2)
    *(*arg1 + 0x14) = 0x1c
    (**arg1)(arg1)

int32_t ecx_2 = arg1[0xb]
int32_t* eax_13

if (ecx_2 == 1)
    eax_13 = arg1[0xa]
    arg1[0x19] = 1
    
    if (eax_13 == 1 || eax_13 == 3)
        int32_t i = 1
        eax_2[1] = sub_7322a0
        
        if (arg1[9] s> 1)
            int32_t edx_1 = 0x58
            
            do
                eax_13 = arg1[0x31]
                edx_1 += 0x58
                i += 1
                *(eax_13 + edx_1 - 0x24) = 0
            while (i s< arg1[9])
    else if (eax_13 != 2)
        *(*arg1 + 0x14) = 0x1c
        eax_13 = (**arg1)(arg1)
    else
        int32_t eax_18 = arg1[0x43]
        
        if (eax_18 == 0)
            eax_2[1] = sub_731f40
            eax_13 = sub_731e10(arg1)
        else if (eax_18 == 1)
            eax_2[1] = sub_7320b0
            eax_13 = sub_731e10(arg1)
        else
            *(*arg1 + 0x14) = 0x1c
            (**arg1)(arg1)
            eax_13 = sub_731e10(arg1)
else if (ecx_2 == 2)
    eax_13 = arg1[0xa]
    arg1[0x19] = 3
    
    if (eax_13 == 3)
        eax_2[1] = sub_731ce0
        eax_13 = sub_731c10(arg1)
    else if (eax_13 == 1)
        eax_2[1] = sub_7322f0
    else if (eax_13 != 2)
        *(*arg1 + 0x14) = 0x1c
        eax_13 = (**arg1)(arg1)
    else
        int32_t eax_14 = arg1[0x43]
        eax_13 = eax_14
        
        if (eax_14 == 0)
            eax_2[1] = sub_732180
        else
            int32_t* temp6_1 = eax_13
            eax_13 -= 1
            
            if (temp6_1 == 1)
                eax_2[1] = sub_732000
            else
                *(*arg1 + 0x14) = 0x1c
                eax_13 = (**arg1)(arg1)
else if (ecx_2 == 4)
    eax_13 = arg1[0xa]
    arg1[0x19] = 4
    
    if (eax_13 == 5)
        eax_2[1] = sub_732350
        eax_13 = sub_731c10(arg1)
    else if (eax_13 != 4)
        *(*arg1 + 0x14) = 0x1c
        eax_13 = (**arg1)(arg1)
    else
        eax_2[1] = sub_732210
else if (ecx_2 != arg1[0xa])
    *(*arg1 + 0x14) = 0x1c
    eax_13 = (**arg1)(arg1)
else
    eax_13 = arg1[9]
    arg1[0x19] = eax_13
    eax_2[1] = sub_732210

if (*(arg1 + 0x4a) != 0)
    arg1[0x1a] = 1
    return eax_13

int32_t eax_24 = arg1[0x19]
arg1[0x1a] = eax_24
return eax_24
