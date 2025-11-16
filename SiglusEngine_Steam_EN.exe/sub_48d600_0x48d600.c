// 函数: sub_48d600
// 地址: 0x48d600
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_118
int32_t eax_1 = __security_cookie ^ &var_118
int32_t eax_2 = *arg3

if (eax_2 s>= 0x40)
    int32_t var_124_6 = 0x40
    char* eax_31 = sub_4c84d0(&data_7027c0, 0x61a970)
    
    if (data_702fc0 != 0)
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_31, data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
                data_72d6ac, data_719b6c, &data_7027c0, nullptr), 
            data_72d6ac, data_719b6c, &data_7027c0, nullptr)
        sub_4a1e40(3)
    
    sub_5f02dd(eax_1 ^ &var_118)
    return 0

void* esi_1 = eax_2 * 0x4ec + arg3
*(esi_1 + 8) = arg4
*(esi_1 + 0xc) = arg5
*(esi_1 + 0x10) = arg6
*(esi_1 + 4) = arg2
*(esi_1 + 0x14) = arg7
*(esi_1 + 0x18) = arg9
sub_4d1c30(arg9, arg8, esi_1 + 0x1c, 0x20)
*(esi_1 + 0x3c) = arg10
*(esi_1 + 0x40) = arg11
*(esi_1 + 0x44) = arg12
*(esi_1 + 0x48) = arg13
*(esi_1 + 0x4c) = arg14
sub_4d1c30(arg14, &data_715e9c, esi_1 + 0x50, 0xa0)
int32_t* ecx_3 = sub_4d1c30(arg14, 0x715f3c, esi_1 + 0xf0, 0x400)
HWND edx_1 = data_1af0a4c
WPARAM edi_1 = *arg3

if (edx_1 != 0 && edi_1 u<= 0x3f)
    int32_t var_124_1 = 0
    sub_4c1300(sub_55bf30(edi_1 * 0x4ec + 0x719ba8, edx_1, edi_1, ecx_3, edi_1 * 0x4ec + 0x719ba8), 
        data_1af0a4c, edi_1, 0x4f32, 0xffffffff)

*arg3 += 1
__builtin_memset(&data_715e9c, 0, 0xa0)
sub_4d1ba0(0, 0x400, 0x715f3c, 0)

if (data_702fc0 != 0)
    int32_t eax_16 = data_1af08bc
    int32_t ecx_6 = 0
    int32_t* edi_2
    
    if (eax_16 s< 1 && *arg3 s>= 8)
        eax_16 = 1
        edi_2 = 8
        data_1af08bc = 1
        ecx_6 = 1
        
        if (*arg3 s< 0x10)
            goto label_48d76f
        
        goto label_48d75b
    
    edi_2 = arg3
    
    if (eax_16 s< 2 && *arg3 s>= 0x10)
    label_48d75b:
        edi_2 = 0x10
        data_1af08bc = 2
        ecx_6 = 1
        
        if (*arg3 s< 0x20)
            goto label_48d78a
        
        goto label_48d779
    
label_48d76f:
    
    if (eax_16 s>= 3 || *arg3 s< 0x20)
    label_48d78a:
        
        if (ecx_6 != 0)
            goto label_48d792
    else
    label_48d779:
        edi_2 = 0x20
        data_1af08bc = 3
    label_48d792:
        int32_t var_124_2 = *arg3
        int32_t* var_128_2 = edi_2
        char* eax_17 = sub_4c84d0(&data_7027c0, 0x61a7a8)
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_17, data_72d6ac, data_719b6c, &data_7027c0, 0x61a7ec), 
                    data_72d6ac, data_719b6c, &data_7027c0, 0x61a7ec), 
                data_72d6ac, data_719b6c, &data_7027c0, 0x61a7ec)
        
        int32_t var_124_3 = 0x40
        char var_110[0x104]
        sub_4c84d0(&var_110, 0x61a814)
        int32_t ecx_10 = data_702fc0
        
        if (ecx_10 != 0)
            int32_t edx_6 = data_13184f8
            int32_t eax_20 = 1
            
            if (edx_6 == 0)
                if (data_13184e8:8 == edx_6 && (data_704870 != edx_6 || data_70486c != edx_6))
                    eax_20 = 0
                
                if (data_1311178 != 0 && data_13184e8:4 == 0)
                    eax_20 = 0
                
                if (data_1af174c == 0 && eax_20 != 0)
                    sub_55ef70(&var_110, data_72d6ac, data_719b6c, 0x61a840, &var_110)
                    sub_55f1e0(&var_110, data_72d6ac, data_719b6c, 0x61a840, &var_110)
                    sub_55f390(&var_110, data_72d6ac, data_719b6c, 0x61a840, &var_110)
                    ecx_10 = data_702fc0
                    edx_6 = data_13184f8
            
            if (ecx_10 != 0)
                int32_t eax_24 = 1
                
                if (edx_6 == 0)
                    if (data_13184e8:8 == edx_6 && (data_704870 != edx_6 || data_70486c != edx_6))
                        eax_24 = 0
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        eax_24 = 0
                    
                    if (data_1af174c == 0 && eax_24 != 0)
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_24, data_72d6ac, data_719b6c, 0x61a8b0, 0x61a880), 
                                data_72d6ac, data_719b6c, 0x61a8b0, 0x61a880), 
                            data_72d6ac, data_719b6c, 0x61a8b0, 0x61a880)
                        ecx_10 = data_702fc0
                        edx_6 = data_13184f8
                
                if (ecx_10 != 0)
                    int32_t eax_27 = 1
                    
                    if (edx_6 == 0)
                        if (data_13184e8:8 == edx_6
                                && (data_704870 != edx_6 || data_70486c != edx_6))
                            eax_27 = 0
                        
                        if (data_1311178 != 0 && data_13184e8:4 == 0)
                            eax_27 = 0
                        
                        if (data_1af174c == 0 && eax_27 != 0)
                            sub_55f390(
                                sub_55f1e0(
                                    sub_55ef70(eax_27, data_72d6ac, data_719b6c, 0x61a8f4, 
                                        nullptr), 
                                    data_72d6ac, data_719b6c, 0x61a8f4, nullptr), 
                                data_72d6ac, data_719b6c, 0x61a8f4, nullptr)
        
        if (data_1af08bc == 3)
            int32_t var_124_5 = *arg3
            int32_t* var_128_3 = edi_2
            sub_4c84d0(&data_7027c0, 0x61a934)
            MessageBoxA(data_7027bc, &data_7027c0, 0x617078, MB_OK)

sub_5f02dd(eax_1 ^ &var_118)
return 1
