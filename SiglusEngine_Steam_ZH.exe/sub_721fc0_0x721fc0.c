// 函数: sub_721fc0
// 地址: 0x721fc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg3
int32_t i_15 = arg5 - eax
int32_t esi = 1
int32_t i_14 = i_15

if (arg5 - eax s< 0)
    i_15 = neg.d(i_15)
    esi = 0xffffffff
    i_14 = i_15

int32_t edi = 1
int32_t edx_1 = arg6 - arg4
int32_t var_10 = edx_1

if (arg6 - arg4 s< 0)
    edx_1 = neg.d(edx_1)
    edi = 0xffffffff
    var_10 = edx_1

if (edx_1 s>= arg2)
    return 0

if (edx_1 == 0)
    if (i_15 != 0)
        if (arg7 != edx_1)
            if (esi s>= 0)
                eax += i_15
        else if (esi s< 0)
            eax -= i_15
    
    *arg1 = eax
    arg1[1] = arg4
    return 8 u>> 3

if (i_15 == 0)
    if (edi s>= 0)
        int32_t ebx_4 = arg4
        int32_t* edi_3 = arg1
        int32_t i = var_10 + 1
        
        do
            *edi_3 = eax
            edi_3[1] = ebx_4
            edi_3 = &edi_3[2]
            ebx_4 += 1
            i -= 1
        while (i != 0)
        
        return (edi_3 - arg1) u>> 3
    
    int32_t ebx_2 = arg4
    int32_t* edi_1 = arg1
    int32_t i_1 = var_10 + 1
    
    do
        *edi_1 = eax
        edi_1[1] = ebx_2
        edi_1 = &edi_1[2]
        ebx_2 -= 1
        i_1 -= 1
    while (i_1 != 0)
    
    return (edi_1 - arg1) u>> 3

if (i_15 s<= edx_1)
    int32_t eax_53 = neg.d(edx_1)
    int32_t eax_54 = i_15 * 2
    int32_t eax_55 = edx_1 * 2
    
    if (edi s>= 0)
        if (esi s>= 0)
            int32_t eax_68 = eax_53
            int32_t* esi_12 = eax
            int32_t edx_13 = arg4
            int32_t* edi_43 = arg1
            int32_t i_2 = var_10 + 1
            
            do
                *edi_43 = esi_12
                edi_43[1] = edx_13
                edi_43 = &edi_43[2]
                edx_13 += 1
                eax_68 += eax_54
                
                if (eax_68 s>= 0)
                    esi_12 += 1
                    eax_68 -= eax_55
                
                i_2 -= 1
            while (i_2 != 0)
            
            return (edi_43 - arg1) u>> 3
        
        int32_t eax_64 = eax_53
        int32_t* esi_11 = eax
        int32_t edx_12 = arg4
        int32_t* edi_41 = arg1
        int32_t i_3 = var_10 + 1
        
        do
            *edi_41 = esi_11
            edi_41[1] = edx_12
            edi_41 = &edi_41[2]
            edx_12 += 1
            eax_64 += eax_54
            
            if (eax_64 s>= 0)
                esi_11 -= 1
                eax_64 -= eax_55
            
            i_3 -= 1
        while (i_3 != 0)
        
        return (edi_41 - arg1) u>> 3
    
    if (esi s>= 0)
        int32_t eax_60 = eax_53
        int32_t* esi_10 = eax
        int32_t edx_11 = arg4
        int32_t* edi_39 = arg1
        int32_t i_4 = var_10 + 1
        
        do
            *edi_39 = esi_10
            edi_39[1] = edx_11
            edi_39 = &edi_39[2]
            edx_11 -= 1
            eax_60 += eax_54
            
            if (eax_60 s>= 0)
                esi_10 += 1
                eax_60 -= eax_55
            
            i_4 -= 1
        while (i_4 != 0)
        
        return (edi_39 - arg1) u>> 3
    
    int32_t eax_56 = eax_53
    int32_t* esi_9 = eax
    int32_t edx_10 = arg4
    int32_t* edi_37 = arg1
    int32_t i_5 = var_10 + 1
    
    do
        *edi_37 = esi_9
        edi_37[1] = edx_10
        edi_37 = &edi_37[2]
        edx_10 -= 1
        eax_56 += eax_54
        
        if (eax_56 s>= 0)
            esi_9 -= 1
            eax_56 -= eax_55
        
        i_5 -= 1
    while (i_5 != 0)
    
    return (edi_37 - arg1) u>> 3

int32_t eax_16 = neg.d(i_15)
int32_t eax_17 = edx_1 * 2
int32_t eax_18 = i_15 * 2

