// 函数: sub_64c940
// 地址: 0x64c940
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = 1
int32_t edi_1 = arg7 - arg5
int32_t eax_1 = arg4
int32_t i_15 = arg6 - eax_1
int32_t edx = 1
int32_t i_14 = i_15
arg7 = edi_1

if (i_15 s< 0)
    i_15 = neg.d(i_15)
    ecx = 0xffffffff
    i_14 = i_15

if (edi_1 s< 0)
    edi_1 = neg.d(edi_1)
    edx = 0xffffffff
    arg7 = edi_1

if (edi_1 s>= arg2)
    return 0

if (edi_1 == 0)
    int32_t* ecx_1
    
    if (i_15 == 0)
        ecx_1 = arg3
    else if (arg8 != 0)
        ecx_1 = arg3
        
        if (ecx s>= 0)
            eax_1 += i_15
    else
        ecx_1 = arg3
        
        if (ecx s< 0)
            eax_1 -= i_15
    
    *ecx_1 = eax_1
    arg3[1] = arg5
    return (&arg3[2] - ecx_1) u>> 3

if (i_15 == 0)
    if (edx s>= 0)
        int32_t ebx_2 = arg5
        int32_t* edi_4 = arg3
        int32_t i = arg7 + 1
        
        do
            *edi_4 = eax_1
            edi_4[1] = ebx_2
            edi_4 = &edi_4[2]
            ebx_2 += 1
            i -= 1
        while (i != 0)
        
        return (edi_4 - arg3) u>> 3
    
    int32_t ebx_1 = arg5
    int32_t* edi_2 = arg3
    int32_t i_1 = arg7 + 1
    
    do
        *edi_2 = eax_1
        edi_2[1] = ebx_1
        edi_2 = &edi_2[2]
        ebx_1 -= 1
        i_1 -= 1
    while (i_1 != 0)
    
    return (edi_2 - arg3) u>> 3

if (i_15 s<= edi_1)
    int32_t eax_54 = neg.d(edi_1)
    int32_t eax_55 = i_15 * 2
    int32_t eax_56 = edi_1 * 2
    
    if (edx s>= 0)
        if (ecx s>= 0)
            int32_t eax_69 = eax_54
            int32_t esi_12 = eax_1
            int32_t edx_12 = arg5
            int32_t* edi_44 = arg3
            int32_t i_2 = arg7 + 1
            
            do
                *edi_44 = esi_12
                edi_44[1] = edx_12
                edi_44 = &edi_44[2]
                edx_12 += 1
                eax_69 += eax_55
                
                if (eax_69 s>= 0)
                    esi_12 += 1
                    eax_69 -= eax_56
                
                i_2 -= 1
            while (i_2 != 0)
            
            return (edi_44 - arg3) u>> 3
        
        int32_t eax_65 = eax_54
        int32_t esi_11 = eax_1
        int32_t edx_11 = arg5
        int32_t* edi_42 = arg3
        int32_t i_3 = arg7 + 1
        
        do
            *edi_42 = esi_11
            edi_42[1] = edx_11
            edi_42 = &edi_42[2]
            edx_11 += 1
            eax_65 += eax_55
            
            if (eax_65 s>= 0)
                esi_11 -= 1
                eax_65 -= eax_56
            
            i_3 -= 1
        while (i_3 != 0)
        
        return (edi_42 - arg3) u>> 3
    
    if (ecx s>= 0)
        int32_t eax_61 = eax_54
        int32_t esi_10 = eax_1
        int32_t edx_10 = arg5
        int32_t* edi_40 = arg3
        int32_t i_4 = arg7 + 1
        
        do
            *edi_40 = esi_10
            edi_40[1] = edx_10
            edi_40 = &edi_40[2]
            edx_10 -= 1
            eax_61 += eax_55
            
            if (eax_61 s>= 0)
                esi_10 += 1
                eax_61 -= eax_56
            
            i_4 -= 1
        while (i_4 != 0)
        
        return (edi_40 - arg3) u>> 3
    
    int32_t eax_57 = eax_54
    int32_t esi_9 = eax_1
    int32_t edx_9 = arg5
    int32_t* edi_38 = arg3
    int32_t i_5 = arg7 + 1
    
    do
        *edi_38 = esi_9
        edi_38[1] = edx_9
        edi_38 = &edi_38[2]
        edx_9 -= 1
        eax_57 += eax_55
        
        if (eax_57 s>= 0)
            esi_9 -= 1
            eax_57 -= eax_56
        
        i_5 -= 1
    while (i_5 != 0)
    
    return (edi_38 - arg3) u>> 3

int32_t eax_17 = neg.d(i_15)
int32_t eax_18 = edi_1 * 2
int32_t eax_19 = i_15 * 2

