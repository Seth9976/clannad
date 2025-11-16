// 函数: sub_4d6820
// 地址: 0x4d6820
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = data_20c04fc
int32_t ebx = data_20c0500
int32_t esi = 0

if (ebx s> 0)
    do
        if (*eax == *arg1)
            if (data_1c04c64 == 0)
                int32_t eax_1 = eax[3]
                
                if (eax_1 == 0)
                    if (arg2 == 0)
                        sub_4cfd70(0x1c04d68, "NoName\n\n")
                    else
                        int32_t var_10_3 = arg2
                        sub_4c84d0(0x1c04d68, "NoName\n\n")
                else if (arg2 == 0)
                    int32_t var_10_2 = eax_1
                    sub_4c84d0(0x1c04d68, "%s\n\n")
                else
                    int32_t var_10_1 = arg2
                    int32_t var_14_1 = eax_1
                    sub_4c84d0(0x1c04d68, "%s\n\n")
                
                char const* const ecx_1 = "MEM_ERR"
                void* edx = &data_1c04c68
                
                do
                    char const eax_2 = *ecx_1
                    
                    if (eax_2 u< 0x80)
                    label_4d68e8:
                        *edx = eax_2
                        edx += 1
                        ecx_1 = &ecx_1[1]
                    else
                        if (eax_2 u< 0xa0)
                            if (eax_2 u>= 0xfe)
                                goto label_4d68e8
                        else if (eax_2 u<= 0xdf || eax_2 u>= 0xfe)
                            goto label_4d68e8
                        
                        *edx = eax_2
                        *(edx + 1) = ecx_1[1]
                        edx += 2
                        ecx_1 = &ecx_1[2]
                while (*ecx_1 != 0)
                
                *edx = 0
                data_1c04c64 = 1
            
            break
        
        esi += 1
        eax = &eax[5]
    while (esi s< ebx)

if (esi == ebx && data_1c04c64 == 0)
    if (arg2 == 0)
        sub_4cfd70(0x1c04d68, "NoName\n\n")
    else
        int32_t var_10_4 = arg2
        sub_4c84d0(0x1c04d68, "%s\n\n")
    
    sub_4cfd70(&data_1c04c68, "MEM_ERR")
    data_1c04c64 = 1

return ReleaseSemaphore(data_7027a8, 1, nullptr)
