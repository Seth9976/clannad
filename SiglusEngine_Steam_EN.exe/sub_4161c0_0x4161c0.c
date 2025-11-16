// 函数: sub_4161c0
// 地址: 0x4161c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* const edi = arg2

if (data_131d2d0 == 0xffffffff)
    return 

if (arg3 == 0 && data_131d2f0 != arg3)
    if (edi s< 0xffffffff || (edi s> 0 && edi != 8))
        edi = 1
    else
        edi = 0xffffffff

int32_t ebx_1 = data_131310c
arg1 = &data_131d3ec
data_131d2f4 = edi
int32_t i_19 = 4
data_131d314 = ebx_1
int32_t i

do
    if (*(arg1 - 0xd4) == 0xffffffff)
        *arg1 = 0
    else
        *arg1 = 1
        *(arg1 + 4) = 0xff
        *(arg1 - 0xc) = 1
    
    if (*(arg1 + 0x2e0) == 0xffffffff)
        *(arg1 + 0x3b4) = 0
    else
        *(arg1 + 0x3b4) = 1
        *(arg1 + 0x3b8) = 0xff
        *(arg1 + 0x3a8) = 1
    
    if (*(arg1 + 0x694) == 0xffffffff)
        *(arg1 + 0x768) = 0
    else
        *(arg1 + 0x768) = 1
        *(arg1 + 0x76c) = 0xff
        *(arg1 + 0x75c) = 1
    
    if (*(arg1 + 0xa48) == 0xffffffff)
        *(arg1 + 0xb1c) = 0
    else
        *(arg1 + 0xb1c) = 1
        *(arg1 + 0xb20) = 0xff
        *(arg1 + 0xb10) = 1
    
    arg1 += 0xed0
    i = i_19
    i_19 -= 1
while (i != 1)
int32_t var_c
int32_t var_8

