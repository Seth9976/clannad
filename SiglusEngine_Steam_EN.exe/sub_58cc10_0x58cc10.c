// 函数: sub_58cc10
// 地址: 0x58cc10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4
int32_t i_15 = arg6 - eax_1
int32_t i_14 = i_15
int32_t edx

if (arg6 - eax_1 s>= 0)
    edx = 1
else
    i_15 = neg.d(i_15)
    edx = 0xffffffff
    i_14 = i_15

int32_t ecx_1 = arg7 - arg5
int32_t var_18 = ecx_1
int32_t edi

if (arg7 - arg5 s>= 0)
    edi = 1
else
    ecx_1 = neg.d(ecx_1)
    edi = 0xffffffff
    var_18 = ecx_1

if (ecx_1 s>= arg2)
    return 0

if (ecx_1 == 0)
    if (i_15 != 0)
        if (arg8 != 0)
            if (edx s>= 0)
                eax_1 += i_15
        else if (edx s< 0)
            eax_1 -= i_15
    
    *arg3 = eax_1
    arg3[1] = arg5
    return 8 u>> 3

if (i_15 == 0)
    if (edi s>= 0)
        int32_t ebx_2 = arg5
        int32_t* edi_3 = arg3
        int32_t i = var_18 + 1
        
        do
            *edi_3 = eax_1
            edi_3[1] = ebx_2
            edi_3 = &edi_3[2]
            ebx_2 += 1
            i -= 1
        while (i != 0)
        
        return (edi_3 - arg3) u>> 3
    
    int32_t ebx_1 = arg5
    int32_t* edi_1 = arg3
    int32_t i_1 = var_18 + 1
    
    do
        *edi_1 = eax_1
        edi_1[1] = ebx_1
        edi_1 = &edi_1[2]
        ebx_1 -= 1
        i_1 -= 1
    while (i_1 != 0)
    
    return (edi_1 - arg3) u>> 3

if (i_15 s<= ecx_1)
    int32_t eax_54 = neg.d(ecx_1)
    int32_t eax_55 = i_15 * 2
    int32_t eax_56 = ecx_1 * 2
    
    if (edi s>= 0)
        if (edx s>= 0)
            int32_t eax_69 = eax_54
            int32_t esi_12 = eax_1
            int32_t edx_12 = arg5
            int32_t* edi_43 = arg3
            int32_t i_2 = var_18 + 1
            
            do
                *edi_43 = esi_12
                edi_43[1] = edx_12
                edi_43 = &edi_43[2]
                edx_12 += 1
                eax_69 += eax_55
                
                if (eax_69 s>= 0)
                    esi_12 += 1
                    eax_69 -= eax_56
                
                i_2 -= 1
            while (i_2 != 0)
            
            return (edi_43 - arg3) u>> 3
        
        int32_t eax_65 = eax_54
        int32_t esi_11 = eax_1
        int32_t edx_11 = arg5
        int32_t* edi_41 = arg3
        int32_t i_3 = var_18 + 1
        
        do
            *edi_41 = esi_11
            edi_41[1] = edx_11
            edi_41 = &edi_41[2]
            edx_11 += 1
            eax_65 += eax_55
            
            if (eax_65 s>= 0)
                esi_11 -= 1
                eax_65 -= eax_56
            
            i_3 -= 1
        while (i_3 != 0)
        
        return (edi_41 - arg3) u>> 3
    
    if (edx s>= 0)
        int32_t eax_61 = eax_54
        int32_t esi_10 = eax_1
        int32_t edx_10 = arg5
        int32_t* edi_39 = arg3
        int32_t i_4 = var_18 + 1
        
        do
            *edi_39 = esi_10
            edi_39[1] = edx_10
            edi_39 = &edi_39[2]
            edx_10 -= 1
            eax_61 += eax_55
            
            if (eax_61 s>= 0)
                esi_10 += 1
                eax_61 -= eax_56
            
            i_4 -= 1
        while (i_4 != 0)
        
        return (edi_39 - arg3) u>> 3
    
    int32_t eax_57 = eax_54
    int32_t esi_9 = eax_1
    int32_t edx_9 = arg5
    int32_t* edi_37 = arg3
    int32_t i_5 = var_18 + 1
    
    do
        *edi_37 = esi_9
        edi_37[1] = edx_9
        edi_37 = &edi_37[2]
        edx_9 -= 1
        eax_57 += eax_55
        
        if (eax_57 s>= 0)
            esi_9 -= 1
            eax_57 -= eax_56
        
        i_5 -= 1
    while (i_5 != 0)
    
    return (edi_37 - arg3) u>> 3

int32_t eax_17 = neg.d(i_15)
int32_t eax_18 = ecx_1 * 2
int32_t eax_19 = i_15 * 2