if (arg7 != 0)
    bool cond:2_1
    
    if (arg7 != 1)
        cond:2_1 = esi s>= 0
    else
        cond:2_1 = esi s>= 0
        
        if (esi s> 0)
            if (edi s>= 0)
                int32_t eax_32 = eax_16
                int32_t* esi_4 = eax
                int32_t edx_5 = arg4
                int32_t* edi_17 = arg1
                int32_t i_6 = i_14
                
                do
                    eax_32 += eax_17
                    
                    if (eax_32 s>= 0)
                        *edi_17 = esi_4
                        edi_17[1] = edx_5
                        edi_17 = &edi_17[2]
                        edx_5 += 1
                        eax_32 -= eax_18
                    
                    esi_4 += 1
                    i_6 -= 1
                while (i_6 != 0)
                
                *edi_17 = esi_4
                edi_17[1] = edx_5
                return (&edi_17[2] - arg1) u>> 3
            
            int32_t eax_28 = eax_16
            int32_t* esi_3 = eax
            int32_t edx_4 = arg4
            int32_t* edi_13 = arg1
            int32_t i_7 = i_14
            
            do
                eax_28 += eax_17
                
                if (eax_28 s>= 0)
                    *edi_13 = esi_3
                    edi_13[1] = edx_4
                    edi_13 = &edi_13[2]
                    edx_4 -= 1
                    eax_28 -= eax_18
                
                esi_3 += 1
                i_7 -= 1
            while (i_7 != 0)
            
            *edi_13 = esi_3
            edi_13[1] = edx_4
            return (&edi_13[2] - arg1) u>> 3
    
    if (not(cond:2_1))
        if (edi s>= 0)
            int32_t eax_40 = eax_16
            int32_t* esi_6 = eax
            int32_t edx_7 = arg4
            int32_t i_8 = i_14
            *arg1 = esi_6
            arg1[1] = edx_7
            void* edi_27 = &arg1[2]
            
            do
                esi_6 -= 1
                eax_40 += eax_17
                
                if (eax_40 s>= 0)
                    edx_7 += 1
                    eax_40 -= eax_18
                    *edi_27 = esi_6
                    *(edi_27 + 4) = edx_7
                    edi_27 += 8
                
                i_8 -= 1
            while (i_8 != 0)
            
            return (edi_27 - arg1) u>> 3
        
        int32_t eax_36 = eax_16
        int32_t* esi_5 = eax
        int32_t edx_6 = arg4
        int32_t i_9 = i_14
        *arg1 = esi_5
        arg1[1] = edx_6
        void* edi_23 = &arg1[2]
        
        do
            esi_5 -= 1
            eax_36 += eax_17
            
            if (eax_36 s>= 0)
                edx_6 -= 1
                eax_36 -= eax_18
                *edi_23 = esi_5
                *(edi_23 + 4) = edx_6
                edi_23 += 8
            
            i_9 -= 1
        while (i_9 != 0)
        
        return (edi_23 - arg1) u>> 3
else if (esi s< 0)
    if (edi s>= 0)
        int32_t eax_24 = eax_16
        int32_t* esi_2 = eax
        int32_t edx_3 = arg4
        int32_t* edi_9 = arg1
        int32_t i_10 = i_14
        
        do
            eax_24 += eax_17
            
            if (eax_24 s>= 0)
                *edi_9 = esi_2
                edi_9[1] = edx_3
                edi_9 = &edi_9[2]
                edx_3 += 1
                eax_24 -= eax_18
            
            esi_2 -= 1
            i_10 -= 1
        while (i_10 != 0)
        
        *edi_9 = esi_2
        edi_9[1] = edx_3
        return (&edi_9[2] - arg1) u>> 3
    
    int32_t eax_20 = eax_16
    int32_t* esi_1 = eax
    int32_t edx_2 = arg4
    int32_t* edi_5 = arg1
    int32_t i_11 = i_14
    
    do
        eax_20 += eax_17
        
        if (eax_20 s>= 0)
            *edi_5 = esi_1
            edi_5[1] = edx_2
            edi_5 = &edi_5[2]
            edx_2 -= 1
            eax_20 -= eax_18
        
        esi_1 -= 1
        i_11 -= 1
    while (i_11 != 0)
    
    *edi_5 = esi_1
    edi_5[1] = edx_2
    return (&edi_5[2] - arg1) u>> 3

if (edi s>= 0)
    int32_t eax_48 = eax_16
    int32_t* esi_8 = eax
    int32_t edx_9 = arg4
    int32_t i_12 = i_14
    *arg1 = esi_8
    arg1[1] = edx_9
    void* edi_35 = &arg1[2]
    
    do
        esi_8 += 1
        eax_48 += eax_17
        
        if (eax_48 s>= 0)
            edx_9 += 1
            eax_48 -= eax_18
            *edi_35 = esi_8
            *(edi_35 + 4) = edx_9
            edi_35 += 8
        
        i_12 -= 1
    while (i_12 != 0)
    
    return (edi_35 - arg1) u>> 3

int32_t eax_44 = eax_16
int32_t* esi_7 = eax
int32_t edx_8 = arg4
int32_t i_13 = i_14
*arg1 = esi_7
arg1[1] = edx_8
void* edi_31 = &arg1[2]

do
    esi_7 += 1
    eax_44 += eax_17
    
    if (eax_44 s>= 0)
        edx_8 -= 1
        eax_44 -= eax_18
        *edi_31 = esi_7
        *(edi_31 + 4) = edx_8
        edi_31 += 8
    
    i_13 -= 1
while (i_13 != 0)

return (edi_31 - arg1) u>> 3
