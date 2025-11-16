// 函数: sub_4e9930
// 地址: 0x4e9930
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*arg2 != 0 || arg2[2] == 0)
    data_1b1bcd0 = 0x2710
    return 

uint32_t eax_1 = timeGetTime()
int32_t* ecx = &data_1b8a728
int32_t var_64_1 = 1
int32_t i_2 = 0x50
int32_t var_60 = 0
int32_t i

do
    ecx[-1] = 0
    ecx = &ecx[5]
    ecx[-5] = 0
    i = i_2
    i_2 -= 1
while (i != 1)
int32_t eax_2 = *arg1
void* esi_1

if (eax_2 s<= 0 || eax_2 s>= 0x2710)
    esi_1 = &arg2[8]
    *esi_1 = 0xffffffff
else
    esi_1 = &arg2[8]
    
    if (arg2[1] == i_2)
        *esi_1 = 0xffffffff
    else
        *esi_1 = arg1[2] + arg2[6]

uint32_t eax_5 = timeGetTime()
int32_t* ecx_1 = arg1
uint32_t var_58_1 = eax_5
int32_t var_68_1 = 0
data_1b8b06c = 0
data_703004 = 0
void* i_1 = ecx_1[0x4ecf]
data_1af1738 = 0
data_1b8be80 = 0
data_1af09e8 = 0
int32_t* ebx_3