if (arg8 != 0)
    bool cond:2_1
    
    if (arg8 != 1)
        cond:2_1 = ecx s>= 0
    else
        cond:2_1 = ecx s>= 0
        
        if (ecx s> 0)
            if (edx s>= 0)
                int32_t eax_33 = eax_17
                int32_t esi_4 = eax_1
                int32_t edx_4 = arg5
                int32_t* edi_18 = arg3
                int32_t i_6 = i_14
                
                do
                    eax_33 += eax_18
                    
                    if (eax_33 s>= 0)
                        *edi_18 = esi_4
                        edi_18[1] = edx_4
                        edi_18 = &edi_18[2]
                        edx_4 += 1
                        eax_33 -= eax_19
                    
                    esi_4 += 1
                    i_6 -= 1
                while (i_6 != 0)
                
                *edi_18 = esi_4
                edi_18[1] = edx_4
                return (&edi_18[2] - arg3) u>> 3
            
            int32_t eax_29 = eax_17
            int32_t esi_3 = eax_1
            int32_t edx_3 = arg5
            int32_t* edi_14 = arg3
            int32_t i_7 = i_14
            
            do
                eax_29 += eax_18
                
                if (eax_29 s>= 0)
                    *edi_14 = esi_3
                    edi_14[1] = edx_3
                    edi_14 = &edi_14[2]
                    edx_3 -= 1
                    eax_29 -= eax_19
                
                esi_3 += 1
                i_7 -= 1
            while (i_7 != 0)
            
            *edi_14 = esi_3
            edi_14[1] = edx_3
            return (&edi_14[2] - arg3) u>> 3
    
    if (not(cond:2_1))
        if (edx s>= 0)
            int32_t eax_41 = eax_17
            int32_t esi_6 = eax_1
            int32_t edx_6 = arg5
            int32_t i_8 = i_14
            *arg3 = esi_6
            arg3[1] = edx_6
            void* edi_28 = &arg3[2]
            
            do
                esi_6 -= 1
                eax_41 += eax_18
                
                if (eax_41 s>= 0)
                    edx_6 += 1
                    eax_41 -= eax_19
                    *edi_28 = esi_6
                    *(edi_28 + 4) = edx_6
                    edi_28 += 8
                
                i_8 -= 1
            while (i_8 != 0)
            
            return (edi_28 - arg3) u>> 3
        
        int32_t eax_37 = eax_17
        int32_t esi_5 = eax_1
        int32_t edx_5 = arg5
        int32_t i_9 = i_14
        *arg3 = esi_5
        arg3[1] = edx_5
        void* edi_24 = &arg3[2]
        
        do
            esi_5 -= 1
            eax_37 += eax_18
            
            if (eax_37 s>= 0)
                edx_5 -= 1
                eax_37 -= eax_19
                *edi_24 = esi_5
                *(edi_24 + 4) = edx_5
                edi_24 += 8
            
            i_9 -= 1
        while (i_9 != 0)
        
        return (edi_24 - arg3) u>> 3
else if (ecx s< 0)
    if (edx s>= 0)
        int32_t eax_25 = eax_17
        int32_t esi_2 = eax_1
        int32_t edx_2 = arg5
        int32_t* edi_10 = arg3
        int32_t i_10 = i_14
        
        do
            eax_25 += eax_18
            
            if (eax_25 s>= 0)
                *edi_10 = esi_2
                edi_10[1] = edx_2
                edi_10 = &edi_10[2]
                edx_2 += 1
                eax_25 -= eax_19
            
            esi_2 -= 1
            i_10 -= 1
        while (i_10 != 0)
        
        *edi_10 = esi_2
        edi_10[1] = edx_2
        return (&edi_10[2] - arg3) u>> 3
    
    int32_t eax_21 = eax_17
    int32_t esi_1 = eax_1
    int32_t edx_1 = arg5
    int32_t* edi_6 = arg3
    int32_t i_11 = i_14
    
    do
        eax_21 += eax_18
        
        if (eax_21 s>= 0)
            *edi_6 = esi_1
            edi_6[1] = edx_1
            edi_6 = &edi_6[2]
            edx_1 -= 1
            eax_21 -= eax_19
        
        esi_1 -= 1
        i_11 -= 1
    while (i_11 != 0)
    
    *edi_6 = esi_1
    edi_6[1] = edx_1
    return (&edi_6[2] - arg3) u>> 3

if (edx s>= 0)
    int32_t eax_49 = eax_17
    int32_t esi_8 = eax_1
    int32_t edx_8 = arg5
    int32_t i_12 = i_14
    *arg3 = esi_8
    arg3[1] = edx_8
    void* edi_36 = &arg3[2]
    
    do
        esi_8 += 1
        eax_49 += eax_18
        
        if (eax_49 s>= 0)
            edx_8 += 1
            eax_49 -= eax_19
            *edi_36 = esi_8
            *(edi_36 + 4) = edx_8
            edi_36 += 8
        
        i_12 -= 1
    while (i_12 != 0)
    
    return (edi_36 - arg3) u>> 3

int32_t eax_45 = eax_17
int32_t esi_7 = eax_1
int32_t edx_7 = arg5
int32_t i_13 = i_14
*arg3 = esi_7
arg3[1] = edx_7
void* edi_32 = &arg3[2]

do
    esi_7 += 1
    eax_45 += eax_18
    
    if (eax_45 s>= 0)
        edx_7 -= 1
        eax_45 -= eax_19
        *edi_32 = esi_7
        *(edi_32 + 4) = edx_7
        edi_32 += 8
    
    i_13 -= 1
while (i_13 != 0)

return (edi_32 - arg3) u>> 3
