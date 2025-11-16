// 函数: sub_474680
// 地址: 0x474680
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* eax = *arg3

switch (eax)
    case nullptr, 1
        *(arg4 + 0x4c) = 0
        return arg4
    case 2, 3
        eax = sub_473470()
        
        if (arg3[1] != 0)
            *(arg4 + 0x74) += 1
            arg3[1] = 0
            return arg4
    case 4, 5, 6, 7, 8, 9, 0xa
        void* ecx_1 = sub_473470()
        eax = arg3[1]
        
        if (eax != 0)
            if (eax != 1)
                int32_t eax_5 = data_1cd6410
                arg3[6] = eax_5
                arg3[1] = 0
                return eax_5
            
            void* var_14_1 = ecx_1
            int32_t* var_18_1 = arg3
            arg3[1] = 2
            sub_481980(eax, arg2, ecx_1)
            *(arg4 + 0x74) += 1
            return arg4
        
        if (data_703840 == 0 && arg3[3] == 0)
            int32_t eax_6 = *arg3
            int32_t ebx_1 = data_1cd6410
            
            if (eax_6 != 4 && eax_6 != 8)
                if (data_12dc610 != 0 || data_1392700 == 0)
                    goto label_47477e
                
                arg3[6] = ebx_1
                return ebx_1
            
            if (data_12dc610 != 0 || data_1392700 == 0)
            label_47477e:
                eax = ebx_1 - arg3[6]
                
                if (eax u>= arg3[8])
                    goto label_474786
            else
                void* var_14_2 = ecx_1
                int32_t* var_18_2 = arg3
                eax, ecx_1 = sub_481e00(eax_6, arg2, ecx_1)
            label_474786:
                void* var_14_3 = ecx_1
                int32_t* var_18_3 = arg3
                arg3[6] = ebx_1
                void* ecx_2
                eax, ecx_2 = sub_481bd0(eax, arg2, ecx_1)
                
                if (arg3[4] == 0)
                    eax = arg3[9]
                    
                    if (eax == 0xffffffff)
                        void* var_14_4 = ecx_2
                        int32_t* var_18_4 = arg3
                        eax = sub_481980(eax, arg2, ecx_2)
                    else
                        arg3[8] = eax
                        arg3[9] = 0xffffffff
                    
                    if (arg3[2] == 0)
                        eax = arg4
                        *(eax + 0x74) += 1
                
                arg3[2] = 0

return eax