if (arg3 != 0)
    if (data_13130bc != i_19 || edi + 1 u> 9)
        data_131d2f4 = 0
        return 
    
    switch (edi)
        case 1
            void* eax = &data_131d374
            int32_t i_24 = 0x10
            int32_t i_1
            
            do
                if (*(eax - 0x5c) != 0xffffffff)
                    *(eax + 0x7c) = 0
                    int32_t ecx = arg4
                    *(eax + 0xc) = ebx_1
                    *eax = 0
                    *(eax - 0xc) = 0xff
                    *(eax - 8) = 0
                    *(eax + 0x18) = 0
                    
                    if (arg4 s< 0)
                        ecx = neg.d(ecx)
                    
                    *(eax + 0x14) = ecx
                    *(eax + 0x10) = 0
                    *(eax + 4) = 0xff
                    *(eax + 8) = 0
                    *(eax - 4) = 0
                
                eax += 0x3b4
                i_1 = i_24
                i_24 -= 1
            while (i_1 != 1)
        case 2
            int32_t* esi = &data_1320b74
            int32_t eax_2
            int32_t edx_2
            edx_2:eax_2 = sx.q(arg4)
            int32_t var_14 = 0
            int32_t i_15 = 0x10
            int32_t i_28 = 0x10
            int32_t i_2
            
            do
                if (esi[-0x34] != 0xffffffff)
                    esi[2] = 0
                    sub_416150(sub_4160b0(&var_c, edi, &esi[-0x34], &var_c, &var_8), var_c, 
                        &esi[-0x34], var_8, arg3)
                    esi[-1] = var_14
                    *esi = arg4
                    i_15 = i_28
                    esi[-2] = 0
                    var_14 += (eax_2 + (edx_2 & 3)) s>> 2
                
                esi -= 0x3b4
                i_2 = i_15
                i_15 -= 1
                i_28 = i_15
            while (i_2 != 1)
        case 3
            int32_t* esi_1 = &data_131d3e8
            int32_t eax_9
            int32_t edx_6
            edx_6:eax_9 = sx.q(arg4)
            int32_t var_18 = 0
            int32_t i_16 = 0x10
            int32_t i_31 = 0x10
            int32_t i_3
            
            do
                if (esi_1[-0x34] != 0xffffffff)
                    esi_1[2] = 0
                    sub_416150(sub_4160b0(&var_c, edi, &esi_1[-0x34], &var_c, &var_8), var_c, 
                        &esi_1[-0x34], var_8, arg3)
                    esi_1[-1] = var_18
                    *esi_1 = arg4
                    i_16 = i_31
                    esi_1[-2] = 0
                    var_18 += (eax_9 + (edx_6 & 3)) s>> 2
                
                esi_1 = &esi_1[0xed]
                i_3 = i_16
                i_16 -= 1
                i_31 = i_16
            while (i_3 != 1)
        case 4, 5
            int32_t var_18_1 = 0
            int32_t* esi_2 = &data_131d3e8
            int32_t i_17 = 0x10
            int32_t i_32 = 0x10
            int32_t i_4
            
            do
                if (esi_2[-0x34] != 0xffffffff)
                    esi_2[2] = 0
                    sub_416150(sub_4160b0(&var_c, edi, &esi_2[-0x34], &var_c, &var_8), var_c, 
                        &esi_2[-0x34], var_8, arg3)
                    esi_2[-1] = var_18_1
                    *esi_2 = arg4
                    i_17 = i_32
                    esi_2[-2] = 0
                    var_18_1 += arg4 s/ 5
                
                esi_2 = &esi_2[0xed]
                i_4 = i_17
                i_17 -= 1
                i_32 = i_17
            while (i_4 != 1)
        case 6
            int32_t edi_1 = 0
            int32_t eax_23
            int32_t edx_14
            edx_14:eax_23 = sx.q(arg4)
            int32_t* esi_3 = &data_131d360
            int32_t edx_16 = data_70300c
            int32_t eax_25 = (eax_23 + (edx_14 & 7)) s>> 3
            int32_t var_1c_3 = eax_25
            
            for (int32_t i_5 = 0; i_5 s< 0x10; )
                if (esi_3[-0x12] != 0xffffffff)
                    esi_3[0x24] = 0
                    int32_t edx_18
                    
                    if ((i_5.b & 1) != 0)
                        eax_25 = esi_3[-2]
                        
                        if (edx_16 s<= eax_25)
                            edx_18 = 0
                        else
                            edx_18 = edx_16 - eax_25
                    else
                        edx_18 = neg.d(*esi_3)
                    
                    sub_416150(eax_25, edx_18, &esi_3[-0x12], 0, arg3)
                    eax_25 = arg4
                    edx_16 = data_70300c
                    esi_3[0x21] = edi_1
                    edi_1 += var_1c_3
                    esi_3[0x22] = eax_25
                    esi_3[0x20] = 0
                
                i_5 += 1
                esi_3 = &esi_3[0xed]
        case 7
            int32_t eax_26 = data_131d34c
            void* esi_4 = &data_131d374
            int32_t edx_19 = data_131d348
            int32_t i_18 = 0x10
            int32_t var_14_1 = edx_19
            int32_t i_29 = 0x10
            int32_t i_6
            
            do
                if (*(esi_4 - 0x5c) != 0xffffffff)
                    *(esi_4 + 0x7c) = 0
                    int32_t eax_27 = arg4
                    *(esi_4 + 0xc) = ebx_1
                    *esi_4 = 0
                    *(esi_4 - 0xc) = 0xff
                    *(esi_4 - 8) = 0
                    *(esi_4 + 0x18) = 0
                    
                    if (arg4 s< 0)
                        eax_27 = neg.d(eax_27)
                    
                    *(esi_4 + 0x14) = eax_27
                    *(esi_4 + 0x10) = 0
                    *(esi_4 + 4) = 0xff
                    *(esi_4 + 8) = 0
                    *(esi_4 - 4) = 0
                    int32_t eax_29 = eax_26 - *(esi_4 - 0x28)
                    sub_416150(eax_29, edx_19 - *(esi_4 - 0x2c), esi_4 - 0x5c, eax_29, arg3)
                    *(esi_4 + 0x34) = ebx_1
                    *(esi_4 + 0x28) = 0
                    int32_t eax_30 = arg4
                    *(esi_4 + 0x1c) = 0x59
                    *(esi_4 + 0x20) = 0
                    *(esi_4 + 0x40) = 0
                    
                    if (arg4 s< 0)
                        eax_30 = neg.d(eax_30)
                    
                    *(esi_4 + 0x3c) = eax_30
                    int32_t eax_31 = arg4
                    *(esi_4 + 0x38) = 0
                    *(esi_4 + 0x2c) = 0x59
                    *(esi_4 + 0x30) = 0
                    *(esi_4 + 0x24) = 0
                    *(esi_4 + 0x5c) = ebx_1
                    *(esi_4 + 0x50) = 0
                    *(esi_4 + 0x44) = 0x59
                    *(esi_4 + 0x48) = 0
                    *(esi_4 + 0x68) = 0
                    
                    if (arg4 s< 0)
                        eax_31 = neg.d(eax_31)
                    
                    edx_19 = var_14_1
                    *(esi_4 + 0x64) = eax_31
                    i_18 = i_29
                    *(esi_4 + 0x60) = 0
                    *(esi_4 + 0x54) = 0x59
                    *(esi_4 + 0x58) = 0
                    *(esi_4 + 0x4c) = 0
                
                esi_4 += 0x3b4
                i_6 = i_18
                i_18 -= 1
                i_29 = i_18
            while (i_6 != 1)
        case 8
            void* ecx_16 = &data_131d3e4
            int32_t eax_33
            int32_t edx_21
            edx_21:eax_33 = sx.q(arg4)
            int32_t eax_35 = (eax_33 + (edx_21 & 7)) s>> 3
            int32_t edx_23 = 0
            int32_t i_25 = 4
            int32_t i_7
            
            do
                if (*(ecx_16 - 0xcc) != 0xffffffff)
                    *ecx_16 = edx_23
                    edx_23 += eax_35
                    *(ecx_16 + 8) = 0
                    *(ecx_16 - 4) = 0
                
                if (*(ecx_16 + 0x2e8) != 0xffffffff)
                    *(ecx_16 + 0x3b4) = edx_23
                    edx_23 += eax_35
                    *(ecx_16 + 0x3bc) = 0
                    *(ecx_16 + 0x3b0) = 0
                
                if (*(ecx_16 + 0x69c) != 0xffffffff)
                    *(ecx_16 + 0x768) = edx_23
                    edx_23 += eax_35
                    *(ecx_16 + 0x770) = 0
                    *(ecx_16 + 0x764) = 0
                
                if (*(ecx_16 + 0xa50) != 0xffffffff)
                    *(ecx_16 + 0xb1c) = edx_23
                    edx_23 += eax_35
                    *(ecx_16 + 0xb24) = 0
                    *(ecx_16 + 0xb18) = 0
                
                ecx_16 += 0xed0
                i_7 = i_25
                i_25 -= 1
            while (i_7 != 1)
        case 0xffffffff
            data_131d2f4 = 0
