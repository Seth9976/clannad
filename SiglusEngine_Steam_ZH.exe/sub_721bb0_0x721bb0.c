// 函数: sub_721bb0
// 地址: 0x721bb0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_1 = arg5 - arg3
int32_t esi = 1
int32_t var_c = ecx_1

if (arg5 - arg3 s< 0)
    ecx_1 = neg.d(ecx_1)
    esi = 0xffffffff
    var_c = ecx_1

int32_t edi = 1
int32_t edx_1 = arg6 - arg4
int32_t var_10 = edx_1

if (arg6 - arg4 s< 0)
    edx_1 = neg.d(edx_1)
    edi = 0xffffffff
    var_10 = edx_1

if (ecx_1 s<= edx_1)
    if (edx_1 s>= arg2)
        return 0
else if (ecx_1 s>= arg2)
    return 0

if (edx_1 == 0)
    if (ecx_1 != 0)
        if (esi s>= 0)
            int32_t ebx_4 = arg3
            int32_t* edi_3 = arg1
            int32_t i = var_c + 1
            
            do
                *edi_3 = ebx_4
                edi_3[1] = arg4
                edi_3 = &edi_3[2]
                ebx_4 += 1
                i -= 1
            while (i != 0)
            
            return (edi_3 - arg1) u>> 3
        
        int32_t ebx_2 = arg3
        int32_t* edi_1 = arg1
        int32_t i_1 = var_c + 1
        
        do
            *edi_1 = ebx_2
            edi_1[1] = arg4
            edi_1 = &edi_1[2]
            ebx_2 -= 1
            i_1 -= 1
        while (i_1 != 0)
        
        return (edi_1 - arg1) u>> 3
    
    *arg1 = arg3
    arg1[1] = arg4
    return 8 u>> 3

if (ecx_1 == 0)
    if (edi s>= 0)
        int32_t ebx_8 = arg4
        int32_t* edi_7 = arg1
        int32_t i_2 = var_10 + 1
        
        do
            *edi_7 = arg3
            edi_7[1] = ebx_8
            edi_7 = &edi_7[2]
            ebx_8 += 1
            i_2 -= 1
        while (i_2 != 0)
        
        return (edi_7 - arg1) u>> 3
    
    int32_t ebx_6 = arg4
    int32_t* edi_5 = arg1
    int32_t i_3 = var_10 + 1
    
    do
        *edi_5 = arg3
        edi_5[1] = ebx_6
        edi_5 = &edi_5[2]
        ebx_6 -= 1
        i_3 -= 1
    while (i_3 != 0)
    
    return (edi_5 - arg1) u>> 3

