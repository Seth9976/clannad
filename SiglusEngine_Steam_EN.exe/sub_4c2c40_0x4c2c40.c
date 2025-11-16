// 函数: sub_4c2c40
// 地址: 0x4c2c40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t ebx = arg2

if (arg3 u> 0x3f)
    return 

WaitForSingleObject(data_641b54, 0xffffffff)

if (data_641b5c != 0)
    void* eax = (&data_208cd54)[arg3 * 0x60]
    
    if (eax != 0)
        if (*(eax + 0x14) != 0)
            sub_4c2790()
            int32_t* ecx_2 = (&data_208cd58)[arg3 * 0x60]
            
            if (ecx_2 != 0)
                (*(*ecx_2 + 0x48))(ecx_2)
                int32_t* eax_2 = (&data_208cd58)[arg3 * 0x60]
                (*(*eax_2 + 8))(eax_2)
                (&data_208cd58)[arg3 * 0x60] = 0
            
            void* edx = (&data_208cd54)[arg3 * 0x60]
            int32_t eax_3 = arg5
            int32_t ecx_4 = arg4
            *(arg3 * 0x180 + &data_208cd50) = 0
            *(arg3 * 0x180 + &data_208cd64) = 0
            
            if (*(edx + 0x2e) == 0x10)
                ebx s>>= 1
                eax_3 s>>= 1
                ecx_4 s>>= 1
            
            if (eax_3 s<= 0 || eax_3 s> *(edx + 0x18))
                eax_3 = *(edx + 0x18)
            
            *(edx + 0x388) = eax_3
            void* eax_4
            
            if (ebx s>= 0)
                eax_4 = (&data_208cd54)[arg3 * 0x60]
            
            if (ebx s< 0 || ebx s> *(eax_4 + 0x388))
                *((&data_208cd54)[arg3 * 0x60] + 0x380) = 0
            else
                *(eax_4 + 0x380) = ebx
            
            void* eax_6
            
            if (ecx_4 s>= 0)
                eax_6 = (&data_208cd54)[arg3 * 0x60]
            
            if (ecx_4 s< 0 || ecx_4 s> *(eax_6 + 0x388))
                void* ecx_5 = (&data_208cd54)[arg3 * 0x60]
                *(ecx_5 + 0x384) = *(ecx_5 + 0x380)
            else
                *(eax_6 + 0x384) = ecx_4
            
            void* ecx_6 = (&data_208cd54)[arg3 * 0x60]
            *(arg3 * 0x180 + 0x208cd78) = *(ecx_6 + 0x380)
            *(arg3 * 0x180 + 0x208cd74) = 0
            *(arg3 * 0x180 + 0x208cd6c) = 0
            *(arg3 * 0x180 + 0x208cd70) = 0
            *(ecx_6 + 0x38c) = *(ecx_6 + 0x388) - *(ecx_6 + 0x380)
            void* ecx_7 = (&data_208cd54)[arg3 * 0x60]
            int32_t eax_11 = *(ecx_7 + 0x38c)
            
            if (*(ecx_7 + 0x2e) == 0x10)
                eax_11 *= 2
            
            *(ecx_7 + 0x390) = eax_11
            void* ecx_8 = (&data_208cd54)[arg3 * 0x60]
            *(ecx_8 + 0x394) = *(ecx_8 + 0x388) - *(ecx_8 + 0x384)
            void* ecx_9 = (&data_208cd54)[arg3 * 0x60]
            int32_t eax_14 = *(ecx_9 + 0x394)
            
            if (*(ecx_9 + 0x2e) == 0x10)
                eax_14 *= 2
            
            *(ecx_9 + 0x398) = eax_14
            void* ecx_10 = (&data_208cd54)[arg3 * 0x60]
            int32_t eax_15 = *(ecx_10 + 0x390)
            int32_t ebx_1 = *(ecx_10 + 0x398)
            
            if (eax_15 s>= ebx_1)
                ebx_1 = eax_15
            
            uint32_t eax_16 = zx.d(*(ecx_10 + 0x2c))
            
            if (*(ecx_10 + 0x2e) == 0x10)
                eax_16 *= 2
            
            int32_t ecx_11 = *(ecx_10 + 0x30)
            
            if (ecx_11 u> 0x2b11)
                if (ecx_11 u<= 0x5622)
                    eax_16 *= 2
                else if (ecx_11 u<= 0xac44)
                    eax_16 <<= 2
                else if (ecx_11 u> 0xbb80)
                    eax_16 <<= 3
                else
                    eax_16 <<= 2
            
            int32_t eax_17 = eax_16 * 0xc000
            
            if (ebx_1 s> eax_17)
                ebx_1 = eax_17
            
            sub_4c2b80(arg3 * 0x180 + &data_208cd50, ebx_1)
            void* ecx_13 = (&data_208cd54)[arg3 * 0x60]
            int32_t edx_2 = eax_17
            *(ecx_13 + 0x3a4) = *(ecx_13 + 0x380)
            *((&data_208cd54)[arg3 * 0x60] + 0x3a0) = 0
            *((&data_208cd54)[arg3 * 0x60] + 0x39c) = 0
            *((&data_208cd54)[arg3 * 0x60] + 0x3a8) = 0
            *((&data_208cd54)[arg3 * 0x60] + 0x3aa) = 0
            *((&data_208cd54)[arg3 * 0x60] + 0x3ac) = 0
            *((&data_208cd54)[arg3 * 0x60] + 0x3ad) = 0
            *((&data_208cd54)[arg3 * 0x60] + 0x3b0) = 0
            int32_t eax_27 = *((&data_208cd54)[arg3 * 0x60] + 0x390)
            
            if (eax_27 s<= edx_2)
                edx_2 = eax_27
            
            sub_4c1f20(arg3 * 0x180 + &data_208cd50, edx_2)
            void* edx_3 = (&data_208cd54)[arg3 * 0x60]
            int32_t eax_28 = 0
            int32_t ecx_15 = *(edx_3 + 0x390)
            *(arg3 * 0x180 + &data_208cd64) = 0
            
            if (ecx_15 s< ebx_1)
                eax_28 = ecx_15
            
            *(arg3 * 0x180 + 0x208cd60) = eax_28
            
            if (arg6 s> 0)
                *(edx_3 + 0x3a0) = arg6 - 1
            else
                *(edx_3 + 0x3a0) = 0xffffffff
            
            void* ecx_16 = (&data_208cd54)[arg3 * 0x60]
            
            if (*(ecx_16 + 0x380) == *(ecx_16 + 0x384) && *(ecx_16 + 0x3a4) == *(ecx_16 + 0x388))
                *(ecx_16 + 0x39c) = 1
            
            int32_t eax_33 = arg8
            *(arg3 * 0x180 + 0x208cd90) = 0
            
            if (eax_33 s>= 0)
                if (eax_33 s> 0xff)
                    eax_33 = 0xff
                
                *(arg3 * 0x180 + 0x208cdac) = eax_33
            
            sub_4c33a0(arg3)
            void* eax_34 = (&data_208cd54)[arg3 * 0x60]
            int32_t var_18_3
            
            if (*(eax_34 + 0x3a0) != 0 || *(eax_34 + 0x39c) == 0)
                var_18_3 = 1
            else
                var_18_3 = 0
            
            int32_t* eax_35 = (&data_208cd58)[arg3 * 0x60]
            (*(*eax_35 + 0x30))(eax_35, 0, 0, var_18_3)
            *(arg3 * 0x180 + &data_208cd50) = 1
            int32_t eax_36 = *(arg3 * 0x180 + 0x208cdac)
            
            if (eax_36 != 0xff)
                sub_4c3500(eax_36, 5, arg3, eax_36, 0xff, arg7)
        else
            sub_4cd820(arg3 * 0x3b8 + 0x2092d50)
            (&data_208cd54)[arg3 * 0x60] = 0

ReleaseSemaphore(data_641b54, 1, nullptr)
