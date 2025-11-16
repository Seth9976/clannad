// 函数: sub_646e10
// 地址: 0x646e10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(arg2)
int32_t eax_6
int32_t edx_1
edx_1:eax_6 = sx.q(arg4)

if (arg2 s<= 0 || arg4 s<= 0)
    int32_t eax_9
    eax_9.b = 0
    return eax_9

arg3[3] = arg2
arg3[4] = arg4
sub_5979b0(arg3, (arg2 * arg4) << 2)
int32_t* ecx = arg3
int32_t eax_10 = *ecx

if (eax_10 == ecx[1])
    eax_10 = 0

int32_t edx_2 = ((eax_1 - edx) s>> 1) - 1
int32_t ebx = 0
int32_t eax_11 = ecx[3]
int32_t var_8 = 0

if (edx_2 s> eax_11)
    int32_t ecx_1 = edx_2
    
    if (edx_2 s< 0)
        ecx_1 = neg.d(ecx_1)
    
    if (ecx_1 s> 0)
        ebx = ecx_1
    
    ecx = arg3
    var_8 = ebx

if (edx_2 s>= 0)
    if (edx_2 s> ebx)
        ebx = edx_2
    
    int32_t eax_13 = eax_11 - edx_2
    
    if (eax_11 - edx_2 s< 0)
        eax_13 = neg.d(eax_13)
    
    if (eax_13 s> ebx)
        ebx = eax_13
    
    var_8 = ebx
else
    int32_t eax_12 = eax_11 - edx_2
    
    if (eax_11 - edx_2 s< 0)
        eax_12 = neg.d(eax_12)
    
    if (eax_12 s> ebx)
        ebx = eax_12
        var_8 = ebx

int32_t eax_14 = ecx[4]
int32_t esi_3 = ((eax_6 - edx_1) s>> 1) - 1

if (esi_3 s> eax_14)
    int32_t ecx_2 = esi_3
    
    if (esi_3 s< 0)
        ecx_2 = neg.d(ecx_2)
    
    if (ecx_2 s> ebx)
        ebx = ecx_2
    
    var_8 = ebx

if (esi_3 s>= 0)
    if (esi_3 s> ebx)
        ebx = esi_3
    
    int32_t eax_16 = eax_14 - esi_3
    
    if (eax_14 - esi_3 s< 0)
        eax_16 = neg.d(eax_16)
    
    if (eax_16 s> ebx)
        ebx = eax_16
    
    var_8 = ebx
else
    int32_t eax_15 = eax_14 - esi_3
    
    if (eax_14 - esi_3 s< 0)
        eax_15 = neg.d(eax_15)
    
    if (eax_15 s> ebx)
        ebx = eax_15
        var_8 = ebx

int32_t eax_17 = ebx

if (ebx == 0)
    eax_17 = 1

int32_t* ecx_3 = arg3
int32_t edi_2 = edx_2 - ebx
int32_t var_10 = eax_17
int32_t edi_4 = esi_3 - ebx
int32_t edi_5 = 0

if (eax_17 s> 0)
    int32_t esi_4 = eax_17 - 1
    int32_t ebx_1 = edx_2
    
    do
        int32_t eax_21 = edi_5
        int32_t eax_20
        
        if (esi_4 != 0)
            if (esi_4 s<= 0)
                if (esi_4 s< 0)
                    if (edi_5 s< esi_4)
                        eax_21 = esi_4
                    else if (edi_5 s> 0)
                        eax_21 = 0
            else if (edi_5 s< 0)
                eax_21 = 0
            else if (edi_5 s> esi_4)
                eax_21 = esi_4
            
            eax_20 = divs.dp.d(sx.q(eax_21 * 0xff), esi_4)
        else
            eax_20 = 0xff
        
        int32_t eax_25 = ((eax_6 - edx_1) s>> 1) - 1 - edx_2 + ebx_1
        sub_64cfb0(eax_25, ecx_3[3], eax_10, ecx_3[4], edi_2, edi_4, ebx_1, eax_25, eax_20, arg5, 
            0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff)
        eax_17 = var_10
        edi_5 += 1
        ecx_3 = arg3
        ebx_1 -= 1
    while (edi_5 s< eax_17)
    
    ebx = var_8
    edx_2 = ((eax_1 - edx) s>> 1) - 1
    esi_3 = ((eax_6 - edx_1) s>> 1) - 1

