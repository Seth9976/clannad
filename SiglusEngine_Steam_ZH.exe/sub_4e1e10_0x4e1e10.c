// 函数: sub_4e1e10
// 地址: 0x4e1e10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_c = edi
int32_t (** eax_1)() = (*arg1[1])(arg1, 1, 0x40)
int32_t eax_3 = arg1[0xa] - 1
arg1[0x73] = eax_1
*eax_1 = sub_52e8d0

if (eax_3 u<= 4)
    switch (eax_3)
        case 0
            if (arg1[9] != 1)
                goto label_4e1e60
        case 1, 2
            if (arg1[9] != 3)
                goto label_4e1e60
        case 3, 4
            if (arg1[9] != 4)
                goto label_4e1e60
else if (arg1[9] s< 1)
label_4e1e60:
    void* eax_4 = *arg1
    *(eax_4 + 0x14) = 0xa
    (*eax_4)(arg1)

int32_t ecx = arg1[0xb]

if (ecx == 1)
    int32_t eax_18 = arg1[0xa]
    arg1[0x1e] = 1
    
    if (eax_18 == 1 || eax_18 == 3)
        bool cond:2_1 = arg1[9] s<= 1
        eax_1[1] = sub_4e1470
        
        if (not(cond:2_1))
            int32_t* eax_21 = arg1[0x37] + 0x84
            int32_t i_1 = arg1[9] - 1
            int32_t i
            
            do
                *eax_21 = 0
                eax_21 = &eax_21[0x15]
                i = i_1
                i_1 -= 1
            while (i != 1)
    else
    label_4e1f78:
        void* eax_19 = *arg1
        *(eax_19 + 0x14) = 0x1b
        (*eax_19)(arg1)
else if (ecx == 2)
    int32_t eax_11 = arg1[0xa]
    arg1[0x1e] = 3
    
    if (eax_11 == 3)
        int32_t eax_12 = arg1[0x12]
        
        if (eax_12 == 5 || eax_12 == 6)
            eax_1[1] = sub_4e12a0
            sub_4e10a0(arg1)
        else
            eax_1[1] = sub_4e1180
            sub_4e10a0(arg1)
    else if (eax_11 == 1)
        eax_1[1] = sub_4e14a0
    else if (eax_11 == 2)
        eax_1[1] = sub_4e13e0
    else if (eax_11 != 4)
        if (eax_11 != 5)
            goto label_4e1f78
        
        eax_1[1] = sub_4e1c10
        sub_4e10a0(arg1)
        sub_4e1640(arg1)
    else
        eax_1[1] = sub_4e1a60
        sub_4e1640(arg1)
else if (ecx == 4)
    int32_t eax_9 = arg1[0xa]
    arg1[0x1e] = 4
    
    if (eax_9 != 5)
        if (eax_9 != 4)
            goto label_4e1f78
        
        eax_1[1] = sub_4e13e0
    else
        eax_1[1] = sub_4e1500
        sub_4e10a0(arg1)
else
    if (ecx != arg1[0xa])
        goto label_4e1f78
    
    arg1[0x1e] = arg1[9]
    eax_1[1] = sub_4e13e0

int32_t result = arg1[0x15]

if (result == 0)
    arg1[0x1f] = arg1[0x1e]
    return result

arg1[0x1f] = 1
return result