if (i_1 s>= 0)
    while (i_1 s< 0x40)
        void* edx = i_1 * 0x3920
        void* var_6c_1 = edx
        void* eax_6 = edx + &data_f89afc
        
        if (*(edx + 0xf8d314) != 0)
            void* ecx_2
            
            if (i_1 s>= 0)
                ecx_2 = i_1 * 0x2d0
                *(edx + 0xf8d324) = 2
                *(ecx_2 + 0x8fcb14) = 0
                sub_4d6c40(eax_6 + 0x2c7c, eax_6 + 0x2c80)
                *(eax_6 + 0x2c84) = 0
                sub_57e420(eax_6)
                edx = var_6c_1
                data_1af0b10 = 0
            
            if (i_1 s>= 0 && *(edx + 0xf8d2f0) + *(ecx_2 + 0x8fcb10) + *(ecx_2 + &data_8fcadc)
                    s<= *(edx + &data_f89b10))
                *(ecx_2 + 0x8fcb0c) = *(ecx_2 + 0x8fcb14)
                *(ecx_2 + 0x8fcb10) += *(edx + 0xf8d2f0)
                sub_57ea10(i_1)
                
                if (data_702fc0 != 0)
                    sub_41bcb0()
                    sub_460e20(var_6c_1, 0, var_6c_1 + &data_f8d35c, 0, 3, 0, 0, 0, 0, 0, 
                        0xffffffff, 0)
            else if (i_1 u<= 0x3f)
                *(edx + 0xf8d310) = 1
            
            ecx_1 = arg1
            *(eax_6 + 0x3818) = 0
        
        char* edx_5 = *esi_1
        
        if (edx_5 == 0xffffffff)
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_6, data_72d6ac, data_719b6c, 0x61e864, nullptr), 
                        data_72d6ac, data_719b6c, 0x61e864, nullptr), 
                    data_72d6ac, data_719b6c, 0x61e864, nullptr)
                sub_4a1e40(3)
            
            *arg2 = 1
            sub_4e9370()
            goto label_4ea0f7
        
        eax_6.b = *edx_5
        
        if (eax_6.b == 0)
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_6, data_72d6ac, data_719b6c, 0x61e878, nullptr), 
                        data_72d6ac, data_719b6c, 0x61e878, nullptr), 
                    data_72d6ac, data_719b6c, 0x61e878, nullptr)
                sub_4a1e40(3)
            
            *arg2 = 1
            sub_4e9370()
            goto label_4ea0f7
        
        if (data_1c0529e == 0)
            int32_t ebx_1 = data_1c054d4
            int32_t edx_2 = ebx_1
            int32_t ebx_2 = data_1c054d0
            
            if (edx_2 != 0)
                data_1c0529e = 1
            else
                void var_50
                char* ecx_11
                
                switch (ebx_2)
                    case 0
                        int32_t eax_14 =
                            sub_4c54e0(eax_6, "___syseve_warning.g00", data_703190:0xc, 5, 0xd)
                        
                        if (eax_14 == 0)
                            edx_2 = ebx_1
                        else
                            if (sub_4c54e0(eax_14, "___syseve_black.g00", data_703190:0xc, 5, 0xd)
                                    != 0)
                                eax_6 = data_7036a8
                                data_20c0550 = eax_6
                                data_7036a8 = 0
                                sub_4d1c30(eax_6, &data_12a705c, &var_50, 0x44)
                                ecx_11 = "___syseve_warning.g00"
                                goto label_4e9bd9
                            
                            edx_2 = ebx_1
                    case 1
                        sub_445260()
                        int32_t* var_84_1 = ecx_1
                        sub_530bd0(0x1388, 0xa)
                        data_1c054d0 = 2
                    case 2
                        sub_4d1c30(eax_6, &data_12a705c, &var_50, 0x44)
                        ecx_11 = "___syseve_black.g00"
                    label_4e9bd9:
                        int32_t var_34_1 = 0x3e8
                        sub_4fcca0(eax_6, &var_50, ecx_11, 0, 0, 0, 0, 0, 1)
                        data_1c054d0 += 1
                        edx_2 = ebx_1
                    case 3
                        data_7036a8 = data_20c0550
                        data_1c054d0 = 4
                
                if (edx_2 == data_1c054d4 && ebx_2 == data_1c054d0)
                    data_1c0529e = 1
            
            goto label_4e9fa5
        
        if (*(var_6c_1 + 0xf8c778) != 0)
            edx_5 = *esi_1
        
        if (*(var_6c_1 + 0xf8c778) == 0 || *(var_6c_1 + 0xf8c780) == 0 || data_1af174c != 0)
            if (arg2[0xa] != 0 && data_1af174c == 0)
                sub_4e9710(arg1, arg2)
                goto label_4e9fa5
            
            if (data_1b14e60 != 0 && data_1af174c == 0)
                int32_t* var_84_2 = arg1
                
                if (sub_4ed940(arg1, arg2) == 0)
                    sub_461c00(&data_1b14e60)
                
                goto label_4e9fa5
            
            int32_t eax_21
            
            if (eax_6.b u>= 0x80)
                if (eax_6.b u< 0xa0)
                    if (eax_6.b u< 0xfe)
                        goto label_4e9d1e
                else if (eax_6.b u> 0xdf && eax_6.b u< 0xfe)
                label_4e9d1e:
                    sub_4eeae0(eax_6, arg2, arg1, i_1, 3, nullptr, nullptr)
                    
                    if (arg2[9] != 0 && data_1af174c == 0)
                        int32_t eax_18 = sub_57ce10()
                        
                        if (eax_18 == 0)
                            ebx_3 = arg1
                            sub_4eca80(eax_18, arg2, ebx_3, nullptr, 0)
                            goto label_4e9fa9
                        
                        sub_57e2b0(i_1, 0x3f)
                        goto label_4e9fa5
                    
                    if (sub_4edeb0() != 0)
                        goto label_4e9fa5
                    
                    if (sub_4ebc90(arg1, arg2) != 0)
                        goto label_4e9fa5
                    
                    eax_21 = sub_57ce10()
                    
                    if (eax_21 != 0)
                        sub_57e2b0(i_1, 0x3f)
                        goto label_4e9fa5
                    
                    int32_t var_84_3 = 0
                    sub_4eca80(eax_21, arg2, arg1, nullptr, 0)
                    goto label_4e9fa5
            
            if (eax_6.b != 0xa)
                if (eax_6.b == 0x22)
                    sub_4eeae0(eax_6, arg2, arg1, i_1, 3, nullptr, nullptr)
                    
                    if (sub_57ce10() == 0)
                        *esi_1 += 1
                        arg2[9] ^= 1
                    else
                        sub_57e2b0(i_1, 0x3f)
                    
                    goto label_4e9fa5
                
                if (arg2[9] != 0 && data_1af174c == 0)
                    int32_t* var_6c_2
                    
                    if (eax_6.b != 0x5c)
                    label_4e9f61:
                        var_6c_2 = 1
                    else
                        eax_6.b = edx_5[1]
                        
                        if (eax_6.b != 0x5c && eax_6.b != 0x22)
                            goto label_4e9f61
                        
                        var_6c_2 = 2
                    
                    sub_4eeae0(eax_6, arg2, arg1, i_1, 3, nullptr, nullptr)
                    eax_21 = sub_57ce10()
                    
                    if (eax_21 == 0)
                        int32_t var_84_5 = 0
                        sub_4eca80(eax_21, arg2, arg1, var_6c_2, 0)
                        goto label_4e9fa5
                    
                    sub_57e2b0(i_1, 0x3f)
                    goto label_4e9fa5
                
                if (eax_6.b == 0x40)
                    uint32_t edx_14 = zx.d(*(edx_5 + 1))
                    *esi_1 += 3
                    sub_4ee260(eax_6, edx_14, *arg1, 0)
                    goto label_4e9fa5
                
                if (eax_6.b == 0x21)
                    uint32_t edx_15 = zx.d(*(edx_5 + 1))
                    *esi_1 += 3
                    sub_4ee260(eax_6, edx_15, *arg1, 1)
                    goto label_4e9fa5
                
                if (eax_6.b == 0x23)
                    sub_4ead60(arg1, arg2, esi_1, arg2)
                    bool cond:3_1 = data_1b8b06c != 0
                    data_1af1728 = 0
                    
                    if (cond:3_1)
                        int32_t var_84_6 = data_1bfdd30
                        int32_t var_88_2 = data_1b8b070
                        int32_t var_8c_1 = data_1b8ad74
                        char* eax_41 = sub_4c84d0(&data_7027c0, "Code = %03d : %03d : %05d")
                        
                        if (data_702fc0 != 0)
                            sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(eax_41, data_72d6ac, data_719b6c, 0x61e8e4, 
                                        &data_7027c0), 
                                    data_72d6ac, data_719b6c, 0x61e8e4, &data_7027c0), 
                                data_72d6ac, data_719b6c, 0x61e8e4, &data_7027c0)
                            sub_4a1e40(3)
                        
                        *arg2 = 1
                        sub_4e9370()
                        data_1b1bcd0 = 0x2713
                        goto label_4ea0f7
                    
                    sub_4eef40(&data_1b8a720, 0x50)
                    goto label_4e9fa5
                
                if (eax_6.b != 0x24)
                    if (eax_6.b != 0x2c)
                        goto label_4e9f61
                    
                    ebx_3 = arg1
                    *esi_1 = &edx_5[1]
                    goto label_4e9fa9
                
                char* eax_26 = sub_4e8e10(*esi_1, esi_1)
                
                if (eax_26 != 0)
                    goto label_4e9fa5
                
                if (data_702fc0 != eax_26)
                    sub_55f390(
                        sub_55f1e0(sub_55ef70(eax_26, data_72d6ac, data_719b6c, 0x61e900, eax_26), 
                            data_72d6ac, data_719b6c, 0x61e900, nullptr), 
                        data_72d6ac, data_719b6c, 0x61e900, nullptr)
                    sub_4a1e40(3)
                
                *arg2 = 1
                sub_4e9370()
                data_1b1bcd0 = 0x2712
                goto label_4ea0f7
            
            do
                *esi_1 += 1
                arg1[0x4ed0] = zx.d(**esi_1)
                *esi_1 += 2
            while (**esi_1 == 0xa)
            
            if (data_702fc0 != 0)
                sub_4e98f0(&var_60)
                goto label_4e9fa5
            
            ebx_3 = arg1
        else
            sub_4e9460(arg1, arg2)
        label_4e9fa5:
            ebx_3 = arg1
        label_4e9fa9:
            
            if (data_702fc0 != 0)
                sub_4e97a0()
        
        if (*arg2 != 0)
            sub_4e9370()
            data_1b1bcd0 = 0x2714
            goto label_4ea10a
        
        if (data_1af174c == 0 && data_703004 != 0 && data_7035d4 == 0 && data_71929c == 4)
            data_71929c = 5
            data_7192a0 = 0
            data_7192e0 = 0
        
        if (data_1af4250 != 0)
            data_1b1bcd0 = 0x2715
            goto label_4ea10a
        
        if (data_71929c != 4)
            data_1b1bcd0 = 0x2716
            goto label_4ea10a
        
        if (data_1b8be80 != 0)
            data_1b1bcd0 = 0x2717
            goto label_4ea10a
        
        if (data_1af174c == 0)
            if (sub_57ce10() != 0)
                data_1b1bcd0 = 0x2719
                goto label_4ea10a
            
            int32_t eax_32 = var_68_1 + 1
            var_68_1 = eax_32
            
            if (eax_32 s>= 0x2710 && timeGetTime() - var_58_1 s>= 0x3e8 && data_71929c == 4)
                data_71929c = 1
                data_7192a0 = 0
                data_7192e0 = 0
                data_1b1bcd0 = 0x271a
                var_64_1 = 0
                goto label_4ea10a
        
        eax_5 = sub_485a70()
        ecx_1 = arg1
        i_1 = ecx_1[0x4ecf]
        
        if (i_1 s< 0)
            break

if (data_702fc0 != 0)
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax_5, data_72d6ac, data_719b6c, 0x61e830, nullptr), data_72d6ac, 
            data_719b6c, 0x61e830, nullptr), 
        data_72d6ac, data_719b6c, 0x61e830, nullptr)
    sub_4a1e40(3)

*arg2 = 1
sub_4e9370()
data_1b1bcd0 = 0x2711
label_4ea0f7:
ebx_3 = arg1
label_4ea10a:
ebx_3[2] = *esi_1 - arg2[6]
sub_4eef40(&data_1b8a720, 0x50)

if (timeGetTime() - eax_1 u<= 0x64)
    int32_t eax_48 = data_1af1730
    
    if (eax_48 s<= 0)
        data_1af1730 = 0
        return 
    
    data_1af1730 = eax_48 - 1
    return 

if (var_64_1 == 0)
    return 

uint32_t eax = data_1af1730

if (eax s< 3 && (data_702fc0 == 0 || data_1af414c == 0) && var_60 == 0)
    data_1af0a08 = 0
    data_1af1730 = eax + 1
