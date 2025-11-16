// 函数: sub_4705b0
// 地址: 0x4705b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3

if (data_702fc0 != 0)
    int32_t eax = data_1313248
    
    if (eax == 1)
        if (arg2 == 0)
            goto label_4705eb
    else if (eax == 2)
        if (arg2 != 0)
            goto label_4705eb
    else if (eax != 3)
        goto label_4705eb
    
    return 

label_4705eb:
int32_t i_1 = (&data_1b14e54)[arg3]

if (i_1 s<= 0)
    return 

if (arg3 == 0)
    int32_t esi_1 = 0
    
    if (arg6 != arg3.b)
        if (i_1 s> 0)
            do
                int32_t edx_4 = *((esi_1 << 2) + &data_1b15490)
                void* eax_4 = edx_4 * 9
                void* ecx_1 = (eax_4 << 2) + &data_12b9268
                
                if (*((eax_4 << 2) + &data_12b9288) != 0 || arg7 != 0)
                    eax_4 = *(ecx_1 + 4)
                    
                    if (eax_4 == arg2 && eax_4 s>= arg4 && *(edx_4 * 0xca0 + &data_72dd0c) == 0
                            && *((edx_4 << 2) + &data_8c16b0) == 0)
                        int32_t edx_5 = edx_4 * 2
                        void* var_18_2 = edx_5 * 0x7a0 + &data_98bf04
                        sub_4704d0(edx_5 * 0x7a0 + &data_98bf04, edx_5 * 0x650 + &data_72d6b0, 
                            ecx_1)
                
                esi_1 += 1
            while (esi_1 s< i_1)
    else if (i_1 s> 0)
        do
            int32_t edx = *((esi_1 << 2) + &data_1b15490)
            void* eax_1 = edx * 9
            void* ecx = (eax_1 << 2) + &data_12b9268
            
            if (*((eax_1 << 2) + &data_12b9288) != 0 || arg7 != 0)
                eax_1 = *(ecx + 4)
                
                if (eax_1 == arg2 && eax_1 s>= arg4 && (eax_1 s<= arg5
                        || *(edx * 0xca0 + &data_72dd0c) != 0
                        || *((edx << 2) + &data_8c16b0) != 0))
                    int32_t edx_1 = edx * 2
                    void* var_18_1 = edx_1 * 0x7a0 + &data_98bf04
                    sub_4704d0(edx_1 * 0x7a0 + &data_98bf04, edx_1 * 0x650 + &data_72d6b0, ecx)
            
            esi_1 += 1
        while (esi_1 s< i_1)
else if (i_1 s> 0)
    void* esi_4 = (arg3 << 0xb) + &data_1b15490
    int32_t i
    
    do
        int32_t edx_8 = *esi_4
        arg1 = edx_8 * 9
        void* ecx_2 = (arg1 << 2) + &data_12b9268
        
        if (*((arg1 << 2) + &data_12b9288) != 0 || arg7 != 0)
            arg1 = *(ecx_2 + 4)
            
            if (arg1 == arg2 && arg1 s>= arg4)
                int32_t edx_9 = arg3 + (edx_8 << 1)
                void* var_18_3 = edx_9 * 0x7a0 + &data_98bf04
                sub_4704d0(edx_9 * 0x7a0 + &data_98bf04, edx_9 * 0x650 + &data_72d6b0, ecx_2)
        
        esi_4 += 4
        i = i_1
        i_1 -= 1
    while (i != 1)
