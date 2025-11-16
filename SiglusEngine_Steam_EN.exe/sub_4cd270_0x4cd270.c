// 函数: sub_4cd270
// 地址: 0x4cd270
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_8 = arg3
int32_t* edx = arg2[3]

if (edx != 0)
    if (arg6 == 1)
        *arg2 = arg6
        sub_4d1c30(arg6, edx, &arg2[0xb], 0x2c)
        int32_t eax_1 = arg2[3]
        
        if (arg2[0xd] != 0xffffffff)
            arg2[4] = eax_1
            arg2[5] = arg2[0x10]
            arg2[0xa] = arg4
            return 1
        
        *arg2 = 0
        arg2[4] = eax_1 + 0x2c
        arg2[5] = arg2[0x10]
        arg2[0xa] = arg4 + 0x2c
        return 1
    
    if (arg6 == 2)
        bool cond:0_1 = arg2[1] != 0
        *arg2 = arg6
        arg2[0xa] = arg4
        
        if (cond:0_1)
            *arg2 = 0
            sub_4d6c40(&arg2[2], &arg2[3])
            int32_t* var_1c_2 = arg2
            void* var_24
            
            if (sub_4cdb90(arg7, var_24) != 0)
                arg2[4] = arg2[3]
                return 1
        else
            int32_t* eax_10 = _fopen(arg3, "rb")
            arg2[0x18] = eax_10
            
            if (eax_10 != 0)
                WaitForSingleObject(data_1c04208, 0xffffffff)
                int32_t* ecx_1 = arg2[0x18]
                arg2[0xcf] = sub_4cc110
                arg2[0xd0] = sub_4cc130
                arg2[0xd1] = sub_4cc1b0
                arg2[0xd2] = sub_4cc1d0
                arg2[0xd6] = 0
                arg2[0xd3] = ecx_1
                arg2[0xd4] = arg4
                
                if (arg7 s> 0xffffffff)
                    arg2[0xd5] = arg7 + arg4
                else
                    arg2[0xd5] = 0xffffffff
                
                if (sub_5f0cc8(ecx_1, arg2[0xa], FILE_BEGIN) == 0)
                    int32_t var_28
                    var_28.o = *(arg2 + 0x33c)
                    
                    if (sub_401100(&arg2[0xd3], &arg2[0x1a], 0, 0, var_28) s>= 0)
                        void* eax_15 = sub_402cb0(&arg2[0x1a], 0xffffffff)
                        int32_t eax_16 = sub_401ce0(&arg2[0x1a], 0xffffffff)
                        arg2[5] = *(eax_15 + 4) * eax_16 * 2
                        int32_t ecx_4
                        ecx_4.w = *(eax_15 + 4)
                        *(arg2 + 0x2e) = 0x10
                        arg2[0xb].w = ecx_4.w
                        arg2[0xc] = *(eax_15 + 8)
                        int32_t eax_19 = *(eax_15 + 4) * eax_16
                        HANDLE hSemaphore = data_1c04208
                        arg2[0xce] = 1
                        arg2[0x12] = eax_19
                        ReleaseSemaphore(hSemaphore, 1, nullptr)
                        return 1
                
                _fclose(arg2[0x18])
                arg2[0x18] = 0
                ReleaseSemaphore(data_1c04208, 1, nullptr)
    else if (arg6 == 0)
        *arg2 = arg6
        arg2[4] = arg6
        int16_t* edx_4 = nullptr
        arg2[5] = arg6
        
        if (*edx == 0x46464952 && edx[2] == 0x45564157)
            void* eax_27
            
            if (arg5 == 0)
                eax_27 = edx[1] - 4
            else
                eax_27 = arg5 - 0xc
            
            void* eax_28 = eax_27 + &edx[3]
            
            if (&edx[3] u< eax_28)
                int32_t ebx_4 = arg2[3]
                void* ecx_9 = &edx[3]
                
                do
                    int32_t eax_29 = *ecx_9
                    int32_t edi_4 = *(ecx_9 + 4)
                    
                    if (eax_29 != 0x20746d66)
                        if (eax_29 == 0x61746164 && arg2[4] == 0 && arg2[5] == 0)
                            arg2[4] = ecx_9 + 8
                            arg2[5] = edi_4 & 0xfffffffc
                            arg2[0xa] = ecx_9 + 8 - ebx_4 + arg4
                        
                        goto label_4cd534
                    
                    if (edx_4 != 0)
                    label_4cd538:
                        
                        if (*edx_4 != 1)
                            break
                    else if (edi_4 u>= 0xe)
                        edx_4 = ecx_9 + 8
                    label_4cd534:
                        
                        if (edx_4 != 0)
                            goto label_4cd538
                    
                    if (arg2[4] != 0 && arg2[5] != 0 && edx_4 != 0)
                        arg2[0xb].w = edx_4[1]
                        arg2[0xc] = *(edx_4 + 4)
                        *(arg2 + 0x2e) = edx_4[7]
                        arg2[0x12] = divu.dp.d(0:(arg2[5]), zx.d(edx_4[7]) u>> 3)
                        return 1
                    
                    ecx_9 = ecx_9 + 8 + ((edi_4 + 1) & 0xfffffffe)
                while (ecx_9 u< eax_28)
    
    arg2[4] = 0
    arg2[5] = 0

return 0