else if (data_13130bc != 0 || edi + 1 u> 9)
    data_131d2f4 = 0
    data_131d2f4 += 0x3e8
else
    switch (edi)
        case nullptr
            data_131d2f4 += 0x3e8
        case 1
            void** ecx_17 = &data_131d374
            int32_t i_27 = 0x10
            int32_t i_8
            
            do
                if (ecx_17[-0x17] != 0xffffffff)
                    arg1 = ecx_17[0x1f]
                    int32_t edx_24 = arg4
                    ecx_17[3] = ebx_1
                    *ecx_17 = arg1
                    ecx_17[-3] = 0
                    ecx_17[-2] = arg1
                    ecx_17[6] = 0
                    
                    if (arg4 s< 0)
                        edx_24 = neg.d(edx_24)
                    
                    ecx_17[5] = edx_24
                    ecx_17[4] = 0
                    ecx_17[1] = 0
                    ecx_17[2] = 0
                    ecx_17[-1].b = 0
                
                ecx_17 = &ecx_17[0xed]
                i_8 = i_27
                i_27 -= 1
            while (i_8 != 1)
            data_131d2f4 += 0x3e8
        case 2
            void* esi_6 = &data_131d318
            int32_t eax_37
            int32_t edx_25
            edx_25:eax_37 = sx.q(arg4)
            int32_t i_21 = 0x10
            int32_t var_18_2 = 0
            int32_t i_9
            
            do
                if (*esi_6 != 0xffffffff)
                    sub_416150(sub_4160b0(&var_c, edi, esi_6, &var_c, &var_8), var_c, esi_6, var_8, 
                        0)
                    *(esi_6 + 0xd0) = arg4
                    *(esi_6 + 0xcc) = var_18_2
                    *(esi_6 + 0xc8) = 0
                    var_18_2 += (eax_37 + (edx_25 & 3)) s>> 2
                
                esi_6 += 0x3b4
                i_9 = i_21
                i_21 -= 1
            while (i_9 != 1)
            data_131d2f4 += 0x3e8
        case 3
            void* esi_7 = &data_1320aa4
            int32_t eax_45
            int32_t edx_29
            edx_29:eax_45 = sx.q(arg4)
            int32_t i_22 = 0x10
            int32_t var_18_3 = 0
            int32_t i_10
            
            do
                if (*esi_7 != 0xffffffff)
                    sub_416150(sub_4160b0(&var_c, edi, esi_7, &var_c, &var_8), var_c, esi_7, var_8, 
                        0)
                    *(esi_7 + 0xd0) = arg4
                    *(esi_7 + 0xcc) = var_18_3
                    *(esi_7 + 0xc8) = 0
                    var_18_3 += (eax_45 + (edx_29 & 3)) s>> 2
                
                esi_7 -= 0x3b4
                i_10 = i_22
                i_22 -= 1
            while (i_10 != 1)
            data_131d2f4 += 0x3e8
        case 4, 5
            int32_t var_18_4 = 0
            void* esi_8 = &data_131d318
            int32_t i_23 = 0x10
            int32_t i_11
            
            do
                if (*esi_8 != 0xffffffff)
                    sub_416150(sub_4160b0(&var_c, edi, esi_8, &var_c, &var_8), var_c, esi_8, var_8, 
                        0)
                    *(esi_8 + 0xd0) = arg4
                    *(esi_8 + 0xcc) = var_18_4
                    *(esi_8 + 0xc8) = 0
                    var_18_4 += arg4 s/ 5
                
                esi_8 += 0x3b4
                i_11 = i_23
                i_23 -= 1
            while (i_11 != 1)
            data_131d2f4 += 0x3e8
        case 6
            int32_t edi_4 = 0
            int32_t eax_61
            int32_t edx_37
            edx_37:eax_61 = sx.q(arg4)
            int32_t* esi_9 = &data_131d358
            int32_t edx_39 = data_70300c
            int32_t eax_63 = (eax_61 + (edx_37 & 7)) s>> 3
            int32_t i_12 = 0
            int32_t var_1c_8 = eax_63
            
            do
                if (esi_9[-0x10] != 0xffffffff)
                    int32_t edx_41
                    
                    if ((i_12.b & 1) != 0)
                        eax_63 = *esi_9
                        
                        if (edx_39 s<= eax_63)
                            edx_41 = 0
                        else
                            edx_41 = edx_39 - eax_63
                    else
                        edx_41 = neg.d(esi_9[2])
                    
                    sub_416150(eax_63, edx_41, &esi_9[-0x10], 0, 0)
                    eax_63 = arg4
                    edx_39 = data_70300c
                    esi_9[0x23] = edi_4
                    edi_4 += var_1c_8
                    esi_9[0x24] = eax_63
                    esi_9[0x22] = 0
                
                i_12 += 1
                esi_9 = &esi_9[0xed]
            while (i_12 s< 0x10)
            
            data_131d2f4 += 0x3e8
        case 7
            int32_t edx_42 = data_131d348
            int32_t i_20 = 0x10
            void* esi_10 = &data_131d374
            int32_t var_14_2 = edx_42
            int32_t var_1c_9 = data_131d34c
            int32_t i_30 = 0x10
            int32_t i_13
            
            do
                if (*(esi_10 - 0x5c) != 0xffffffff)
                    int32_t eax_65 = *(esi_10 + 0x7c)
                    int32_t ecx_27 = arg4
                    *(esi_10 + 0xc) = ebx_1
                    *esi_10 = eax_65
                    *(esi_10 - 0xc) = 0
                    *(esi_10 - 8) = eax_65
                    *(esi_10 + 0x18) = 0
                    
                    if (arg4 s< 0)
                        ecx_27 = neg.d(ecx_27)
                    
                    *(esi_10 + 0x14) = ecx_27
                    *(esi_10 + 0x10) = 0
                    *(esi_10 + 4) = 0
                    *(esi_10 + 8) = 0
                    *(esi_10 - 4) = 0
                    int32_t eax_67 = var_1c_9 - *(esi_10 - 0x28)
                    sub_416150(eax_67, edx_42 - *(esi_10 - 0x2c), esi_10 - 0x5c, eax_67, 0)
                    *(esi_10 + 0x34) = ebx_1
                    *(esi_10 + 0x28) = 0
                    int32_t eax_68 = arg4
                    *(esi_10 + 0x1c) = 0x59
                    *(esi_10 + 0x20) = 0
                    *(esi_10 + 0x40) = 0
                    
                    if (arg4 s< 0)
                        eax_68 = neg.d(eax_68)
                    
                    *(esi_10 + 0x3c) = eax_68
                    int32_t eax_64 = arg4
                    *(esi_10 + 0x38) = 0
                    *(esi_10 + 0x2c) = 0x59
                    *(esi_10 + 0x30) = 0
                    *(esi_10 + 0x24) = 0
                    *(esi_10 + 0x5c) = ebx_1
                    *(esi_10 + 0x50) = 0
                    *(esi_10 + 0x44) = 0x59
                    *(esi_10 + 0x48) = 0
                    *(esi_10 + 0x68) = 0
                    
                    if (arg4 s< 0)
                        eax_64 = neg.d(eax_64)
                    
                    i_20 = i_30
                    edx_42 = var_14_2
                    *(esi_10 + 0x64) = eax_64
                    *(esi_10 + 0x60) = 0
                    *(esi_10 + 0x54) = 0x59
                    *(esi_10 + 0x58) = 0
                    *(esi_10 + 0x4c) = 0
                
                esi_10 += 0x3b4
                i_13 = i_20
                i_20 -= 1
                i_30 = i_20
            while (i_13 != 1)
            data_131d2f4 += 0x3e8
        case 8
            void* ecx_29 = &data_131d3e0
            int32_t eax_70
            int32_t edx_44
            edx_44:eax_70 = sx.q(arg4)
            int32_t eax_72 = (eax_70 + (edx_44 & 7)) s>> 3
            int32_t edx_46 = 0
            int32_t i_26 = 4
            int32_t i_14
            
            do
                if (*(ecx_29 - 0xc8) != 0xffffffff)
                    *(ecx_29 + 4) = edx_46
                    edx_46 += eax_72
                    *ecx_29 = 0
                
                if (*(ecx_29 + 0x2ec) != 0xffffffff)
                    *(ecx_29 + 0x3b8) = edx_46
                    edx_46 += eax_72
                    *(ecx_29 + 0x3b4) = 0
                
                if (*(ecx_29 + 0x6a0) != 0xffffffff)
                    *(ecx_29 + 0x76c) = edx_46
                    edx_46 += eax_72
                    *(ecx_29 + 0x768) = 0
                
                if (*(ecx_29 + 0xa54) != 0xffffffff)
                    *(ecx_29 + 0xb20) = edx_46
                    edx_46 += eax_72
                    *(ecx_29 + 0xb1c) = 0
                
                ecx_29 += 0xed0
                i_14 = i_26
                i_26 -= 1
            while (i_14 != 1)
            data_131d2f4 += 0x3e8
        case 0xffffffff
            data_131d2f4 = 0
            data_131d2f4 += 0x3e8