if (ecx_1 s<= edx_1)
    int32_t eax_45 = neg.d(edx_1)
    int32_t eax_46 = ecx_1 * 2
    int32_t eax_47 = edx_1 * 2
    
    if (edi s>= 0)
        if (esi s>= 0)
            int32_t eax_60 = eax_45
            int32_t esi_8 = arg3
            int32_t edx_9 = arg4
            void* edi_23 = arg1
            int32_t i_4 = var_10 + 1
            
            do
                *edi_23 = esi_8
                *(edi_23 + 4) = edx_9
                edi_23 += 8
                edx_9 += 1
                eax_60 += eax_46
                
                if (eax_60 s>= 0)
                    esi_8 += 1
                    eax_60 -= eax_47
                
                i_4 -= 1
            while (i_4 != 0)
            
            return (edi_23 - arg1) u>> 3
        
        int32_t eax_56 = eax_45
        int32_t esi_7 = arg3
        int32_t edx_8 = arg4
        void* edi_21 = arg1
        int32_t i_5 = var_10 + 1
        
        do
            *edi_21 = esi_7
            *(edi_21 + 4) = edx_8
            edi_21 += 8
            edx_8 += 1
            eax_56 += eax_46
            
            if (eax_56 s>= 0)
                esi_7 -= 1
                eax_56 -= eax_47
            
            i_5 -= 1
        while (i_5 != 0)
        
        return (edi_21 - arg1) u>> 3
    
    if (esi s>= 0)
        int32_t eax_52 = eax_45
        int32_t esi_6 = arg3
        int32_t edx_7 = arg4
        void* edi_19 = arg1
        int32_t i_6 = var_10 + 1
        
        do
            *edi_19 = esi_6
            *(edi_19 + 4) = edx_7
            edi_19 += 8
            edx_7 -= 1
            eax_52 += eax_46
            
            if (eax_52 s>= 0)
                esi_6 += 1
                eax_52 -= eax_47
            
            i_6 -= 1
        while (i_6 != 0)
        
        return (edi_19 - arg1) u>> 3
    
    int32_t eax_48 = eax_45
    int32_t esi_5 = arg3
    int32_t edx_6 = arg4
    int32_t* edi_17 = arg1
    int32_t i_7 = var_10 + 1
    
    do
        *edi_17 = esi_5
        edi_17[1] = edx_6
        edi_17 = &edi_17[2]
        edx_6 -= 1
        eax_48 += eax_46
        
        if (eax_48 s>= 0)
            esi_5 -= 1
            eax_48 -= eax_47
        
        i_7 -= 1
    while (i_7 != 0)
    
    return (edi_17 - arg1) u>> 3

int32_t eax_25 = neg.d(ecx_1)
int32_t eax_26 = edx_1 * 2
int32_t eax_27 = ecx_1 * 2

if (esi s>= 0)
    if (edi s>= 0)
        int32_t eax_40 = eax_25
        int32_t esi_4 = arg4
        int32_t edx_5 = arg3
        int32_t* edi_15 = arg1
        int32_t i_8 = var_c + 1
        
        do
            *edi_15 = edx_5
            edi_15[1] = esi_4
            edi_15 = &edi_15[2]
            edx_5 += 1
            eax_40 += eax_26
            
            if (eax_40 s>= 0)
                esi_4 += 1
                eax_40 -= eax_27
            
            i_8 -= 1
        while (i_8 != 0)
        
        return (edi_15 - arg1) u>> 3
    
    int32_t eax_36 = eax_25
    int32_t esi_3 = arg4
    int32_t edx_4 = arg3
    int32_t* edi_13 = arg1
    int32_t i_9 = var_c + 1
    
    do
        *edi_13 = edx_4
        edi_13[1] = esi_3
        edi_13 = &edi_13[2]
        edx_4 += 1
        eax_36 += eax_26
        
        if (eax_36 s>= 0)
            esi_3 -= 1
            eax_36 -= eax_27
        
        i_9 -= 1
    while (i_9 != 0)
    
    return (edi_13 - arg1) u>> 3

if (edi s>= 0)
    int32_t eax_32 = eax_25
    int32_t esi_2 = arg4
    int32_t edx_3 = arg3
    int32_t* edi_11 = arg1
    int32_t i_10 = var_c + 1
    
    do
        *edi_11 = edx_3
        edi_11[1] = esi_2
        edi_11 = &edi_11[2]
        edx_3 -= 1
        eax_32 += eax_26
        
        if (eax_32 s>= 0)
            esi_2 += 1
            eax_32 -= eax_27
        
        i_10 -= 1
    while (i_10 != 0)
    
    return (edi_11 - arg1) u>> 3

int32_t eax_28 = eax_25
int32_t esi_1 = arg4
int32_t edx_2 = arg3
int32_t* edi_9 = arg1
int32_t i_11 = var_c + 1

do
    *edi_9 = edx_2
    edi_9[1] = esi_1
    edi_9 = &edi_9[2]
    edx_2 -= 1
    eax_28 += eax_26
    
    if (eax_28 s>= 0)
        esi_1 -= 1
        eax_28 -= eax_27
    
    i_11 -= 1
while (i_11 != 0)

return (edi_9 - arg1) u>> 3
