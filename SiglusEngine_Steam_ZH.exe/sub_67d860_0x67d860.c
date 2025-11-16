// 函数: sub_67d860
// 地址: 0x67d860
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = data_bac42c
char edx = arg1[4].b
arg1[0xa].w = 0
*(arg1 + 0x2a) = 0
*arg1 = 0xffffffff
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
int32_t ebx = *eax
int32_t eax_1 = eax[1]
int32_t var_c = ebx
char var_5 = edx
void* eax_2

if (*(data_bac4a0 + 0xcc) != 0)
    eax_2.b = 0
else if (*(data_bac484 + 0x138) == 0)
    eax_2.b = *(data_bac498 + 2) == 0
else
    eax_2.b = 0

void* ecx = data_bac4c8

if (*(ecx + 8) != 0)
    bool cond:0_1
    
    if (*(ecx + 0x510) != 0)
        if (*(ecx + 0x1c80) == 0)
            if (eax_2.b != 0)
                cond:0_1 = *(data_bac458 + 0x3e6) != 0
                goto label_67d92b
            
            var_5 = 0
    else if (eax_2.b == 0)
        var_5 = 0
    else
        cond:0_1 = *(data_bac458 + 0x39b) != 0
    label_67d92b:
        
        if (not(cond:0_1))
            var_5 = 0
else if (eax_2.b == 0)
    var_5 = 0
else
    char eax_3 = sub_634fe0()
    ecx = data_bac4c8
    
    if (eax_3 == 0)
        var_5 = 0

void* eax_6

if (*(data_bac4a0 + 0xcc) != 0)
    eax_6.b = 0
else if (*(data_bac484 + 0x138) == 0)
    eax_6.b = *(data_bac498 + 2) == 0
else
    eax_6.b = 0

if (*(ecx + 8) != 1)
    bool cond:1_1
    
    if (*(ecx + 0x510) != 1)
        if (*(ecx + 0x1c80) == 1)
            if (eax_6.b != 0)
                cond:1_1 = *(data_bac458 + 0x3e6) != 0
                goto label_67d9aa
            
            var_5 = 1
    else if (eax_6.b == 0)
        var_5 = 1
    else
        cond:1_1 = *(data_bac458 + 0x39b) != 0
    label_67d9aa:
        
        if (not(cond:1_1))
            var_5 = 1
else if (eax_6.b == 0)
    var_5 = 1
else if (sub_634fe0() == 0)
    var_5 = 1

int32_t i = 0

if (((arg1[0xc] - arg1[0xb]) & 0xfffffffc) s> 0)
    do
        int32_t* eax_13 = *(arg1[0xb] + (i << 2))
        
        if (*eax_13 == 0xffffffff)
            sub_688a50(eax_13)
        
        i += 1
    while (i s< (arg1[0xc] - arg1[0xb]) s>> 2)

int32_t eax_11
eax_11.b = arg1[4].b
eax_11:1.b = var_5

if (eax_11.b == 0)
label_67da9e:
    
    if (*arg1 == 0xffffffff)
        if (ebx s>= 0)
            eax_11 = data_bac4a0
            
            if (ebx s< *(eax_11 + 8))
                int32_t ecx_3 = eax_1
                
                if (ecx_3 s>= 0 && ecx_3 s< *(eax_11 + 0xc))
                    int32_t ebx_2 = 0
                    eax_11 = arg1[0xc] - arg1[0xb]
                    
                    if ((eax_11 & 0xfffffffc) s> 0)
                        do
                            int32_t* edi_1 = *(arg1[0xb] + (ebx_2 << 2))
                            
                            if (sub_67d630(edi_1, var_c, ecx_3) != 0 && *(data_bac4a0 + 0xc8) != 0)
                                if (*arg1 == 0xffffffff)
                                label_67db12:
                                    *arg1 = *edi_1
                                    arg1[1] = edi_1[0xc]
                                    arg1[2] = edi_1[0xd]
                                else
                                    int32_t eax_35 = edi_1[0xc]
                                    int32_t ecx_5 = arg1[1]
                                    
                                    if (eax_35 s> ecx_5)
                                        goto label_67db12
                                    
                                    if (eax_35 == ecx_5 && edi_1[0xd] s>= arg1[2])
                                        goto label_67db12
                            
                            ebx_2 += 1
                            ecx_3 = eax_1
                            eax_11 = (arg1[0xc] - arg1[0xb]) s>> 2
                        while (ebx_2 s< eax_11)
        
        if (*arg1 s>= 0)
            bool cond:2_1 = sub_635890(eax_11, 0, 0x100, 1) == 0
            int32_t eax_43 = arg1[6]
            
            if (cond:2_1)
                arg1[3] = 1
                
                if (eax_43 != *arg1 || arg1[9] != 1)
                    arg1[0xa].b = 1
            else
                arg1[3] = 2
                
                if (eax_43 != *arg1 || arg1[9] != 2)
                    *(arg1 + 0x29) = 1
                    sub_635890(eax_43, 0, 0x100, 2)
                else
                    eax_43 = sub_635890(eax_43, 0, 0x100, 1)
                    
                    if (eax_43.b != 0)
                        *(arg1 + 0x29) = 1
                        sub_635890(eax_43, 0, 0x100, 2)
else
    if (eax_11:1.b == 0)
        if (eax_11.b != 0 && eax_11:1.b == 0)
            int32_t edx_1 = 0
            eax_11 = arg1[0xc] - arg1[0xb]
            
            if ((eax_11 & 0xfffffffc) s> 0)
                int32_t* ecx_2 = arg1[0xb]
                
                do
                    int32_t* edi = *ecx_2
                    
                    if (arg1[6] == *edi)
                        eax_11 = sub_635890(eax_11, 1, 0x100, 2)
                        
                        if (arg1[9] != 2)
                            goto label_67da9b
                        
                        *arg1 = *edi
                        arg1[1] = edi[0xc]
                        arg1[2] = edi[0xd]
                        arg1[3] = 2
                        *(arg1 + 0x2a) = 1
                        *(edi + 0x3a) = 1
                        goto label_67dbe5
                    
                    edx_1 += 1
                    ecx_2 = &ecx_2[1]
                    eax_11 = (arg1[0xc] - arg1[0xb]) s>> 2
                while (edx_1 s< eax_11)
                
            label_67da9b:
                ebx = var_c
        
        goto label_67da9e
    
    int32_t i_1 = 0
    *arg1 = arg1[6]
    
    if (((arg1[0xc] - arg1[0xb]) & 0xfffffffc) s> 0)
        do
            int32_t* ecx_1 = *(arg1[0xb] + (i_1 << 2))
            
            if (*arg1 == *ecx_1)
                arg1[1] = ecx_1[0xc]
                arg1[2] = ecx_1[0xd]
                char eax_23
                
                if (*(ecx_1 + 0x39) == 0)
                    eax_23 = sub_67d630(ecx_1, ebx, eax_1)
                
                int32_t eax_24
                
                if (*(ecx_1 + 0x39) != 0 || eax_23 != 0)
                    eax_24 = 2
                else
                    eax_24 = 0
                
                arg1[3] = eax_24
            
            i_1 += 1
        while (i_1 s< (arg1[0xc] - arg1[0xb]) s>> 2)

label_67dbe5:
arg1[6] = *arg1
arg1[7] = arg1[1]
arg1[8] = arg1[2]
arg1[9] = arg1[3]
int32_t result
result.b = var_5
arg1[4].b = result.b
result.b = 1
return result