if (arg8 != 0)
    bool cond:2_1
    
    if (arg8 != 1)
        cond:2_1 = edx s>= 0
    else
        cond:2_1 = edx s>= 0
        
        if (edx s> 0)
            if (edi s>= 0)
                int32_t eax_33 = eax_17
                int32_t esi_4 = eax_1
                int32_t edx_4 = arg5
                int32_t* edi_17 = arg3
                int32_t i_6 = i_14
                
                do
                    eax_33 += eax_18
                    
                    if (eax_33 s>= 0)
                        *edi_17 = esi_4
                        edi_17[1] = edx_4
                        edi_17 = &edi_17[2]
                        edx_4 += 1
                        eax_33 -= eax_19
                    
                    esi_4 += 1
                    i_6 -= 1
                while (i_6 != 0)
                
                *edi_17 = esi_4
                edi_17[1] = edx_4
                return (&edi_17[2] - arg3) u>> 3
            
            int32_t eax_29 = eax_17
            int32_t esi_3 = eax_1
            int32_t edx_3 = arg5
            int32_t* edi_13 = arg3
            int32_t i_7 = i_14
            
            do
                eax_29 += eax_18
                
                if (eax_29 s>= 0)
                    *edi_13 = esi_3
                    edi_13[1] = edx_3
                    edi_13 = &edi_13[2]
                    edx_3 -= 1
                    eax_29 -= eax_19
                
                esi_3 += 1
                i_7 -= 1
            while (i_7 != 0)
            
            *edi_13 = esi_3
            edi_13[1] = edx_3
            return (&edi_13[2] - arg3) u>> 3
    
    if (not(cond:2_1))
        if (edi s>= 0)
            int32_t eax_41 = eax_17
            int32_t esi_6 = eax_1
            int32_t edx_6 = arg5
            int32_t i_8 = i_14
            *arg3 = esi_6
            arg3[1] = edx_6
            void* edi_27 = &arg3[2]
            
            do
                esi_6 -= 1
                eax_41 += eax_18
                
                if (eax_41 s>= 0)
                    edx_6 += 1
                    eax_41 -= eax_19
                    *edi_27 = esi_6
                    *(edi_27 + 4) = edx_6
                    edi_27 += 8
                
                i_8 -= 1
            while (i_8 != 0)
            
            return (edi_27 - arg3) u>> 3
        
        int32_t eax_37 = eax_17
        int32_t esi_5 = eax_1
        int32_t edx_5 = arg5
        int32_t i_9 = i_14
        *arg3 = esi_5
        arg3[1] = edx_5
        void* edi_23 = &arg3[2]
        
        do
            esi_5 -= 1
            eax_37 += eax_18
            
            if (eax_37 s>= 0)
                edx_5 -= 1
                eax_37 -= eax_19
                *edi_23 = esi_5
                *(edi_23 + 4) = edx_5
                edi_23 += 8
            
            i_9 -= 1
        while (i_9 != 0)
        
        return (edi_23 - arg3) u>> 3
else if (edx s< 0)
    if (edi s>= 0)
        int32_t eax_25 = eax_17
        int32_t esi_2 = eax_1
        int32_t edx_2 = arg5
        int32_t* edi_9 = arg3
        int32_t i_10 = i_14
        
        do
            eax_25 += eax_18
            
            if (eax_25 s>= 0)
                *edi_9 = esi_2
                edi_9[1] = edx_2
                edi_9 = &edi_9[2]
                edx_2 += 1
                eax_25 -= eax_19
            
            esi_2 -= 1
            i_10 -= 1
        while (i_10 != 0)
        
        *edi_9 = esi_2
        edi_9[1] = edx_2
        return (&edi_9[2] - arg3) u>> 3
    
    int32_t eax_21 = eax_17
    int32_t esi_1 = eax_1
    int32_t edx_1 = arg5
    int32_t* edi_5 = arg3
    int32_t i_11 = i_14
    
    do
        eax_21 += eax_18
        
        if (eax_21 s>= 0)
            *edi_5 = esi_1
            edi_5[1] = edx_1
            edi_5 = &edi_5[2]
            edx_1 -= 1
            eax_21 -= eax_19
        
        esi_1 -= 1
        i_11 -= 1
    while (i_11 != 0)
    
    *edi_5 = esi_1
    edi_5[1] = edx_1
    return (&edi_5[2] - arg3) u>> 3

if (edi s>= 0)
    int32_t eax_49 = eax_17
    int32_t esi_8 = eax_1
    int32_t edx_8 = arg5
    int32_t i_12 = i_14
    *arg3 = esi_8
    arg3[1] = edx_8
    void* edi_35 = &arg3[2]
    
    do
        esi_8 += 1
        eax_49 += eax_18
        
        if (eax_49 s>= 0)
            edx_8 += 1
            eax_49 -= eax_19
            *edi_35 = esi_8
            *(edi_35 + 4) = edx_8
            edi_35 += 8
        
        i_12 -= 1
    while (i_12 != 0)
    
    return (edi_35 - arg3) u>> 3

int32_t eax_45 = eax_17
int32_t esi_7 = eax_1
int32_t edx_7 = arg5
int32_t i_13 = i_14
*arg3 = esi_7
arg3[1] = edx_7
void* edi_31 = &arg3[2]

do
    esi_7 += 1
    eax_45 += eax_18
    
    if (eax_45 s>= 0)
        edx_7 -= 1
        eax_45 -= eax_19
        *edi_31 = esi_7
        *(edi_31 + 4) = edx_7
        edi_31 += 8
    
    i_13 -= 1
while (i_13 != 0)

return (edi_31 - arg3) u>> 3