int32_t ecx_6 = edx_2 + 1 + ebx
int32_t var_30 = ecx_6
int32_t edx_9

if (eax_17 s<= 0)
    edx_9 = var_10
else
    int32_t ebx_2 = esi_3
    int32_t edi_6 = 0
    
    do
        int32_t eax_27 = edi_6
        int32_t eax_26
        
        if (eax_17 != 1)
            if (eax_17 - 1 s<= 0)
                if (eax_17 - 1 s< 0)
                    if (edi_6 s< eax_17 - 1)
                        eax_27 = eax_17 - 1
                    else if (edi_6 s> 0)
                        eax_27 = 0
            else if (edi_6 s< 0)
                eax_27 = 0
            else if (edi_6 s> eax_17 - 1)
                eax_27 = eax_17 - 1
            
            eax_26 = divs.dp.d(sx.q(eax_27 * 0xff), eax_17 - 1)
        else
            eax_26 = 0xff
        
        int32_t eax_32 = arg3
        sub_64cfb0(eax_32, *(eax_32 + 0xc), eax_10, *(eax_32 + 0x10), ecx_6, edi_4, 
            edx_2 + 1 + edi_6, ebx_2, eax_26, arg5, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff)
        edx_9 = var_10
        edi_6 += 1
        ecx_6 = var_30
        ebx_2 -= 1
    while (edi_6 s< edx_9)
    
    ebx = var_8
    esi_3 = ((eax_6 - edx_1) s>> 1) - 1

int32_t ecx_8 = esi_3 + 1
int32_t edi_7 = 0
int32_t var_14_1 = ecx_8
int32_t eax_33 = ecx_8 + ebx

if (edx_9 s> 0)
    int32_t ebx_3 = ((eax_1 - edx) s>> 1) - 1
    int32_t esi_6 = edx_9 - 1
    
    do
        int32_t eax_35 = edi_7
        int32_t eax_34
        
        if (esi_6 != 0)
            if (esi_6 s<= 0)
                if (esi_6 s< 0)
                    if (edi_7 s< esi_6)
                        eax_35 = esi_6
                    else if (edi_7 s> 0)
                        eax_35 = 0
            else if (edi_7 s< 0)
                eax_35 = 0
            else if (edi_7 s> esi_6)
                eax_35 = esi_6
            
            eax_34 = divs.dp.d(sx.q(eax_35 * 0xff), esi_6)
        else
            eax_34 = 0xff
        
        int32_t eax_39 = arg3
        sub_64cfb0(eax_39, *(eax_39 + 0xc), eax_10, *(eax_39 + 0x10), edi_2, eax_33, ebx_3, 
            ecx_8 + edi_7, eax_34, arg5, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff)
        edx_9 = var_10
        edi_7 += 1
        ecx_8 = var_14_1
        ebx_3 -= 1
    while (edi_7 s< edx_9)
    
    ebx = var_8

int32_t edi_8 = 0

if (edx_9 s> 0)
    do
        int32_t eax_44 = edi_8
        int32_t eax_43
        
        if (edx_9 != 1)
            if (edx_9 - 1 s<= 0)
                if (edx_9 - 1 s< 0)
                    if (edi_8 s< edx_9 - 1)
                        eax_44 = edx_9 - 1
                    else if (edi_8 s> 0)
                        eax_44 = 0
            else if (edi_8 s< 0)
                eax_44 = 0
            else if (edi_8 s> edx_9 - 1)
                eax_44 = edx_9 - 1
            
            eax_43 = divs.dp.d(sx.q(eax_44 * 0xff), edx_9 - 1)
        else
            eax_43 = 0xff
        
        int32_t ecx_12 = edx_2 + 1 + edi_8
        sub_64cfb0(arg3, arg3[3], eax_10, arg3[4], edx_2 + 1 + ebx, ecx_8 + ebx, ecx_12, 
            ecx_8 - (edx_2 + 1) + ecx_12, eax_43, arg5, 0xffffffff, 0xffffffff, 0xffffffff, 
            0xffffffff)
        edi_8 += 1
    while (edi_8 s< var_10)

int32_t eax_42
eax_42.b = 1
return eax_42
